int sensorValueZ;                   //variable to hold accelerometer data
//int sensorValueY;
//int sensorValueX;
int acceleroZ = 5;                  //analogue pin that acclerometer is tied to
//int acceleroY = 6;
int motor = 9;

//int slope1,slope2;
//int cons1,cons2,cons3,cons4;

//int redTab = 9;                
int blueTab = 10;                
int greenTab = 11; 
int low = 0;
int medium = 512;
int high = 1023;


void setup() {
  pinMode(acceleroZ, INPUT);
  pinMode(motor, OUTPUT);
  Serial.begin(9600);               //initialize the serial port so that you can communicate with the computer
  
}

void loop() {
  //Serial.write("palying\n");
  sensorValueZ = analogRead(acceleroZ);        // read accelereometer data
//  sensorValueY = analogRead(acceleroY);
//  sensorValueX = analogRead(acceleroX);
  //sensorValue = digitalRead(accelero);
//  Serial.println(sensorValueX);
//  Serial.println(sensorValueY);

  if(sensorValueZ > 270)
    digitalWrite(motor, HIGH);
  else
    digitalWrite(motor, LOW);
    
  Serial.println(sensorValueZ);               // send the sensor data to the computer so you can calibrate RGB LED display
  delay(500);                                // delay so computer can display data
                                             // NOTE: remove the delay for your final version
                                             // once you've figured out what your gradient values are
                                             // this will make your color transitions nice & smooth
  
}
