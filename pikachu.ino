#include <Servo.h>
#include <Ultrasonic.h>

int posBack = 80;
int posFront = 80;
Servo backLegs;
Servo frontLegs;

Ultrasonic ultrasonic(12, 13);

void setup() {
 
  backLegs.attach(9);
  frontLegs.attach(8);
  Serial.begin (9600);
}

void loop() {
Serial.println(ultrasonic.distanceRead());

if (ultrasonic.distanceRead() > 15||ultrasonic.distanceRead()==0){
for (posBack = 60; posBack <= 100; posBack += 1) { 
    backLegs.write(posBack);             
    delay(10);                      
  }
   for (posFront = 65; posFront <= 100; posFront += 1) { 
    frontLegs.write(posFront);             
    delay(10);
            
  
  }
 
   for (posBack = 100; posBack >= 60; posBack -= 1) { 
    backLegs.write(posBack);              
    delay(10);          
  
  }
   for (posFront =100; posFront >= 65; posFront -= 1) { 
    frontLegs.write(posFront);              
    delay(10);        
      }
}
 else {
  delay(1000);
  for (int back = 0; back <= 5; back++){
  for (posBack = 60; posBack <= 100; posBack += 1) { 
    backLegs.write(posBack);             
    delay(10);                      
  }
   for (posFront = 100; posFront >= 65; posFront -= 1) { 
    frontLegs.write(posFront);             
    delay(10);
            
  
  }
 
   for (posBack = 100; posBack >= 60; posBack -= 1) { 
    backLegs.write(pцosBack);              
    delay(10);          
  
  }
   for (posFront = 65; posFront <= 100; posFront += 1) { 
    frontLegs.write(posFront);              
    delay(10);        
 }
 }
 }

}  


 
 




