# coastal-cleaning-bot
ESP32-CAM Powered Coastal Clean Bot with Remote Control and Live Camera Feed
This project features an ESP32-CAM module that powers a coastal clean bot—a remote-controlled car equipped with live camera feed streaming to a smartphone. The bot can be remotely controlled while providing real-time video footage via the ESP32-CAM module, and includes additional features like stepper motor control, distance sensing, and buzzer alerts.

Features:

Remote-Controlled Coastal Clean Bot: Control the robot from your smartphone via a custom mobile interface, allowing movement and direction adjustments.
Live Camera Feed: Stream live video from the ESP32-CAM module directly to your phone. Monitor the bot's environment in real-time.
Stepper Motor Control: The bot's movement is powered by a stepper motor that rotates smoothly, ensuring precision in movement.
Ultrasonic Distance Sensing: The bot uses an ultrasonic sensor (HC-SR04) to detect obstacles and measure distances in real-time.
Buzzer Alert System: When an object is detected within 5 cm, a buzzer sounds to alert the user to nearby obstacles.
Coastal Cleanup Functionality: This bot is designed for coastal cleanup tasks, such as collecting debris along the shore, while being remotely controlled for maximum flexibility.
Components Used:

ESP32-CAM Module for live camera feed and Wi-Fi communication
DC Motors/Stepper Motors for movement control
HC-SR04 Ultrasonic Sensor for distance measurement and obstacle detection
Buzzer for proximity alerts
Chassis/Car Frame for the bot's structure
Power Supply (Battery) to power the bot and camera
How it works:

The ESP32-CAM module is used to provide a live video stream, accessible on your phone for real-time monitoring.
The coastal clean bot can be controlled remotely from a mobile device through a custom interface, allowing you to move it in any direction while monitoring its environment.
Ultrasonic sensors constantly measure the distance to nearby objects, helping the bot avoid collisions while navigating its environment.
Stepper motors are used to control the bot’s movement, ensuring smooth and precise motion, especially when navigating tight spaces.
When an obstacle comes too close (less than 5 cm), the buzzer emits a sound to alert the user of the proximity.
How to Use:

Connect the ESP32-CAM module, motors, and sensors to the bot.
Upload the code to the ESP32-CAM module and connect it to your Wi-Fi network.
Use the provided mobile interface (or any compatible app) to control the bot remotely.
Watch the live feed from the camera and navigate the bot for cleanup tasks or exploration.
The bot will avoid obstacles and alert you via the buzzer if objects are detected nearby.
Applications:

Coastal Cleanup: The bot is designed to help clean up beaches by collecting debris while being remotely controlled.
Surveillance and Monitoring: The live camera feed allows for remote monitoring of a specific area, useful for various outdoor applications.
Educational Projects: Learn about robotics, wireless communication, and remote control using the ESP32 platform.
