# Generated by Django 2.1 on 2018-08-21 19:18

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='SensorData',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('type', models.CharField(max_length=30)),
                ('value', models.CharField(max_length=50)),
                ('source', models.CharField(max_length=50)),
                ('data_date', models.DateField(auto_now_add=True)),
                ('data_time', models.TimeField(auto_now_add=True)),
            ],
        ),
    ]
