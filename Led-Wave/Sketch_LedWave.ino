#define Pin1 1
#define Pin2 2
#define Pin3 3
#define Pin4 4
#define Pin5 5
#define Pin6 6

void setup() {
  pinMode(Pin1,OUTPUT);
  pinMode(Pin2,OUTPUT);
  pinMode(Pin3,OUTPUT);
  pinMode(Pin4,OUTPUT);
  pinMode(Pin5,OUTPUT);
  pinMode(Pin6,OUTPUT);
  
}

void loop() {
  for(int i=Pin1;i<=Pin6;i++)
  {
    digitalWrite(i,HIGH);    //It will turn on all the led first
    delay(200);
  }
    
  for(int i=Pin6;i>=Pin1;i--)
  {
    digitalWrite(i,LOW);     //It will turn off all the led from reverse ledPins
    delay(200);
  }
  delay(2000);
  for(int i=Pin1;i<Pin6;i++)
  {
    digitalWrite(i,HIGH);    
    digitalWrite(i+1,HIGH); 
    delay(200);
    digitalWrite(i,LOW);    
    digitalWrite(i+1,LOW); 
    delay(200);
  }
  delay(200);
  for(int i=Pin6;i>=Pin1;i--)
  {
    digitalWrite(i,HIGH);    
    delay(200);
    digitalWrite(i,LOW);
  }
}
