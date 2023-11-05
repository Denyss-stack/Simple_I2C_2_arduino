#include <Wire.h> //include Wire.h library
int x = 0;
void setup()
{
  Wire.begin();
  Serial.begin(9600);
}

void loop()
{
  Wire.beginTransmission(8);
  Wire.write(x);
  Wire.endTransmission();
  x++;
  delay(1000);
  Wire.requestFrom(8,1,false);
  int receiveX = Wire.read();
  if(receiveX % 2==0){
    Serial.print("Value x: ");
    Serial.print(receiveX);
    Serial.println(" devide by 2 ");
  }

}
//0x08