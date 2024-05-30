# Introduction 
  
  The objective of this mini project was to create a digital thermometer using Arduino Uno and temperature sensors. The thermometer would measure the temperature and, if it exceeded a certain threshold, emit an audible alarm. Additionally, a mobile application was developed to display the temperature readings on a smartphone.


# Hypothesis 

● The digital thermometer system implemented using Arduino Uno and
temperature sensors will accurately measure and display temperature readings.
● When the temperature exceeds the predefined threshold, the alarm mechanism
(LEDs and buzzer) will activate successfully, indicating a temperature breach.
● The mobile application developed for temperature visualization will establish a
reliable Bluetooth connection with the Arduino and display real-time temperature
data on the smartphone.
● The collaboration of a team consisting of five individuals with diverse skills and
contributions will lead to the successful completion of the digital thermometer
mini project.

# Methodology 

## Hardware Setup :

### Components : 
Arduino Uno 1x
Jumper Wires 22x
Temperature Sensors (LM-35) 1x 
LEDs (Different Colors) 2x
Buzzer 1x
Breadboard (Small) 1x
Bluetooth Module (HC-05) 1x
### Circuit : 
   The Arduino Uno board was connected to the temperature sensors and other
components using jumper wires and the breadboard.
The LEDs and buzzer were connected to the appropriate pins on the Arduino board.
The Bluetooth module was connected to the Arduino board for wireless communication
with the smartphone.

![[Circuit.png]]

## Software Setup :
### Arduino Code :

The code included reading temperature sensor data, comparing it with a predefined
threshold, and controlling the LEDs and buzzer accordingly.
The code also involved establishing a Bluetooth connection with the smartphone for
data transmission

###  Mobile application : 
It was developed using [MIT APP INVENTOR](https://appinventor.mit.edu/).
The application was designed to establish a connection with the Arduino via Bluetooth
and receive temperature data.
The received temperature data was displayed on the smartphone's screen.



# Challenges Faced:

Several challenges were encountered during the project, requiring troubleshooting and
further investigation. These challenges included:
1. Bluetooth Module Detection:
The Bluetooth module used in the project was not initially detected by the smartphone
application. Despite configuring the module, it remained undetectable. This issue could
potentially be attributed to compatibility issues, incorrect wiring, or software
configuration problems. Additional investigation and troubleshooting were necessary to
address this challenges
2. Sensor Connectivity:
Initially, the temperature sensor posed difficulties in terms of its connectivity with the
Arduino board. Establishing a stable and reliable connection between the sensor and
the board required careful attention to wiring and ensuring proper connections. After
resolving these connectivity issues, the temperature sensor performed as intended.