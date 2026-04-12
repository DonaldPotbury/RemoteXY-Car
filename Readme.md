![Test](<images/RemoteXY Car.png>)

This project is a remix of the [RemoteXY Car](https://remotexy.com/en/examples/car/) and utilizes the [RemoteXY](https://remotexy.com/en/) app to control it.  The app is available for both Android and iPhone.  A Google AI search says: 
	"**[RemoteXY](https://remotexy.com/)** is "a comprehensive platform for creating custom graphical user interfaces (GUIs) to remotely control microcontroller-based devices using a smartphone or tablet. It is popular among the maker community for its ease of use, as it allows for the design of mobile app interfaces without requiring extensive mobile app development or coding knowledge. 

The free version can have up to 5 elements which will be plenty for this project.  


## Electronics:
The primary differences between this and the example project are the microcontroller and the motor driver.   We replaced the Arduino and L298n with a WeMos D1 Mini and a DRB8833.  And of course this model has a 3D printed chassis.

The electronics for this project consist of a WeMos D1 Mini microcontroller and a DRV8833 dual motor driver.

![](<images/Electronics Board.png>)
Components mounted on a perf board
Power to the board is provided through the USB-C port on the D1 mini.

The connections between the two devices are shown in the table below:

| WeMos D1 Mini | DRV8833 | Motors  |
| ------------- | ------- | ------- |
| 5V            | VCC     |         |
| GND           | GND     |         |
| D3            | IN4     |         |
| D4            | IN3     |         |
| D7            | IN1     |         |
| D8            | IN2     |         |
| -             | OUT1    | Motor 1 |
| -             | OUT2    | Motor 1 |
| -             | OUT3    | Motor 2 |
| -             | OUT4    | Motor 2 |
![677](<images/Wiring Diagram.png>)
Wiring diagram



#### WeMos D1 Mini:
Makersportal.com describes the WeMos D1 Mini as:
	The WeMos D1 Mini is an inexpensive ESP8266-based WiFi board that is low-profile but just as powerful as any NodeMCU or ESP8266-based microcontroller. The D1 Mini is incredibly versatile because it is inexpensive, WiFi-enabled, and fully compatible with the Arduino platform. In this tutorial, the ESP8266 library and board manager will be introduced in order to get the D1 Mini acting as an Arduino board. Then, a simple web page will be introduced with the intention of harnessing the WiFi capabilities of the module. The D1 Mini will act as a web server, allowing any WiFi-connected device to interact with the board and control its pins wirelessly.

 ![](https://lastminuteengineers.com/wp-content/uploads/iot/WeMos-D1-Mini-Pinout.png)


#### DRV8833:
According to Google AI: 
	The **DRV8833** is a dual H-bridge motor driver integrated circuit (IC) from Texas Instruments designed to control either **two brushed DC motors** or one bipolar stepper motor. It is a popular, high-efficiency alternative to the older L298N driver, especially for low-voltage, battery-powered projects like small robots and toys.

This animation from Last Minute Engineers demonstrates how an H-Bridge changes polarity:
![](<images/H-Bridge-Working-Motor-Direction-Control-Animation.gif>)



## Materials:

| Qty | Item                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |  Link |
| :-: | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----: |
|  1  | [WeMos D1 Mini](https://www.amazon.com/dp/B0CL9CTXZH?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       | $3.00 |
|  1  | [DRV8833 Dual H-Bridge](https://www.amazon.com/MTDELE-Driver-Compatible-DRV8833-Controller/dp/B0FG2XJCXR/ref=sr_1_4_sspa?adgrpid=183608349982&dib=eyJ2IjoiMSJ9.36vUp13tUMsAkN8_NIQVOpZLD5llqbi9QFyj2l2kl8V-fmJN1Sb0GM0JMtldQIIvuH8-MGUbCBR0Q1JX0HMr5itQW_Sj6ucYa8tmSJHMY9obKb3gUrXuSMmeNTeN0i9iOPKy2uLUatCxDEIn3WNs2cYUfgvS3ffvoSiE67MoZGepXi-RMMGutfUZx0Aw3GlMWf1K9UUcZneyZTMZwfMavzxHB-4DojdglnaIpSgAnE4kTQOTOM3Wb-hXLPjJmUnXd5PNhRVKZGzLSq0s17MuIwwlY3FdHVWfyihFudHob9o.IXwuAke2wwc4tGM-mgoYrcmqQSNy0GYFiLLlXTIqYsY&dib_tag=se&hvadid=779549050702&hvdev=c&hvexpln=0&hvlocphy=9016355&hvnetw=g&hvocijid=4016349706161462674--&hvqmt=e&hvrand=4016349706161462674&hvtargid=kwd-299636053329&hydadcr=1656_13535881_13568&keywords=drv8833&mcid=8983dd8c144531f0b0fa5911b7c2f424&qid=1774114904&sr=8-4-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) | $1.50 |
|  2  | [TT Motor + Wheel](https://www.amazon.com/dp/B07DQGX369?ref=ppx_yo2ov_dt_b_fed_asin_title)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         | $4.50 |
|  1  | [Battery Holder](https://www.amazon.com/dp/B0DDT2JGKZ?ref=ppx_yo2ov_dt_b_fed_asin_title)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           | $3.00 |
|  4  | [AA Batteries]                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |       |
|  1  | [Data Cable](https://www.amazon.com/dp/B0C2J2RWZR?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          | $1.00 |
|  4  | [m3 x 25 mm machine screw](https://www.amazon.com/cSeao-40-Pack-Phillips-Machine-Stainless/dp/B08R8J3175/ref=sr_1_4?dib=eyJ2IjoiMSJ9.lWVWb898vCIqILLCnhb36Un_e1rV579OotEAIexcaBU30VUJxRr8g3H04JPpinQZ1H5jIXBmZp2VVEKFRl-VPsDd4SgsyiWEAmY1bQILoU0VZVVCiFAR_l7EJbrgPsu88rG7CpaZyu1HgenLLlLogXOBsUwxh4MtPKVwOsMsnXax2WvErRC1SFPRC0EG5RIALpHRP6alujReOAq7EYO4a5dAviGHRbZzDIlW2wlRz2A.fMqK8Xh6F6f2mQ-T0uDpz6bmRft0ackvM7i0lf_OUE4&dib_tag=se&keywords=m3%2Bx%2B25%2Bmm&qid=1774305877&sr=8-4&th=1)                                                                                                                                                                                                                                                                                                                                                      |       |
|  6  | [m3 x 8mm self tapping screw](https://www.amazon.com/dp/B0FJDNSPWT?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |       |
|  2  | 3mm Flat Washer                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |       |
|  1  | [Roller Caster](https://www.amazon.com/dp/B07VGGVXMH?ref=ppx_yo2ov_dt_b_fed_asin_title)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |       |




## Instructions:

#### Preparations
- Open my GitHub repo https://github.com/DonaldPotbury/RemoteXY-Car
- Open the RemoteXY website (https://remotexy.com/en/) in a new tab
- Open ([https://github.com/RemoteXY/RemoteXY-Arduino-library](https://github.com/RemoteXY/RemoteXY-Arduino-library)) in a new tab
- Start the Arduino IDE
	- Configure the IDE for ESP8266 (if needed)
		- Go to File/Preferences and paste the following string in text box labeled "Additional Boards Manager URL's"
		- http://arduino.esp8266.com/stable/package_esp8266com_index.json
		- See https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/ for detailed instructions
	- Load the RemoteXY library
		- Download RemoteXY library which can be found at [https://github.com/RemoteXY/RemoteXY-Arduino-library](https://github.com/RemoteXY/RemoteXY-Arduino-library)
		- Download the zip file.
		- Under Sketch/Include Library choose "Add .ZIP file"
		- Browse the where you saved the zip file and select it
#### Create the GUI in RemoteXY
- Expand Configuration section along the right
- Click the top item (might be Bluetooth)
- You are presented with a configuration window.
- Under Connection choose "Wi-Fi Access point"
- Under Board choose "ESP8266 based board"
- Under Module choose "Integrated WiFi"
- Under IDE choose "Arduino"
- Click Apply
- We are back in the App editor
- Expand Connection
- Change the SSID to MakerCar__. (Where __ is your car number)
- Check Open point
- leave port at 6377
- Expand Settings
- Set Device name in app to "Maker Car"
- Access password is blank
- Expand View
- Click Add under Screen formats
- Add a horizontal screen format
- The left side of the editor screen has the controls
- Drag a "Joystick" control to the screen
- Joystick has been added to the configuration section on the right
- Check the Automatically center checkbox
- Set G-sensor button to "Bottom left" 
	
#### Generate the Code
- Click on the "Get source code button"
- A source code page is presented.
- Click "Copy code"
- Copy the code to the Arduino IDE
- Delete the "setup" and "loop" functions.
- Copy and paste the code found in "Code Stub.ccp"
- Double check to insure the WiFi SSID to something unique
- Upload it to the WeMos D1 Mini
#### On the phone
- Load the App
- Connect to your access point


## Notes:
1. The DRV8833 driver is "disabled" when it comes from the factory.  There are two ways to "enable" it.  
	1. Close the J2 jumper with a solder bridge.  
	2. Pull the EEP pin on the DRV8833 to HIGH by connecting it either to the 3.3 volt pin on the D1 mini or to any GPIO pin and setting it to HIGH.


## References:
[Last Minute Engineers - Controlling DC Motors with DRV8833](https://lastminuteengineers.com/drv8833-arduino-tutorial/)
	Describes an DRV8833.  It's advantages and how to use with Arduino
	
[RemoteXY Car](https://remotexy.com/en/examples/car/)
	Our vehicle was inspired by this design.  And we will use much of its code/

[Installing the ESP32 Board in Arduino IDE (Windows, Mac OS X, Linux)](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/)
	Explains how to configure the Arduino IDE for the ESP32

[Installing ESP8266 Board in Arduino IDE (Windows, Mac OS X, Linux)](https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/)
	Explains how to configure the Arduino IDE for the ESP8266

[Interface L298N DC Motor Driver Module with Arduino](https://lastminuteengineers.com/l298n-dc-stepper-driver-arduino-tutorial/)
	This video has a nice animation of how H-Bridges work.

[Last Minute Engineers - WeMos D1 Mini Pinout Reference](https://lastminuteengineers.com/wemos-d1-mini-pinout-reference/)
	Pinout reference for the WeMos D1 Mini

[Texas Instruments DRV8833 Specifications](https://www.ti.com/lit/ds/symlink/drv8833.pdf?ts=1775321067887&ref_url=https%253A%252F%252Fgemini.google.com%252F#:~:text=3%20Description,overtemperature.)


