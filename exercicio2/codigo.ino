const int led1 = 4;
const int led2 = 5;



void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  
}

void loop()

 {  
  delay(1000);
  digitalWrite(led1, HIGH); 
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
  
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
}
