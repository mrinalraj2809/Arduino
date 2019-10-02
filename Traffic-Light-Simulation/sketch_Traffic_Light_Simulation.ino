#define carRed 2
#define carYellow 3
#define carGreen 4
#define pedRed 5
#define pedGreen 6
#define button 1
#define crossTime 5000
int val,i;
void setup() {
  pinMode(button,INPUT);
  pinMode(carRed,OUTPUT);
  pinMode(carYellow,OUTPUT);
  pinMode(carGreen,OUTPUT);
  pinMode(pedRed,OUTPUT);
  pinMode(pedGreen,OUTPUT);
  digitalWrite(carGreen,HIGH);
  digitalWrite(pedRed,HIGH);
}

void loop() {
  val=digitalRead(button);
  if(val==HIGH)
    changeLights();
  delay(2000);       
}
void changeLights()
{
   digitalWrite(carGreen,LOW);
   digitalWrite(carYellow,HIGH);
   delay(2000);   
   digitalWrite(carYellow,LOW);
   digitalWrite(carRed,HIGH);
   digitalWrite(pedRed,LOW);
   digitalWrite(pedGreen,HIGH);
   delay(crossTime);
   for(i=0;i<10;i++)
   {
      digitalWrite(pedGreen,HIGH);
      delay(200);
      digitalWrite(pedGreen,LOW);
      delay(200);
   }
   digitalWrite(pedRed,HIGH);
   digitalWrite(carRed,LOW);
   digitalWrite(carYellow,HIGH);
   delay(2000);
   digitalWrite(carYellow,LOW);
   digitalWrite(carGreen,HIGH);
}

