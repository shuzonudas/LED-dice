void setup()
{
// setup the diceOutput
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

// code to make the push btn work

  pinMode(14, OUTPUT); //A0
  //A1 is input !
  pinMode(16, OUTPUT);// A2

  digitalWrite(14, HIGH);
  //A1 is input !
  digitalWrite(16, LOW);

// serial comm
  Serial.begin(57600);

}

void loop()
{
  int x = analogRead(1);
  Serial.println(x);
  delay(50);
  if(x <500 )
  {
    switch (random(1,7))
    {
    case 1:
      digitalWrite(2, HIGH);
      delay(5000);
      break;
    case 2:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      delay(5000);
      break;

    case 3:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      delay(5000);
      break;

    case 4:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      delay(5000);
      break;

    case 5:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      delay(5000);
      break;

    case 6:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(5000);
      break;
    default:
      break;
    }


    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

  }

}
