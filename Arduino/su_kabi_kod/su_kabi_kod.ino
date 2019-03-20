void setup(){
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(8) == 1){
    Serial.println("Su Yok");
  }
  else{
    Serial.println("Su Mevcut");
  }
  delay(1000);
}
