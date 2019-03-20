void setup(){
  pinMode(13,INPUT);
  Serial.begin(9600);
}

void loop(){
  if(digitalRead(13) == HIGH){
    Serial.println("Kap Bos");
    delay(1000);
  }
  
  else{
    Serial.println("Kap Dolu");
    delay(1000);
  }
  
}
