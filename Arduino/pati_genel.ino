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
Serial.print("Uzaklik ");  
Serial.println(uzaklik); 
delay(1000);
// Mesafe Sensoru Son  
su();
fire();
mama();
}
 void su(){
  if(digitalRead(2)==HIGH){// su dolu olduğunzaman 1 gösterdiğini kabul ediyoruz
    Serial.println("su var");
    delay(1000);
  }
  else{
    Serial.println("su yok");
    digitalWrite(3,HIGH);
    delay(1000);
  }
  if(digitalRead(4)== HIGH){
    Serial.println("depo dolu");
    delay(1000);
  }
  else{
    Serial.println("depo boş ");
    delay(1000);
  }
 }

 void fire(){
float t = sicaklik.readTemperature();
Serial.print("Sicaklik: ");
Serial.print(t);
Serial.println(" *C ");
delay(1000);
// ALARM SİSTEMİ
  if(t > 35){
Serial.println("ateş");
digitalWrite(5,HIGH);    
  }
  else{
    Serial.println("durum stabil");
    digitalWrite(5,LOW);
  }
// ALARM SİSTEMİ SON
}
 
 void mama(){
  if(digitalRead(12) == HIGH){
    Serial.println("kap dolu");
    mam.write(0);
    delay(1000);
  }
    else{
      Serial.println("kap boş");
      mam.write(180);
      delay(1000);
    }
  if(uzaklik > 5){
    Serial.println("depo boş");
    delay(1000);
  }
  else{
    Serial.println("depo dolu");
    delay(1000);
  }
 }
 void kum(){//sonra yapılacak
  
  
 }
