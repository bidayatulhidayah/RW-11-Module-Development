//SERIAL PRINT 
int count; 
void setup() { 
// put your setup code here, to run once: 
Serial.begin (9600) ;     
// open serial port to sent data 
// back to the computer at 9600 bps 
Serial.println("IIUM ROBOTEAM\n"); 
} 
void loop() { 
// put your main code here, to run repeatedly: 
Serial.print("ROBOTIC WORKSHOP 11.0\t"); 
Serial.println(count); 
count++; 
} 