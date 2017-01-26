// sketch 03-05
int deC = 20;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Selam ve dua ile");
  int degF;
  degF = degC * 9 / 5 + 32;
  degC++;
  Serial.println(degF); 
}



