#include "DHT.h"
#include "Servo.h"
//Kütüphaneler Eklendi
#define DHTPIN 4
#define DHTTYPE DHT11
//#define DHTTYPE DHT22
//#define DHTTYPE DHT21
Servo mam;
Servo kum1;
Servo kum2;
Servo kum3;
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
pinMode(28,INPUT);
pinMode(34,OUTPUT);
pinMode(45,OUTPUT);
//
mam.attach(9);
kum1.attach(24);

}

void loop() {
//Mesafe Sensoru Baslangic
             
// Mesafe Sensoru Sonmesafe();
mesafe();
su();
delay(100);
fire();
delay(100);
mama();
delay(100);
kulube();
delay(100);
kum();
delay(100);
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
  if(digitalRead(28)== HIGH){
    kum1.write(70);// depo açıldı
   }
    else{
      kum1.write(170);// kapanıcak
    }
  Serial.println(digitalRead(28));
 }
 void kulube(){
  float t = sicaklik.readTemperature();
  if ( t > 24){
    digitalWrite(34,HIGH);// fan çalışıyor
    digitalWrite(45,LOW);// ısıtıcı de aktif
  }
  else{
    digitalWrite(34,LOW);// fan de aktif
    digitalWrite(45,LOW);// ısıtıcı de aktif
  }
  if(t <20){
    digitalWrite(34,LOW);//FAN DE AKTİF
    digitalWrite(45,HIGH);// ISITICI ÇALIŞIYOR
  }
    else{
      digitalWrite(34,LOW);// FAN DE AKTİF
      digitalWrite(45,LOW);//ISITICI  DE AKTİF
    }
  }
  
 
