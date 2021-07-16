void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  Serial.available();
  Serial.println(income);
  if(Serial.available() > 0)
  {
    income = Serial.read();
    if(income=='0')
  {
      
    digitalWrite(3，HIGH);
    digitalWrite(2，HIGH);
    digitalWrite(9，HIGH);
    digitalWrite(10，HIGH);
    digitalWrite(11，HIGH);
    digitalWrite(12，HIGH);
    digitalWrite(13，LOW);
    }
    if(income=='1')
  {
     digitalWrite(3，LOW);
    digitalWrite(2，HIGH);
    digitalWrite(9，HIGH);
    digitalWrite(10，LOW);
    digitalWrite(11，LOW);
    digitalWrite(12，LOW);
    digitalWrite(13，LOW);
  }
    if(income=='2')
  {
      digitalWrite(3，HIGH);
    digitalWrite(2，HIGH);
    digitalWrite(9，LOW);
    digitalWrite(10，HIGH);
    digitalWrite(11，HIGH);
    digitalWrite(12，LOW);
    digitalWrite(13，HIGH);
  }
    if(income=='3')
  {
      digitalWrite(3，HIGH);
    digitalWrite(2，HIGH);
    digitalWrite(9，HIGH);
    digitalWrite(10，HIGH);
    digitalWrite(11，LOW);
    digitalWrite(12，LOW);
    digitalWrite(13，HIGH);
  }
    if(income=='4')
  {
      digitalWrite(3，LOW);
    digitalWrite(2，HIGH);
    digitalWrite(9，HIGH);
    digitalWrite(10，LOW);
    digitalWrite(11，LOW);
    digitalWrite(12，HIGH);
    digitalWrite(13，HIGH);
  }
    if(income=='5')
  {
      digitalWrite(3，HIGH);
    digitalWrite(2，LOW);
    digitalWrite(9，HIGH);
    digitalWrite(10，HIGH);
    digitalWrite(11，LOW);
    digitalWrite(12，HIGH);
    digitalWrite(13，HIGH);
  }
    if(income=='6')
  {
      digitalWrite(3，HIGH);
    digitalWrite(2，LOW);
    digitalWrite(9，HIGH);
    digitalWrite(10，HIGH);
    digitalWrite(11，HIGH);
    digitalWrite(12，HIGH);
    digitalWrite(13，HIGH);
  }
    if(income=='7')
  {
     digitalWrite(3，HIGH);
    digitalWrite(2，HIGH);
    digitalWrite(9，HIGH);
    digitalWrite(10，LOW);
    digitalWrite(11，LOW);
    digitalWrite(12，LOW);
    digitalWrite(13，LOW);
  }
    if(income=='8')
  {
      digitalWrite(3，HIGH);
    digitalWrite(2，HIGH);
    digitalWrite(9，HIGH);
    digitalWrite(10，HIGH);
    digitalWrite(11，HIGH);
    digitalWrite(12，HIGH);
    digitalWrite(13，HIGH);
  }
    
    if(income=='9')
  {
     digitalWrite(3，HIGH);
    digitalWrite(2，HIGH);
    digitalWrite(9，HIGH);
    digitalWrite(10，HIGH);
    digitalWrite(11，LOW);
    digitalWrite(12，HIGH);
    digitalWrite(13，HIGH);
  }
  }
}
