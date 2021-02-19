#include <SoftwareSerial.h> 
SoftwareSerial MyBlue(2, 3); // RX | TX 
int flag = 0; 

void setup() 
{   
 Serial.begin(9600); 
 MyBlue.begin(9600); 
 
 Serial.println("Ready to connect\nDefualt password is 1234 or 000"); 
} 
void loop() 
{ 
 if (MyBlue.available()) 
   flag = MyBlue.read(); 
 if (flag == 1) 
 { 
   
   Serial.println("kanan"); 
 } 
 else if (flag == 0) 
 { 

   Serial.println("kiri");
 } 
}  
