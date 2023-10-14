/*
  Blue Box project
  Nucleo 144 

  DO testing:
  
  PB8 - DIO15
  
  
*/

int output_Pin = 15;
int output_State;

void setup()
{
  Serial.begin(9600);
  while(!Serial); 
  Serial.println("Digital Output testing");

  pinMode(output_Pin, OUTPUT);
  digitalWrite(output_Pin, LOW);
  output_State = digitalRead(output_Pin);

}

void loop()
{
  if (output_State == 0){
     digitalWrite(output_Pin, HIGH);
  }
  else {
     digitalWrite(output_Pin, LOW);
  }

  output_State = digitalRead(output_Pin);

  Serial.print("Digital Output: ");
  Serial.println(output_State);

  delay(5000);
}

