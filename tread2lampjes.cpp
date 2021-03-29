#include <wiringPi.h>
#include <iostream>
//een thread om de led te laten knipperen
PI_THREAD(blink) {
for(;;) {
digitalWrite(8, LOW);
delay(700);
digitalWrite(8, HIGH);
delay(300);}
return(0);}
//main initialiseert de pinnen en start daarna de thread

int main (void){
wiringPiSetup () ;
pinMode (8, OUTPUT) ;
pinMode (9, OUTPUT) ;
//start ene thread. 
int t = piThreadCreate(blink);
if (t != 0) {std::cout << "blink did not start." << std::endl;  }
//een thread om de led te laten knipperen
for(;;) {
digitalWrite(9, LOW);
delay(700);
digitalWrite(9, HIGH)
;delay(300);}
return(0);
}
