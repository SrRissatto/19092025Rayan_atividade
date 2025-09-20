// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(1000); // Aguarde por 1 segundo(s) aceso
  digitalWrite(8, LOW);
  delay(1000); // Aguarde por 1 segundo(s) apagado
  digitalWrite(9, HIGH);
  delay(1000); // Aguarde por 1 segundo(s) aceso
  digitalWrite(9, LOW);
  delay(1000); // Aguarde por 1 segundo(s) apagado
  digitalWrite(10, HIGH);
  delay(1000); // Aguarde por 1 segundo(s) aceso
  digitalWrite(10, LOW);
  delay(1000); // Aguarde por 1 segundo(s) apagado
}