int lmotor1=2,lmotor2=3,rmotor1=4,rmotor2=5,trig1=6,trig2=7,echo1=8,echo2=9; double cm1,cm2; long duration1,duration2;
void setup() {
pinMode(trig1,OUTPUT);
pinMode(echo1, INPUT);
pinMode(trig2,OUTPUT);
pinMode(echo2, INPUT);
pinMode(rmotor1,OUTPUT);
pinMode(rmotor2,OUTPUT);
pinMode(lmotor1,OUTPUT);
pinMode(lmotor2,OUTPUT); 
Serial.begin(9600);
} 
void loop() {
digitalWrite(trig1,LOW); delay(5);
digitalWrite(trig1,HIGH); delay(10);
digitalWrite(trig1,LOW);
duration1=pulseIn(echo1,HIGH);
cm1=(duration1/2)/29.1;
digitalWrite(trig2,LOW); delay(5);
digitalWrite(trig2,HIGH); delay(10);
digitalWrite(trig2,LOW);
duration2=pulseIn(echo2,HIGH);
cm2=(duration2/2)/29.1;
Serial.println("1");
Serial.println(cm1);
Serial.println("2");
Serial.println(cm2);
//delay(1000);
if (cm1>=10.0 && cm2<=20.0)
{
  digitalWrite(rmotor1,HIGH);
  digitalWrite(rmotor2,LOW);
  digitalWrite(lmotor1,HIGH);
  digitalWrite(lmotor2,LOW);
  }
if (cm1<=10.0 && cm2<=20.0);
{
  digitalWrite(rmotor1,HIGH);
  digitalWrite(rmotor2,LOW);
  digitalWrite(lmotor1,LOW);
  digitalWrite(lmotor2,HIGH);
  }
if (cm1>=100.0&&cm2>=50.0)
{
  digitalWrite(rmotor1,LOW);
  digitalWrite(rmotor2,HIGH);
  digitalWrite(lmotor1,HIGH);
  digitalWrite(lmotor2,LOW);
  delay(500);
  digitalWrite(rmotor1,HIGH);
  digitalWrite(rmotor2,LOW);
  digitalWrite(lmotor1,HIGH);
  digitalWrite(lmotor2,LOW);
  
  }}
