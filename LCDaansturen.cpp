#include <iostream>
#include <stdio.h>
#include <wiringPi.h>
#include <lcd.h>	//Gebruikt voor LCD
#include <unistd.h>	//Gebruikt voor sleep
using namespace std;

//Aansluiten van LCD pinnen op breadboard
//Pin 1: ground
//Pin 2: 5v
//Pin 3: aansluiten op draairesistor
//Pin 4: Wpi 25
//Pin 5: ground
//Pin 6: Wpi 24
//Pin 11: Wpi 23
//Pin 12: Wpi 22
//Pin 13: Wpi 21
//Pin 14: Wpi 14
//Pin 15: 5v met 1k resistor
//Pin 16:ground

//Compilen met:
//g++ -Wall LCDaansturen.cpp -o LCDaansturen -lwiringPi -lwiringPiDev

int lcdRS = 25;
int lcdE = 24;
int lcdD4 = 23;
int lcdD5 = 22;
int lcdD6 = 21;
int lcdD7 = 14;

int main() {

    wiringPiSetup();
    
    //Initialiseer de LCD
    int lcd = lcdInit(2, 16, 4, lcdRS, lcdE, lcdD4, lcdD5, lcdD6, lcdD7, 0, 0, 0, 0);
    lcdClear(lcd);

    //Bepaal de positie van schrijven
    lcdPosition(lcd, 3, 1);

    //Schrijf naar de LCD
    lcdPuts(lcd, "Hello World!");
    sleep(2);

    //Maak de LCD leeg
    lcdClear(lcd);

}
