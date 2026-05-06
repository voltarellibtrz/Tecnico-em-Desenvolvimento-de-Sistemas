#include <LiquidCrystal.h>
LiquidCrystal lcd(A0,A1, A2, A3, A4, A5);
int Led0 = 0, Led1 = 1, Led2 = 2, Led3 = 3, Led4 = 4, Led5 = 5, Led6 = 6, Led7 = 7, Led8 = 8, Led9 = 9;
const int UltraPin = 10;
long duration, cm, liters;


void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Tambau - 2025 - 2EM A");
  lcd.setCursor(2, 1);
  lcd.print("DEV");
  pinMode(Led0, OUTPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  pinMode(Led8, OUTPUT);
  pinMode(Led9, OUTPUT);
  cm = 0;
  LedController();
  delay(500);
  cm = 301;
  LedController();
  delay(500);
  cm = 0;
  LedController();
  delay(500);
  cm = 301;
  LedController();
  delay(500);
  cm = 0;
  LedController();
  delay(500);
  cm = 301;
  LedController();
  delay(500);
  LedController();
  delay(500);
  cm = 301;
  LedController();
  delay(500);
  LedController();
  delay(500);
  cm = 301;
  LedController();
  delay(500);
    
}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nivel do tanque:");
  
  Distance_Measurer();
    
  liters = map(cm,20,320,100,0);
  if (liters < 0){
    liters = 0;
  }
  if (liters > 100){
    liters = 100;
  }
  lcd.setCursor(4, 1);
  lcd.print(liters);
  lcd.print("  litros");
  
  LedController();
  
  delay(1000);
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}

long Distance_Measurer(){
  pinMode(UltraPin, OUTPUT);
  digitalWrite(UltraPin, LOW);
  delayMicroseconds(2);
  digitalWrite(UltraPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(UltraPin, LOW);
  pinMode(UltraPin, INPUT);
  duration = pulseIn(UltraPin, HIGH);
  cm = microsecondsToCentimeters(duration);
}

void LedController(){
  if(cm <=20){
    digitalWrite(Led0, HIGH);
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led4, HIGH);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led6, HIGH);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=50) && (cm > 20)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, HIGH);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led4, HIGH);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led6, HIGH);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=80) && (cm > 50)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, HIGH);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led4, HIGH);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led6, HIGH);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=110) && (cm > 80)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, HIGH);
    digitalWrite(Led4, HIGH);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led6, HIGH);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=140) && (cm > 110)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, HIGH);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led6, HIGH);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=170) && (cm > 140)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, HIGH);
    digitalWrite(Led6, HIGH);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=200) && (cm > 170)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
    digitalWrite(Led6, HIGH);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=230) && (cm > 200)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
    digitalWrite(Led6, LOW);
    digitalWrite(Led7, HIGH);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=260) && (cm > 230)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
    digitalWrite(Led6, LOW);
    digitalWrite(Led7, LOW);
    digitalWrite(Led8, HIGH);
    digitalWrite(Led9, HIGH);
  }
  if((cm <=300) && (cm > 260)){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
    digitalWrite(Led6, LOW);
    digitalWrite(Led7, LOW);
    digitalWrite(Led8, LOW);
    digitalWrite(Led9, HIGH);
  }
  if(cm > 300){
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
    digitalWrite(Led6, LOW);
    digitalWrite(Led7, LOW);
    digitalWrite(Led8, LOW);
    digitalWrite(Led9, LOW);
  }
  
}