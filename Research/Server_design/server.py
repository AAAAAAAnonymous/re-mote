
#to run `set FLASK_APP=filename.py`, then `flask run` on windows
from flask import Flask
from flask import request
import influxdb
from flask import Response
from requests import get



app = Flask("myServer")

#end point for sensors sending data to the database
@app.route("/sendData")
def data():
    numData = request.args.get('numData') # number of data to be sent
    client = influxdb.InfluxDBClient(host='localhost', port='8086',database='sensors') #change according to your database

    for i in range (int(numData)):
        sensorType = request.args.get('type'+str(i+1)) #ammonia, ph etc, should equate to measurement name in influxdb
        sensorID = request.args.get('id'+str(i+1)) #which sensor is sending it, should be a tag in influxdb
        value = request.args.get('value'+str(i+1)) #sensor value
        data="%s,sensorID=%s value=%f "%(sensorType,sensorID,float(value))
        client.write(data, params={'db': client._database}, protocol='line')

    return Response("", status=200, mimetype='text/plain ')


#FLASK proxy server to retrieve data from influx
SITE_NAME = 'http://localhost:8086' #since this is the influxdb default port
@app.route('/getData/<path:path>')
def proxy(path):
    r=get("%s/%s"%(SITE_NAME,path), stream=True , params = request.args) #makes get request to localhost

    CHUNK_SIZE=1024

    #streams data obtained from database to original URL
    def generate():
        for chunk in r.iter_content(CHUNK_SIZE):
            yield chunk
    return Response(generate())