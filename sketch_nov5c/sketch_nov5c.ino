#include <Wire.h>
int x = 0;
void setup() {
  Wire.begin(8);
  Serial.begin(9600);
  Wire.onReceive(receiveEvent);
  Wire.onRequest(sendData);
}
void receiveEvent(int bytes) {
  x = Wire.read();


  
  Serial.print("Received x: ");
  Serial.println(x);

}

void loop() {
}
void sendData(){
  Wire.write(x);
}


