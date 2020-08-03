const int dry = 620;   //Analog (max) value in dry soil
const int wet = 310;   //Analog (min) value in wet soil
int soilAnalog = 0;
int soilPercent = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
soilAnalog = analogRead(A0); 
Serial.print("Value:   ");
Serial.println(soilAnalog);
soilPercent = map(soilAnalog, dry, wet, 0, 100);
if(soilPercent > 0 && soilPercent < 100)
{
  Serial.print("Percent: ");
  Serial.print(soilPercent);
  Serial.println("%");
  Serial.println("-------------");
}
else
{
  Serial.println("Percent: Out of range");
  Serial.println("-------------");
}
  delay(3000);
}