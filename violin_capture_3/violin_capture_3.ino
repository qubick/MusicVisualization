#include <Servo.h>
// A B C - E F G - B C D - F G A
// 4       3       2       1

// set pin numbers:
const int buttonPin11 = A2; // C
const int buttonPin12 = A3; // G
const int buttonPin13 = A4; // D (High)
const int buttonPin14 = A5; // A (High)

const int buttonPin21 = 9; //B
const int buttonPin22 = 8; //F
const int buttonPin23 = 7; //C (High)
const int buttonPin24 = 6; //G (High) 

const int buttonPin31 = 5; // A
const int buttonPin32 = 4; // E
const int buttonPin33 = 3; // B (High)
const int buttonPin34 = 2; // F (High)

const int ledRed    = 10; 
const int ledYellow = 11; 
const int ledGreen  = 12; 
const int ledBlue   = 13; 
const int ledViolet = A1; 

Servo servo1;

const int threshold = 50;

// variables will change:
int buttonState11 = 0;         // variable for reading the pushbutton status
int buttonState12 = 0;
int buttonState13 = 0;
int buttonState14 = 0;

int buttonState21 = 0;
int buttonState22 = 0;
int buttonState23 = 0;
int buttonState24 = 0;

int buttonState31 = 0;
int buttonState32 = 0;
int buttonState33 = 0;
int buttonState34 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledRed,    OUTPUT);   
  pinMode(ledYellow, OUTPUT);  
  pinMode(ledGreen,  OUTPUT);  
  pinMode(ledBlue,   OUTPUT);
  pinMode(ledViolet, OUTPUT); 
  
  servo1.attach(A0);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin11, INPUT);
  pinMode(buttonPin12, INPUT);
  pinMode(buttonPin13, INPUT);
  pinMode(buttonPin14, INPUT);
  
  pinMode(buttonPin21, INPUT);
  pinMode(buttonPin22, INPUT);
  pinMode(buttonPin23, INPUT);
  pinMode(buttonPin24, INPUT);
  
  pinMode(buttonPin31, INPUT);
  pinMode(buttonPin32, INPUT);
  pinMode(buttonPin33, INPUT);
  pinMode(buttonPin34, INPUT);
  
  Serial.begin(9600);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState11 = analogRead(buttonPin11);
  buttonState12 = analogRead(buttonPin12);
  buttonState13 = analogRead(buttonPin13);
  buttonState14 = analogRead(buttonPin14);
  
  buttonState21 = analogRead(buttonPin21);
  buttonState22 = analogRead(buttonPin22);
  buttonState23 = analogRead(buttonPin23);
  buttonState24 = analogRead(buttonPin24);
  
  buttonState31 = analogRead(buttonPin31);
  buttonState32 = analogRead(buttonPin32);
  buttonState33 = analogRead(buttonPin33);
  buttonState34 = analogRead(buttonPin34);

  if(buttonState11==0 && buttonState12==0 && buttonState13==0 && buttonState14==0){
    digitalWrite(ledRed,    LOW); 
    digitalWrite(ledYellow, LOW); 
    digitalWrite(ledGreen,  LOW); 
    digitalWrite(ledBlue,   LOW); 
    digitalWrite(ledViolet, LOW); 
    
    servo1.write(0);
    
  } else{
    if(buttonState11<threshold){ //threashold
      servo1.write(15);
      digitalWrite(ledRed, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledRed, LOW); 
    }
    
    if(buttonState12<threshold){
      servo1.write(30);
      digitalWrite(ledYellow, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledYellow, LOW); 
    }
    
    if(buttonState13<threshold){
      servo1.write(45);
      digitalWrite(ledGreen, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledGreen, LOW); 
    }
    
    if(buttonState14<threshold){
      servo1.write(60);
      digitalWrite(ledBlue, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledBlue, LOW);
    }
      
    if(buttonState21<threshold){
      servo1.write(75);
      digitalWrite(ledViolet, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledViolet, LOW);
    }
      
    if(buttonState22<threshold){
      servo1.write(90);
      digitalWrite(ledRed, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledRed, LOW);
    }
      
    if(buttonState23<threshold){
      servo1.write(105);
      digitalWrite(ledYellow, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledYellow, LOW);
    }
      
    if(buttonState24<threshold){
      servo1.write(120);
      digitalWrite(ledGreen, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledGreen, LOW);
    }
      
    if(buttonState31<threshold){
      servo1.write(135);
      digitalWrite(ledBlue, HIGH);    
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledBlue, LOW);
    }
    
    if(buttonState32<threshold){
      servo1.write(150);
      digitalWrite(ledViolet, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledViolet, LOW);
    }
      
    if(buttonState33<threshold){
      servo1.write(165);
      digitalWrite(ledRed, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledRed, LOW);
    }
      
    if(buttonState34<threshold){
      servo1.write(180);
      digitalWrite(ledYellow, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledYellow, LOW);
    }
  }  
    
  Serial.println(buttonState11);
  Serial.println(buttonState12);
  Serial.println(buttonState13);
  Serial.println(buttonState14);
  
  Serial.println();
  delay(1000);
}
