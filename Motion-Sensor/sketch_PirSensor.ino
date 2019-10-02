#define sensor 2
#define ledPin 13
int flag=LOW,val;
void setup() {
  pinMode(sensor ,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val=digitalRead(sensor);
  if(val==HIGH)
  {
    digitalWrite(ledPin,HIGH);
    if(flag==LOW)
    {
      Serial.println("Motion Detected");
      flag=HIGH;
    }
  }
  else
  {
    digitalWrite(ledPin,LOW);
    if(flag==HIGH)
    {
      Serial.println("Motion not Detected");
      flag=LOW;
    }
  }

}
