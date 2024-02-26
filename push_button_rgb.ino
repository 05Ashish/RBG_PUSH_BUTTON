///to blink RGB leds using a push button///

int counter = 0;
int data = 0;
void setup()
{
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(2,INPUT);
  digitalWrite(12,HIGH);
}

void loop()
{
  data = digitalRead(2);
  if (data == HIGH){
  	counter = counter+1;
    delay(50);
  }
  if (counter == 0){
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    delay(50);
  }
  if (counter == 1){
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    delay(50);
  }
  if (counter == 2){
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    delay(50);
  }
  if (counter == 3){
    counter = 0;
    delay(50);
  }
}