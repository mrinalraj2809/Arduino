#define Pin1 1
#define Pin2 2
#define Pin3 3
#define Pin4 4
#define Pin5 5
#define Pin6 6
int dice;
void setup() {
  pinMode(Pin1,OUTPUT);
  pinMode(Pin2,OUTPUT);
  pinMode(Pin3,OUTPUT);
  pinMode(Pin4,OUTPUT);
  pinMode(Pin5,OUTPUT);
  pinMode(Pin6,OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop() {
  dice=random(1,7);
  Serial.println(dice);
  for(int i=Pin1;i<=dice;i++)
    digitalWrite(i,HIGH);
  delay(2000);
  for(int i=Pin1;i<=dice;i++)
    digitalWrite(i,LOW);
}
