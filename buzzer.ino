// C++ code
int BUZZER_Pin = 9;
int LED_Pin1 = 8;
int LED_Pin2 = 7;
int LED_Pin3 = 6;
void setup()
{
  pinMode(LED_Pin1,OUTPUT);
  pinMode(LED_Pin2,OUTPUT);
  pinMode(LED_Pin3,OUTPUT);
  pinMode(BUZZER_Pin, OUTPUT);
}

void loop()
{
  digitalWrite(LED_Pin1,HIGH);
  if(digitalRead(LED_Pin1)==HIGH)
  {
    tone(BUZZER_Pin,750);
  }
  delay(200);
  digitalWrite(LED_Pin1,LOW);
     
  digitalWrite(LED_Pin2,HIGH);
  if(digitalRead(LED_Pin2)==HIGH)
  {
    tone(BUZZER_Pin,950);
  }
  delay(200);
  digitalWrite(LED_Pin2,LOW);
  
  digitalWrite(LED_Pin3,HIGH);
  if(digitalRead(LED_Pin3)==HIGH)
  {
    tone(BUZZER_Pin,1150);
  }
  delay(200);
  digitalWrite(LED_Pin3,LOW);
  
}