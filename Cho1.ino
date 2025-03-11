#define TRIG 13
#define ECHO 12

int led_r = 7;
int led_g = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(led_g , OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  long duration,distance;
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG , HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG , LOW);
  
  duration = pulseIn(ECHO, HIGH);

  distance = duration / 58.2;
   Serial.println(duration);
   Serial.print("\nDistance : ");
   Serial.print(distance);
   Serial.println(" CM");

   if(distance >= 100)
  {
    digitalWrite(led_r, HIGH);
    digitalWrite(led_g, LOW);
  }
  else
  {
    digitalWrite(led_r, LOW);
    digitalWrite(led_g, HIGH);
  }
  delay(1000);
}