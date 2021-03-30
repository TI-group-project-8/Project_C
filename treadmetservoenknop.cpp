#include<wiringPi.h>
#include<iostream>
#include<stdio.h>


PI_THREAD(servo){for(;;) {
digitalWrite(8,0); 
delay(5);
digitalWrite(8,1);
delay(5);
digitalWrite(8,0);
break;
}
return(0);
}


int main(void){
wiringPiSetup();
pinMode(8,OUTPUT);
pinMode(9,INPUT);


for(;;){
	if (digitalRead(9)==HIGH){
		int t = piThreadCreate(servo);
		if (t !=0) {std::cout << "servo did not start." << std::endl;  }
		
		}
	}
return(0);

}
