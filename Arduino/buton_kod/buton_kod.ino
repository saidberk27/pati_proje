#include <Servo.h>
Servo mama_depo;


void setup(){
  pinMode(13,INPUT);
  mama_depo.attach(9);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(13) == HIGH){
    Serial.println("Kap Bos");
    delay(1000);
    mama_depo.write(110);
  }
  
  else{
    Serial.println("Kap Dolu");
    delay(1000);
    mama_depo.write(0);
  }
  
}
