![RemoteXY Car.png](/images/RemoteXY Car.png)

This project is a remix of the [RemoteXY Car](https://remotexy.com/en/examples/car/) and utilizes the [RemoteXY](https://remotexy.com/en/) app to control it.  The app is available for both Android and iPhone.  The free version can have up to 5 elements which will be plenty for this project.  

### About RemoteXY:
A Google AI search says: 
	"**[RemoteXY](https://remotexy.com/)** is "a comprehensive platform for creating custom graphical user interfaces (GUIs) to remotely control microcontroller-based devices using a smartphone or tablet. It is popular among the maker community for its ease of use, as it allows for the design of mobile app interfaces without requiring extensive mobile app development or coding knowledge. 
## Electronics:
The electronics for this project consist of a WeMos D1 Mini microcontroller and a DRV8833 dual motor driver.

The connections between the two devices are shown in the table below:

| D1 Mini | DRV8833 |
| ------- | ------- |
| 5V      | VCC     |
| GND     | GND     |
| D3      | IN4     |
| D4      | IN3     |
| D7      | IN1     |
| D8      | IN2     |

![[Electronics Board.png]]
Power to the board is provided through the USB-C port on the D1 mini.
#### WeMos D1 Mini:
#### DRV8833:

## Printed Components:

## Materials:

| Qty | Item                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               |  Link |
| :-: | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----: |
|  1  | [WeMos D1 Mini](https://www.amazon.com/Internet-ESP8266-Compatible-Arduino-MicroPython/dp/B0CL9CTXZH/ref=sr_1_3?adgrpid=192200860211&dib=eyJ2IjoiMSJ9._dkPBKRgdfF7W2GWrFw4Ig7yONXhN0m-TW-lo-h81qGMAJyuW0r5nczNJafYnYshy-vFn0ja5oK0w8Zi6ve3kFzwkn49BQ1-gfWwsYhRcma6rsAt3E-PuVbv9ke3t6vO6CZCTZePKoBbSdztIwWscvGdGxH34JAjSIJXvJ3ERIP-pQwYHMZzI55fgVjv88kC9c0TjkvUYRnJI0uu0bqS2DOl0g45IDx8ws4t9AyOULg.ARCXv7BIZ6EAD7oRwOFQ_nhecDN7XcBAV2z13HW2DKo&dib_tag=se&hvadid=779584911010&hvdev=c&hvexpln=0&hvlocphy=9016355&hvnetw=g&hvocijid=4491046745652278960--&hvqmt=e&hvrand=4491046745652278960&hvtargid=kwd-304334880841&hydadcr=24331_13859549_2335033&keywords=esp8266%2Bd1%2Bmini&mcid=abb81b8fb4de3e90b7b30e6600c02feb&qid=1774116651&sr=8-3&th=1)                                                                                                 | $3.00 |
|  1  | [DRV8833 Dual H-Bridge](https://www.amazon.com/MTDELE-Driver-Compatible-DRV8833-Controller/dp/B0FG2XJCXR/ref=sr_1_4_sspa?adgrpid=183608349982&dib=eyJ2IjoiMSJ9.36vUp13tUMsAkN8_NIQVOpZLD5llqbi9QFyj2l2kl8V-fmJN1Sb0GM0JMtldQIIvuH8-MGUbCBR0Q1JX0HMr5itQW_Sj6ucYa8tmSJHMY9obKb3gUrXuSMmeNTeN0i9iOPKy2uLUatCxDEIn3WNs2cYUfgvS3ffvoSiE67MoZGepXi-RMMGutfUZx0Aw3GlMWf1K9UUcZneyZTMZwfMavzxHB-4DojdglnaIpSgAnE4kTQOTOM3Wb-hXLPjJmUnXd5PNhRVKZGzLSq0s17MuIwwlY3FdHVWfyihFudHob9o.IXwuAke2wwc4tGM-mgoYrcmqQSNy0GYFiLLlXTIqYsY&dib_tag=se&hvadid=779549050702&hvdev=c&hvexpln=0&hvlocphy=9016355&hvnetw=g&hvocijid=4016349706161462674--&hvqmt=e&hvrand=4016349706161462674&hvtargid=kwd-299636053329&hydadcr=1656_13535881_13568&keywords=drv8833&mcid=8983dd8c144531f0b0fa5911b7c2f424&qid=1774114904&sr=8-4-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) | $1.50 |
|  2  | [TT Motor + Wheel](https://www.amazon.com/KEAcvise-Motor-Gearbox-Wheel-arduino/dp/B0FPFC2WZL/ref=sr_1_30?adgrpid=190073077647&dib=eyJ2IjoiMSJ9.dLwDHynjItuTGgGIKFMBAvGrwQOry9L9lvlR5EsC5FCYfQ6KzXkalu6lKmYpB0JI30Jpti12ZrriHmvFpwqJ5QCXIWYQXG7sZHjQ1XIm1E9rHt6pYQflOpubyhNytjCWzwTF9N2-jrZHLaczjH0anK8OMVPfjxcuQYhe5CP0fB1fU8hH6bGdbF5MfnhKVXkJfBLrO9nLUVfKQTPDiQgvHiKiw84QSU125wJ4inXBGOIQYP4HO0QUSRKrWAl7dW0WQ27zlEgm4LomL5u_jgozAdT2vmUNl1LHfTHMRQj0KgE.vXztIfwMkwtw5AIDzfSrtkwUYu4uwFWc_-S0R0EGrU0&dib_tag=se&hvadid=779556177337&hvdev=c&hvexpln=0&hvlocphy=9016355&hvnetw=g&hvocijid=2242818180670382940--&hvqmt=e&hvrand=2242818180670382940&hvtargid=kwd-1930315191&hydadcr=3535_13857088_11052&keywords=tt+motor&mcid=116ed5dee20b3426a82053fa2363321d&qid=1774115854&sr=8-30)                                                            | $4.50 |
|  1  | [Battery Holder](https://www.amazon.com/VWEICYY-Battery-Holder-Port-Case/dp/B0DDT2JGKZ/ref=sr_1_6_sspa?crid=18IICEMAMU4QN&dib=eyJ2IjoiMSJ9.FBqlymiTE6PJ4Y2riH0QrNSutDQlm1uOwJ_AQG0Vws2p7KALddsTLKBP8n38AhtbW9dXnKUrzzmAOtn4B8Looz8YtWG3S5JfV2rHlzXMBXrq1CKLNu0wHQ6Ukm6xFpWan2rI5r1sAKev9k8rFeiUmOl6j6pCQGxbus0uSkTXELD0ehehuBPWwOwLYlyGyAhGwc1JXpEpqEWeSH_5vdrxlp_u_jfcq0SVblZlnH4jh96l5Y17pm28jhhcIvJCnPX5RCpbMW4cHuUw2E8lrxD5cGWR2yP1rXM-MhwSxbEgWSs.7Z6ntrZBeotysmJ2X8wQktYwgGSxyTrVPfXTePCy0Bo&dib_tag=se&keywords=4%2Baa%2Bbattery%2Bholder&qid=1774119812&s=electronics&sprefix=4%2Baa%2Bbattery%2Bholder%2Celectronics%2C157&sr=1-6-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&psc=1)                                                                                                                                                             | $3.00 |
|  4  | [AA Batteries]                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |       |
|  1  | [Data Cable](https://www.amazon.com/etguuds-Charger-Charging-Braided-Samsung/dp/B0C2J2RWZR/ref=pd_bxgy_thbs_d_sccl_1/132-1523373-2361139?pd_rd_w=hHhbG&content-id=amzn1.sym.9bef5913-5870-4504-8883-3ba89d7f8e39&pf_rd_p=9bef5913-5870-4504-8883-3ba89d7f8e39&pf_rd_r=HRTE90NSFAHV15HMVZ26&pd_rd_wg=ojIzH&pd_rd_r=0dc09620-c9ba-46e9-9265-99a924131af9&pd_rd_i=B0C2J2RWZR&th=1)                                                                                                                                                                                                                                                                                                                                                                                                                                                                    | $1.00 |
|  4  | [m3 x 25 mm machine screw](https://www.amazon.com/cSeao-40-Pack-Phillips-Machine-Stainless/dp/B08R8J3175/ref=sr_1_4?dib=eyJ2IjoiMSJ9.lWVWb898vCIqILLCnhb36Un_e1rV579OotEAIexcaBU30VUJxRr8g3H04JPpinQZ1H5jIXBmZp2VVEKFRl-VPsDd4SgsyiWEAmY1bQILoU0VZVVCiFAR_l7EJbrgPsu88rG7CpaZyu1HgenLLlLogXOBsUwxh4MtPKVwOsMsnXax2WvErRC1SFPRC0EG5RIALpHRP6alujReOAq7EYO4a5dAviGHRbZzDIlW2wlRz2A.fMqK8Xh6F6f2mQ-T0uDpz6bmRft0ackvM7i0lf_OUE4&dib_tag=se&keywords=m3%2Bx%2B25%2Bmm&qid=1774305877&sr=8-4&th=1)                                                                                                                                                                                                                                                                                                                                                      |       |
|  6  | m3 x 8mm self tapping screw                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |       |


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
