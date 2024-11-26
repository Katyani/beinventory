int P_E1 = 0;
#define touch1  12
int P_E2 = 4;
#define touch2  13
int P_E3 = 5;
#define touch3  15
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(P_E1, OUTPUT);
pinMode(touch1,INPUT);
pinMode(P_E2, OUTPUT);
pinMode(touch2,INPUT);
pinMode(P_E3, OUTPUT);
pinMode(touch3,INPUT);

delay(5000);
Serial.println("end of setup");
}

void loop() {
  if(digitalRead(touch1) == 1) { 
  Serial.println("the touch sensor is on");
  //Serial.print("start of voice");
  digitalWrite(P_E1,HIGH);
  delay(5000);
  //Serial.println("end of voice");
  digitalWrite(P_E1,LOW);
  delay(500);}
  if(digitalRead(touch2) == 1) { 
  Serial.println("the touch sensor is on");
  //Serial.print("start of voice");
  digitalWrite(P_E2,HIGH);
  delay(5000);
  //Serial.println("end of voice");
  digitalWrite(P_E2,LOW);
  delay(500);}
  if(digitalRead(touch3) == 1) { 
  Serial.println("the touch sensor is on");
  //Serial.print("start of voice");
  digitalWrite(P_E3,HIGH);
  delay(5000);
  //Serial.println("end of voice");
  digitalWrite(P_E3,LOW);
  delay(500);}

}
