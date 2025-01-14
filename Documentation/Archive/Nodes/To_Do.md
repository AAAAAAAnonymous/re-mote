# List of things to do on this project

This is a list of things that need to be done in this project, in no particular order

* Turn this list into gitlab issues
* Create file detailing how to setup turtle trackers
* Split water quality setup file into end node, gateway, and server setup files
* Do a proper deployment test
* Add some form of testing and calibration code to make seting up things easier for others
* Add proper backwards communication (from server to gateway to end node) for changing settings
* Convert to new lower power Arduinos
* Add ability to change settings using bluetooth
* Convert Arduino code to use an event loop
* Add remoteConfig.h configurator to the website to make configuration a lot easier
* Robustify both the Gateway and End Node to ensure proper handling of errors
* Add ability to send error to website from node
* Add ability to change the time period that you're viewing data for to the website
* Add encryption for messages between nodes
* Add encryption to saved data on server
* Add ability to add login page to view data on the website, maybe with different amounts of power (ex: view data vs. change node settings)
* Add verification to ensure that data coming from an end node is legitimate, same for gateway to server
* Document how to change all modules on nodes (ex: data saving, communication method, etc.)
* Add data point validation to the server (remove outliers)
* Add website alerts for important data changes (spikes, dips, etc.)
* Add data analysis capabilities to the website
* Fix floating point rounding causing weird values
* Change names in data post to gateway to use actual chars instead of hex representation of chars
* Combine similar libraries from Libraries\_Victor and Libraries\_Ryan together
	* Namely the EndData/EEPROM, Sleep/LowPower, and GPS/UBX+NeoGPS libraries
* Add one time 3G module setup code to gateway
	* .setGPRSNetworkSettings("pda.bell.ca");
	* .setHTTPSRedirect(true);
