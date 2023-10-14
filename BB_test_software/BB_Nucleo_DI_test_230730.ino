/*
  Blue Box project
  Nucleo 144 

  DI testing:
  
  PB8 - DIO15
  
  
*/

int input_Pin = 15;

void setup()
{
  Serial.begin(9600);
  while(!Serial); 
  Serial.println("Digital Input testing");

  pinMode(input_Pin, OUTPUT);

}

void loop()
{
  
  int input_State = digitalRead(input_Pin);
  
  Serial.print("Digital Input: ");
  Serial.println(input_State);

  delay(1000);
}

