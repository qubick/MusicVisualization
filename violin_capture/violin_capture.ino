#include <Servo.h>

// set pin numbers:
const int buttonPin1 = A2;     // the number of the pushbutton pin
const int buttonPin2 = A3; 
const int buttonPin3 = A4; 
const int buttonPin4 = A5; 

const int ledPin1 =  13;      // the number of the LED pin
const int ledPin2 =  12;
const int ledPin3 =  11;
const int ledPin4 =  10;

Servo servo1;

const int threshold = 40;

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);   
  pinMode(ledPin2, OUTPUT);  
  pinMode(ledPin3, OUTPUT);  
  pinMode(ledPin4, OUTPUT);  
  
  servo1.attach(A0);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  
  Serial.begin(9600);  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState1 = analogRead(buttonPin1);
  buttonState2 = analogRead(buttonPin2);
  buttonState3 = analogRead(buttonPin3);
  buttonState4 = analogRead(buttonPin4);

  if(buttonState1==0 && buttonState2==0 && buttonState3==0 && buttonState4==0){
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin3, LOW); 
    digitalWrite(ledPin4, LOW); 
  } else{
    if(buttonState1<threshold){ //threashold
      servo1.write(30);
      delay(1000);
      //digitalWrite(ledPin1, HIGH);
    }else
      servo1.write(0);
      //digitalWrite(ledPin1, LOW); 
   
    if(buttonState2<threshold){
      servo1.write(60);
      delay(1000);
      //digitalWrite(ledPin2, HIGH);
    }else
      servo1.write(0);
      //digitalWrite(ledPin2, LOW); 
    
    if(buttonState3<threshold){
      servo1.write(90);
      delay(1000);
      //digitalWrite(ledPin3, HIGH);
    }else
      servo1.write(0);
      //digitalWrite(ledPin3, LOW); 
    
    if(buttonState4<threshold){
      servo1.write(100);
      delay(1000);
      //digitalWrite(ledPin4, HIGH);
    }else
      servo1.write(0);
      //digitalWrite(ledPin4, LOW); 
  }  
    
  Serial.println(buttonState1);
  Serial.println(buttonState2);
  Serial.println(buttonState3);
  Serial.println(buttonState4);
  
  Serial.println();
  delay(1000);
}
