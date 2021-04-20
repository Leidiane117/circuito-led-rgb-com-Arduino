#define LedVermelho 11
#define LedAzul 12
#define LedVerde 13







void setup()
{
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(LedAzul, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  digitalWrite(LedVermelho, HIGH); //LIGADO
  digitalWrite(LedVerde, HIGH);
  delay(1000); // AMARELO
    
  digitalWrite(LedVermelho, LOW); //DESLIGADO
  digitalWrite(LedVerde, LOW);
  delay(1000); 
  
  digitalWrite(LedAzul, HIGH); //LIGADP
  digitalWrite(LedVermelho, HIGH);
  delay(1000); // MAGENTA

  digitalWrite(LedAzul,LOW); //DESLIGADO
  digitalWrite(LedVermelho, LOW);
  delay(1000); 
  
  
  digitalWrite(LedAzul, HIGH); //LIGADO
  digitalWrite(LedVerde, HIGH);
  delay(1000); // CIANO
  
  
  digitalWrite(LedAzul,LOW); //DESLIGADO
  digitalWrite(LedVerde, LOW);
  delay(1000); 
  
  
  
}