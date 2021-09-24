void setup() {
 pinMode(9,OUTPUT);
 pinMode(10,INPUT);

}

void loop() {
{
  if(digitalRead(10)==1)
digitalWrite(9,1);
}
  {
    if(digitalRead(10)==0)
  digitalWrite(9,0);
  }
}
