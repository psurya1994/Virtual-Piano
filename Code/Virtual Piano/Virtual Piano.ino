void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  for (int i = 8; i <= 11; i++)
  {
    pinMode(i, INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly: 
  for (int j = 8; j <= 11; j++)
  {
    if(digitalRead(j)==1)
    {
      tone(2, (j-7)*500, 200);
    }
  }
}
