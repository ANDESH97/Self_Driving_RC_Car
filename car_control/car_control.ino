int front = 7;
int right = 5;
int left = 2;

String value;

void setup() {
  Serial.begin(115200);
  
  pinMode(front, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(left, OUTPUT);
  
  digitalWrite(front, LOW);
  digitalWrite(left, LOW);
  digitalWrite(right, LOW);
}
void loop() {

  if (Serial.available())
  {
    Serial.println("value is available");
    value = Serial.readStringUntil('\n');
    delay(5);

    if (value.equals("1"))
    {
      digitalWrite(front, HIGH);
      Serial.println("Going forward");
      delay(350);
      digitalWrite(front, LOW);
    }
    if (value.equals("2"))
    {
      digitalWrite(right, HIGH);
      Serial.println("Going right");
      delay(350);
      digitalWrite(right, LOW);
    }
    if (value.equals("3"))
    {
      digitalWrite(left, HIGH);
      Serial.println("Going left");
      delay(350);
      digitalWrite(left, LOW);
    }
    if (value.equals("4"))
    {
      digitalWrite(front, HIGH);
      digitalWrite(left, HIGH);
      Serial.println("Going Forward Left");
      delay(350);
      digitalWrite(left, LOW);
      digitalWrite(front, LOW);
    }
    if (value.equals("5"))
    {
      digitalWrite(front, HIGH);
      digitalWrite(right, HIGH);
      Serial.println("Going Forward Right");
      delay(350);
      digitalWrite(right, LOW);
      digitalWrite(front, LOW);
    }
    else
    {
      Serial.println("No input");
      value = "";
    }
  }
}
