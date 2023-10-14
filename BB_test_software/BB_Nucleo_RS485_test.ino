/*
  Blue Box project
  Nucleo 144 
  RS-485 testing
    
*/

#include <HardwareSerial.h>

HardwareSerial Serial3(PC_11, PC_10);   //RX, TX

int output_Pin = 8;
int state = 0;

void setup()
{
  
  pinMode(output_Pin, OUTPUT);
  digitalWrite(output_Pin, HIGH);
   
  Serial.begin(9600); 
  while (!Serial) {
    ;  
  }
  
  Serial3.begin(9600); 
  delay(1000); 

  Serial.println("RS485 Test");

  
}//setup

void loop()
{

  Serial3.println("RS485 test");
  delay(100);
  digitalWrite(output_Pin, LOW);
  
  while (Serial3.available() > 0) {
    char inChar = (char)Serial3.read();
    Serial.print(inChar);

    if (inChar == '\n') {
        state = 1;
      }
  }

  if (state == 1){
    digitalWrite(output_Pin, HIGH); 
    delay(100);
    state = 0;
  }
  
  delay(1000);
  
}//loop

