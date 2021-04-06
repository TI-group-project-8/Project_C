#include "game.hpp"

//Deze functie schrijft een getal van 0-9 naar de digit display aangesloten op de meegegeven pinnen.
//digit = -1 maakt het display leeg.
void schrijfNaarDigit(int digit, int digitA, int digitB, int digitC, int digitD, int digitE, int digitF, int digitG){
    if(digit == 0){
        //Schrijf 0 naar display
        digitalWrite(digitA, HIGH);
        digitalWrite(digitB, HIGH);
        digitalWrite(digitC, HIGH);
        digitalWrite(digitD, HIGH);
        digitalWrite(digitE, HIGH);
        digitalWrite(digitF, HIGH);
    }
    if(digit == 1){
        //Schrijf 1 naar display
        digitalWrite(digitB, HIGH);
        digitalWrite(digitC, HIGH);
    }
    if(digit == 2){
        //Schrijf 2 naar display
        digitalWrite(digitA, HIGH);
        digitalWrite(digitB, HIGH);
        digitalWrite(digitG, HIGH);
        digitalWrite(digitD, HIGH);
        digitalWrite(digitE, HIGH);
    }
    if(digit == 3){
        //Schrijf 3 naar display
        digitalWrite(digitA, HIGH);
        digitalWrite(digitB, HIGH);
        digitalWrite(digitC, HIGH);
        digitalWrite(digitD, HIGH);
        digitalWrite(digitG, HIGH);
    }
    if(digit == 4){
        //Schrijf 4 naar display
        digitalWrite(digitB, HIGH);
        digitalWrite(digitC, HIGH);
        digitalWrite(digitF, HIGH);
        digitalWrite(digitG, HIGH);
    }
    if(digit == 5){
        //Schrijf 5 naar display
        digitalWrite(digitA, HIGH);
        digitalWrite(digitF, HIGH);
        digitalWrite(digitG, HIGH);
        digitalWrite(digitC, HIGH);
        digitalWrite(digitD, HIGH);
    }
    if(digit == 6){
        //Schrijf 6 naar display
        digitalWrite(digitA, HIGH);
        digitalWrite(digitC, HIGH);
        digitalWrite(digitD, HIGH);
        digitalWrite(digitE, HIGH);
        digitalWrite(digitF, HIGH);
        digitalWrite(digitG, HIGH);
    }
    if(digit == 7){
        //Schrijf 7 naar display
        digitalWrite(digitA, HIGH);
        digitalWrite(digitB, HIGH);
        digitalWrite(digitC, HIGH);
    }
    if(digit == 8){
        //Schrijf 8 naar display
        digitalWrite(digitA, HIGH);
        digitalWrite(digitB, HIGH);
        digitalWrite(digitC, HIGH);
        digitalWrite(digitD, HIGH);
        digitalWrite(digitE, HIGH);
        digitalWrite(digitF, HIGH);
        digitalWrite(digitG, HIGH);
    }
    if(digit == 9){
        //Schrijf 9 naar display
        digitalWrite(digitA, HIGH);
        digitalWrite(digitB, HIGH);
        digitalWrite(digitC, HIGH);
        digitalWrite(digitD, HIGH);
        digitalWrite(digitF, HIGH);
        digitalWrite(digitG, HIGH);
    }
    if(digit == -1){
        //Maak display leeg
        digitalWrite(digitA, LOW);
        digitalWrite(digitB, LOW);
        digitalWrite(digitC, LOW);
        digitalWrite(digitD, LOW);
        digitalWrite(digitE, LOW);
        digitalWrite(digitF, LOW);
        digitalWrite(digitG, LOW);
    }
}


