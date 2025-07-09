#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);//rs,en,d4,
int dhua=0,i=0,flame=0;  
#define ALC A0
#define buzzer 6
#define relay 7
char rbyte=0;
void setup() 
{
 Serial.begin(115200);
 lcd.begin(16, 2);//initializing LCD
 lcd.setCursor(0,0);
 lcd.print("Alcohol detect");
 lcd.setCursor(0,1);
 lcd.print("--- System ---");
 pinMode(ALC, INPUT);
 pinMode(buzzer, OUTPUT);
 pinMode(relay, OUTPUT);
 digitalWrite(buzzer,LOW);
  digitalWrite(relay,HIGH);
 delay(1000);
}
void loop() 
{
 dhua=digitalRead(ALC);
 
 if(dhua==LOW)
 {
  lcd.clear();
  lcd.setCursor(0,0);  
  lcd.print("Alcohol detected");
  digitalWrite(buzzer,HIGH);
  digitalWrite(relay,LOW);
  delay(2000);
 }
 else
 {
  digitalWrite(buzzer,LOW);
  digitalWrite(relay,HIGH);
  lcd.setCursor(0,0);  
  lcd.print("--Working Fine--");
 }
}
