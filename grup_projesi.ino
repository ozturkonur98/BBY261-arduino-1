#include<LiquidCrystal.h>


const int trig = 9;
const int echo = 10;
const int ledPin = 13;
const int buzzer = 11;

long duration;
int distance;
int safetyDistance;
int sure;
int kisi;

int rs = 12, en =11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
lcd.begin(16,2);
Serial.begin(9600);

}

 

void loop() {

 digitalWrite(trig, LOW);

 delayMicroseconds(2);

 digitalWrite(trig, HIGH);
 delayMicroseconds(10);
 digitalWrite(trig, LOW);


 duration = pulseIn(echo, HIGH);

 distance= duration*0.034/2;
 kisi  = sure*0.0345/2;
 delay(250);

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("kisi");
 lcd.setCursor(0,1);
 lcd.print(kisi);
 lcd.print("kullanıcı");

 safetyDistance = distance;

 

 if(safetyDistance <= 5){

  digitalWrite(buzzer, HIGH);
  digitalWrite(ledPin, HIGH);
  }
 
 else{
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
 
  }
}
