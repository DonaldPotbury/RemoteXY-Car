// Motor Driver Pins
#define MOTOR_DRIVER_OUT_1 13 // D7
#define MOTOR_DRIVER_OUT_2 15 // D8
#define MOTOR_DRIVER_OUT_3 0  // D3
#define MOTOR_DRIVER_OUT_4 2  // D4


void setup() 
{
  Serial.begin(115200);
  pinMode(MOTOR_DRIVER_OUT_1, OUTPUT);
  pinMode(MOTOR_DRIVER_OUT_2, OUTPUT);
  pinMode(MOTOR_DRIVER_OUT_3, OUTPUT);
  pinMode(MOTOR_DRIVER_OUT_4, OUTPUT);

  digitalWrite(MOTOR_DRIVER_OUT_1, LOW);
  digitalWrite(MOTOR_DRIVER_OUT_2, LOW);
  digitalWrite(MOTOR_DRIVER_OUT_3, LOW);
  digitalWrite(MOTOR_DRIVER_OUT_4, LOW);
}

void loop() 
{ 
  
  // Left motor backwards
  //digitalWrite(MOTOR_DRIVER_OUT_1, LOW);   
  //digitalWrite(MOTOR_DRIVER_OUT_2, HIGH);
  //delay(2000);
  
  // Left motor stop
  //digitalWrite(MOTOR_DRIVER_OUT_2, LOW);
  //digitalWrite(MOTOR_DRIVER_OUT_2, LOW);
  //delay(2000);
  
  // Left motor forwards
  //digitalWrite(MOTOR_DRIVER_OUT_1, HIGH);
  //digitalWrite(MOTOR_DRIVER_OUT_2, LOW);
  //delay(2000); 

  // Left motor stop
  //digitalWrite(MOTOR_DRIVER_OUT_1, LOW);
  //digitalWrite(MOTOR_DRIVER_OUT_2, LOW);
  //delay(2000);

  // Ramp down left motor from 0 to 255
  //for (int i=0; i<256; i+=5)
  //{
  //  digitalWrite(MOTOR_DRIVER_OUT_1, HIGH);
  //  analogWrite(MOTOR_DRIVER_OUT_2, i);
  //  delay(500);  
  //}
  // Left motor stop
  //digitalWrite(MOTOR_DRIVER_OUT_1, LOW);
  //digitalWrite(MOTOR_DRIVER_OUT_2, LOW);
  //delay(2000);




  // right motor stop
  Serial.println("Right motor stop");
  digitalWrite(MOTOR_DRIVER_OUT_3, LOW);
  digitalWrite(MOTOR_DRIVER_OUT_4, LOW);
  delay(2000);


  //digitalWrite(MOTOR_DRIVER_OUT_3, HIGH);
  //digitalWrite(MOTOR_DRIVER_OUT_4, LOW);
  //delay(2000);

  // Ramp down right motor from 0 to 255
  Serial.println("Right motor ramp down");
  for (int i=0; i<256; i+=5)
  {
    digitalWrite(MOTOR_DRIVER_OUT_3, HIGH);
    analogWrite(MOTOR_DRIVER_OUT_4, i);
    Serial.println(i);
    delay(500);  
  }

  // Left motor stop
  Serial.println("Right motor stop");
  digitalWrite(MOTOR_DRIVER_OUT_3, LOW);
  digitalWrite(MOTOR_DRIVER_OUT_4, LOW);
  delay(2000);  

  Serial.println("Right motor ramp down backwards");
  for (int i=0; i<256; i+=5)
  {
    digitalWrite(MOTOR_DRIVER_OUT_3, HIGH);
    analogWrite(MOTOR_DRIVER_OUT_4, i);
    Serial.println(i);
    delay(500);  
  }

  // Left motor stop
  Serial.println("Right motor stop");
  digitalWrite(MOTOR_DRIVER_OUT_3, LOW);
  digitalWrite(MOTOR_DRIVER_OUT_4, LOW);
  delay(2000);  
}


