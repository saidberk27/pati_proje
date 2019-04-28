//Afyonkarahisar Cezeri Robotics 2019 'PATİ PROJESİ'
//Özel Yavuzoğlu Anadolu Lisesi

#include "DHT.h"
#include "Servo.h"
//Kütüphaneler Eklendi
#define DHTPIN 4
#define DHTTYPE DHT11
//#define DHTTYPE DHT22
//#define DHTTYPE DHT21
Servo mam;
DHT sicaklik(DHTPIN, DHTTYPE);
//degisken atama
int trigPin = 6; 
int echoPin = 7;  

long sure;
long uzaklik;
//
void setup() {
Serial.begin(9600);
sicaklik.begin();
//pinMode 
pinMode(2,INPUT);
pinMode(3,HIGH);
pinMode(4,INPUT);
pinMode(5,OUTPUT);
pinMode(trigPin, OUTPUT); 
pinMode(echoPin,INPUT);
pinMode(12,INPUT);
//
mam.attach(9); 
}

void loop() {
//Mesafe Sensoru Baslangic
             
// Mesafe Sensoru Son
su();
delay(500);
fire();
delay(500);
mama();
delay(500);
}
 void su(){
  if(digitalRead(2)==HIGH){// su dolu olduğunzaman 1 gösterdiğini kabul ediyoruz
    Serial.print("sukapvar,");
  }
  else{
    Serial.print("sukapyok,");
    digitalWrite(3,HIGH);
  }
  if(digitalRead(4)== HIGH){
    Serial.println("deposudolu");
  }
  else{
    Serial.println("deposubos");

  }
 }
 void fire(){
float t = sicaklik.readTemperature();
Serial.print("Sicaklik: ");
Serial.print(t);
Serial.print(",");

// ALARM SİSTEMİ
  if(t > 35){
Serial.println("ates,");
digitalWrite(5,HIGH);    
  }
  else{
    Serial.println("durumstabil,");
    digitalWrite(5,LOW);
    
  }
// ALARM SİSTEMİ SON
}
 void mama(){
  if(digitalRead(12) == HIGH){
    Serial.print("kapmamadolu,");
    mam.write(0);
   
  }
    else{
      Serial.print("kapmamabos,");
      mam.write(180);
     
    }
  if(uzaklik > 5){
    Serial.println("depomamabos,");
    
  }
  else{
    Serial.println("depomamadolu,");
  }
 }
 void kum(){//sonra yapılacak
 }
 
 void mesafe(){
   digitalWrite(trigPin, LOW);  
delayMicroseconds(5);
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10);
digitalWrite(trigPin, LOW);   
sure = pulseIn(echoPin, HIGH); 
uzaklik= sure /29.1/2; 
 }
