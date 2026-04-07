#### Intro

##### On the computer
- Open the RemoteXY website in your browser (https://remotexy.com/en/)
- Open another tab and browse to (https://github.com/DonaldPotbury/RemoteXY-Car)
- Open the Arduino IDE
	- Configure the IDE for ESP8266 (if needed)
		- Paste in the string as described in the class preps
	- Load the RemoteXY library
		- Download RemoteXY library
		- Under Sketch/Include Library choose "Add .ZIP file"
		- Browse the where you saved the zip file and select it
##### Create the GUI in RemoteXY
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
	
##### Generate the Code
- Click on the "Get source code button"
- A source code page is presented.
- Click "Copy code"
- Copy the code to the Arduino IDE
- Open the Arduino IDE
- A blank sketch stub should appear.  If not, click File/New Sketch
- Delete the code in the sketch stub and paste in the code generated from above
- Delete the setup and loop functions
	- We will be replacing them with our own.
- Copy the [Code Stub](Sketches/Code%20Stub.md) and past it in at the bottom of code in the IDE
- Double check to insure the WiFi SSID to something unique
- Upload it to the WeMos D1 Mini
##### On the phone
- Load the App
- Connect to your access point
