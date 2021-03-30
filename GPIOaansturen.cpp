#include "game.hpp"
#include <iostream>
#include <stdio.h>
#include <wiringPi.h>
using namespace std;

//set de pinnen
int button = 8;
int led = 9;

//maak vars voor status LED
bool ledAan = false;

bool ledHuidig = LOW;
bool ledVorig = LOW;

int main(){

cout << "GPIO-pinnen aansturen";

//setup pinnen
wiringPiSetup();

pinMode(button, INPUT);
pinMode(led, OUTPUT);

digitalWrite(led, LOW);

    while(true)
    {
	//lees de waarde van button
	ledHuidig = digitalRead(button);

	//als de button waarde is veranderd
        if(ledHuidig != ledVorig){
	    //Als er op de button is gedrukt
	    if(ledHuidig == HIGH){
		//Als de LED aan staat
		if(ledAan){
		    //Zet de LED uit
		    digitalWrite(led, LOW);
		    ledAan = false;
		    cout << "LED uit";
		}
		//Als de LED uit staat
		else{
		    //Zet de LED aan
		    digitalWrite(led, HIGH);
		    ledAan = true;
		    cout << "LED aan";
		}
	    }
	    //Zet de huidige waarde als de vorige waarde
	    ledVorig = ledHuidig;
	}

    }
}
