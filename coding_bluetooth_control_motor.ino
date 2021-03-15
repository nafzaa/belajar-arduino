#include <SoftwareSerial.h> 
SoftwareSerial MyBlue(10, 11); // RX | TX 
int flag = 0; 
int MOTOR1 = 14;
int MOTOR2 = 15;
int MOTOR3 = 16;
int MOTOR4 = 17;

int MOTOR5 = 18;
int MOTOR6 = 19;
int MOTOR7 = 20;
int MOTOR8 = 21;

int MOTOR9 = 2;
int MOTOR10 = 3;

int state = 0;
int state2 = 0;

void setup() 
{   
 Serial.begin(9600); 
 MyBlue.begin(9600); 
 pinMode(MOTOR1, OUTPUT);
 pinMode(MOTOR2, OUTPUT);
 pinMode(MOTOR3, OUTPUT);
 pinMode(MOTOR4, OUTPUT);
 pinMode(MOTOR5, OUTPUT);
 pinMode(MOTOR6, OUTPUT);
 pinMode(MOTOR7, OUTPUT);
 pinMode(MOTOR8, OUTPUT);
 pinMode(MOTOR9, OUTPUT);
 pinMode(MOTOR10, OUTPUT);
  
} 
void loop() 
{ 
 if (MyBlue.available()) 
   flag = MyBlue.read(); 

   if (flag == 'Z') 
 { 
    Stop();
 } 
 else if (flag == 'A') 
 { 
    Depan();
 }
 else if (flag == 'B') 
 { 
    Belakang();
 }
 else if (flag == 'C') 
 { 
    Kanan();
 }
 else if (flag == 'D') 
 { 
    Kiri();
 }

 else if (flag == 'E')
 {
    state = 1; 
 }

 else if (flag == 'F')
 {
    state = 0; 
 }

 else if (flag == 'G')
 {
    state2 = 1; 
 }

 else if (flag == 'H')
 {
    state2 = 0; 
 }

 if (state == 1){
    digitalWrite (MOTOR9, HIGH);
  }

 else if (state == 0){
    digitalWrite (MOTOR9, LOW);
  }

 if (state2 == 1){
    digitalWrite (MOTOR10, HIGH);
  }

 else if (state2 == 0){
    digitalWrite (MOTOR10, LOW);
  }

 


}  

void Stop(){
  digitalWrite (MOTOR1, LOW);
  digitalWrite (MOTOR2, LOW);
  digitalWrite (MOTOR3, LOW);
  digitalWrite (MOTOR4, LOW);
  digitalWrite (MOTOR5, LOW);
  digitalWrite (MOTOR6, LOW);
  digitalWrite (MOTOR7, LOW);
  digitalWrite (MOTOR8, LOW);
  }

void Depan(){
  digitalWrite (MOTOR1, LOW);
  digitalWrite (MOTOR2, LOW);
  digitalWrite (MOTOR3, LOW);
  digitalWrite (MOTOR4, LOW);
  digitalWrite (MOTOR5, LOW);
  digitalWrite (MOTOR6, LOW);
  digitalWrite (MOTOR7, LOW);
  digitalWrite (MOTOR8, LOW);
  }

void Belakang(){
  digitalWrite (MOTOR1, LOW);
  digitalWrite (MOTOR2, LOW);
  digitalWrite (MOTOR3, LOW);
  digitalWrite (MOTOR4, LOW);
  digitalWrite (MOTOR5, LOW);
  digitalWrite (MOTOR6, LOW);
  digitalWrite (MOTOR7, LOW);
  digitalWrite (MOTOR8, LOW);
  }

void Kanan(){
  digitalWrite (MOTOR1, LOW);
  digitalWrite (MOTOR2, LOW);
  digitalWrite (MOTOR3, LOW);
  digitalWrite (MOTOR4, LOW);
  digitalWrite (MOTOR5, LOW);
  digitalWrite (MOTOR6, LOW);
  digitalWrite (MOTOR7, LOW);
  digitalWrite (MOTOR8, LOW);
  }

void Kiri(){
  digitalWrite (MOTOR1, LOW);
  digitalWrite (MOTOR2, LOW);
  digitalWrite (MOTOR3, LOW);
  digitalWrite (MOTOR4, LOW);
  digitalWrite (MOTOR5, LOW);
  digitalWrite (MOTOR6, LOW);
  digitalWrite (MOTOR7, LOW);
  digitalWrite (MOTOR8, LOW);
  }
