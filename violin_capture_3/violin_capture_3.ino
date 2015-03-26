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
  pinMode(ledPin1, OUTPUT);   
  pinMode(ledPin2, OUTPUT);  
  pinMode(ledPin3, OUTPUT);  
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT); 
  
  servo1.attach(A0);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  
  pinMode(buttonPin9, INPUT);
  pinMode(buttonPin10, INPUT);
  pinMode(buttonPin11, INPUT);
  pinMode(buttonPin12, INPUT);
  
  Serial.begin(9600);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState1 = analogRead(buttonPin1);
  buttonState2 = analogRead(buttonPin2);
  buttonState3 = analogRead(buttonPin3);
  buttonState4 = analogRead(buttonPin4);
  
  buttonState5 = analogRead(buttonPin5);
  buttonState6 = analogRead(buttonPin6);
  buttonState7 = analogRead(buttonPin7);
  buttonState8 = analogRead(buttonPin8);
  
  buttonState9 = analogRead(buttonPin9);
  buttonState10 = analogRead(buttonPin10);
  buttonState11 = analogRead(buttonPin11);
  buttonState12 = analogRead(buttonPin12);

  if(buttonState1==0 && buttonState2==0 && buttonState3==0 && buttonState4==0){
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW); 
    digitalWrite(ledPin5, LOW); 
    
    servo1.write(0);
    
  } else{
    if(buttonState1<threshold){ //threashold
      servo1.write(15);
      digitalWrite(ledPin1, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin1, LOW); 
    }
    
    if(buttonState2<threshold){
      servo1.write(30);
      digitalWrite(ledPin2, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin2, LOW); 
    }
    
    if(buttonState3<threshold){
      servo1.write(45);
      digitalWrite(ledPin3, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin3, LOW); 
    }
    
    if(buttonState4<threshold){
      servo1.write(60);
      digitalWrite(ledPin4, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin4, LOW);
    }
      
    if(buttonState5<threshold){
      servo1.write(75);
      digitalWrite(ledPin5, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin5, LOW);
    }
      
    if(buttonState6<threshold){
      servo1.write(90);
      digitalWrite(ledPin1, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin1, LOW);
    }
      
    if(buttonState7<threshold){
      servo1.write(105);
      digitalWrite(ledPin2, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin2, LOW);
    }
      
    if(buttonState8<threshold){
      servo1.write(120);
      digitalWrite(ledPin3, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin3, LOW);
    }
      
    if(buttonState9<threshold){
      servo1.write(135);
      digitalWrite(ledPin4, HIGH);    
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin4, LOW);
    }
    
    if(buttonState10<threshold){
      servo1.write(150);
      digitalWrite(ledPin5, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin5, LOW);
    }
      
    if(buttonState11<threshold){
      servo1.write(165);
      digitalWrite(ledPin1, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin1, LOW);
    }
      
    if(buttonState12<threshold){
      servo1.write(180);
      digitalWrite(ledPin2, HIGH);
      delay(500);
    }else{
      servo1.write(0);
      digitalWrite(ledPin2, LOW);
    }
  }  
    
  Serial.println(buttonState1);
  Serial.println(buttonState2);
  Serial.println(buttonState3);
  Serial.println(buttonState4);
  
  Serial.println();
  delay(1000);
}