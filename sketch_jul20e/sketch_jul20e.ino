int x=analogRead(A0);
int Y=X/2;

int x=3000;
int y=500;

void setup() {
  // put your setup code here, to run once:  PinMode(2,OUTPUT);
  pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
      pinMode(4,OUTPUT);
      pinMode(5,OUTPUT);
        pinMode(6,OUTPUT);
        pinMode(7,OUTPUT);
        pinMode(8,OUTPUT);
         pinMode(9,OUTPUT);
 delay(x);
  digitalWrite(2,HIGH);
  delay(x);
   digitalWrite(3,HIGH); 
   delay(x);
    digitalWrite(4,HIGH); 
    delay(x);
     digitalWrite(5,HIGH); 
     delay(x);
      delay(x);
  digitalWrite(6,HIGH);
  delay(x);
   digitalWrite(7,HIGH); 
   delay(x);
    digitalWrite(8,HIGH); 
      delay(x);
    digitalWrite(9,HIGH); 
     
 
}

void loop() {   

     digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
   digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
   digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
 
  // put your main code here, to run repeatedly:

}
