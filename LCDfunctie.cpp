#include "game.hpp"

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
//Pin 14: Wpi 30
//Pin 15: 5v met 1k resistor
//Pin 16:ground

//Compilen met:
//g++ -Wall LCDfunctie.cpp -o LCDfunctie -lwiringPi -lwiringPiDev

//Deze functie schrijft een tekst van max 16 chars naar de lcd op de positie [xPositie, yPositie].
//De tekst blijft tijd seconde staan.
void schrijfNaarLCD(int lcd, string tekst, int xPositie, int yPositie, int tijd) {
    const char* tekstC = tekst.c_str();
    lcdClear(lcd);
    
    //Kiest positie
    lcdPosition(lcd, xPositie, yPositie);

    //Schrijft tekst
    lcdPuts(lcd, tekstC);
    sleep(tijd);

    //Maakt scherm leeg
    lcdClear(lcd);
}


