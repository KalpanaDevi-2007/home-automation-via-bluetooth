char command;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  Serial.begin(9600);

  Serial.println("Home Automation Ready");
}

void loop()
{
  if (Serial.available() > 0)
  {
    command = Serial.read();

    if(command == '1')
    {
      digitalWrite(8, HIGH);
      Serial.println("Light ON");
    }

    else if(command == '2')
    {
      digitalWrite(8, LOW);
      Serial.println("Light OFF");
    }

    else if(command == '3')
    {
      digitalWrite(9, HIGH);
      Serial.println("Fan ON");
    }

    else if(command == '4')
    {
      digitalWrite(9, LOW);
      Serial.println("Fan OFF");
    }

    else if(command == '5')
    {
      digitalWrite(10, HIGH);
      Serial.println("TV ON");
    }

    else if(command == '6')
    {
      digitalWrite(10, LOW);
      Serial.println("TV OFF");
    }
  }
}