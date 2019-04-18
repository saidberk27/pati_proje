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
digitalWrite(trigPin, LOW);  
delayMicroseconds(5);
digitalWrite(trigPin, HIGH); 
delayMicroseconds(10);
digitalWrite(trigPin, LOW);   
sure = pulseIn(echoPin, HIGH); 
uzaklik= sure /29.1/2;              
// Mesafe Sensoru Son  
su();
fire();
mama();
}
 void su(){
  if(digitalRead(2)==HIGH){// su dolu olduğunzaman 1 gösterdiğini kabul ediyoruz
    Serial.println("sukapvar");
    delay(1000);
  }
  else{
    Serial.println("sukapyok");
    digitalWrite(3,HIGH);
    delay(1000);
  }
  if(digitalRead(4)== HIGH){
    Serial.println("deposudolu");
    delay(1000);
  }
  else{
    Serial.println("deposubos ");
    delay(1000);
  }
 }
 void fire(){
float t = sicaklik.readTemperature();
Serial.print("Sicaklik: ");
Serial.println(t);
delay(1000);
// ALARM SİSTEMİ
  if(t > 35){
Serial.println("ates");
digitalWrite(5,HIGH);    
  }
  else{
    Serial.println("durumstabil");
    digitalWrite(5,LOW);
    delay(1000);
  }
// ALARM SİSTEMİ SON
}
 void mama(){
  if(digitalRead(12) == HIGH){
    Serial.println("kapmamadolu");
    mam.write(0);
    delay(1000);
  }
    else{
      Serial.println("kapmamabos");
      mam.write(180);
      delay(1000);
    }
  if(uzaklik > 5){
    Serial.println("depomamabos");
    delay(1000);
  }
  else{
    Serial.println("depomamadolu");
    delay(1000);
  }
 }
 void kum(){//sonra yapılacak
 }
