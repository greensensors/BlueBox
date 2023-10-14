/*
  BlueBox project
  Nucleo 144 

  ADC testing:

  PC0	ADC1_IN1	0-5V    A1
  PC3	ADC1_IN4	4-20mA  A2
  
*/

int adcValue;
float ADC_1, ADC_2;

void setup()
{
  Serial.begin(9600);
  while(!Serial); 
  Serial.println("ADC testing");

}

void loop()
{
  adcValue = analogRead(A1);
  ADC_1 = 5.0 * adcValue/1024.0;
  Serial.print("ADC1: ");
  Serial.print(ADC_1);

  adcValue = analogRead(A2);
  ADC_2 = 3.3 * adcValue/1024.0;
  Serial.print("; ADC2: ");
  Serial.print(ADC_2);

  Serial.println();

  delay(1000);
}

