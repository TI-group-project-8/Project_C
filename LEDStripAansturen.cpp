#include "game.hpp"

//Om deze code te gebruiken, zorg ervoor dat de SPI interface enabled is

uint8_t one[1];
uint8_t zero[1];
uint8_t kleur[4];


//Deze functie schrijft de kleuren uit de meegegeven vector naar de LED-strip
//De meegegeven vector moet een lengte hebben van 4
//Kleuren:	blauw = 0
//		groen = 1
//		rood = 2
//		geel = 3
//		wit = 4
//		paars = 5
//		leeg = -1
void schrijfNaarLEDStrip(vector<int> kleuren){
    zero[0] = 0x00;
    kleur[0] = one[0];

    //Voegt lege LEDs toe
    for(unsigned int i = 0; i < 4; i++){
        kleuren.push_back(-1);
    }

    //Zendt begin data naar LED-strip
    for(int i = 0; i < 4; i++) {
        wiringPiSPIDataRW(0, zero, 1);
    }

    //Zendt kleuren naar LED-strip
    for(unsigned int i = 0; i < kleuren.size(); i++){
	//Als de kleur blauw is, verstuur blauw
        if(kleuren[i] == 0){
            kleur[0] = 0xFF;
            kleur[1] = 0xFF;
            kleur[2] = 0x00;
            kleur[3] = 0x00;
        }
	//Als de kleur groen is, verstuur groen
        if(kleuren[i] == 1){
            kleur[0] = 0xFF;
            kleur[1] = 0x00;
            kleur[2] = 0xFF;
            kleur[3] = 0x00;
        }
	//Als de kleur rood is, verstuur rood
        if(kleuren[i] == 2){
            kleur[0] = 0xFF;
            kleur[1] = 0x00;
            kleur[2] = 0x00;
            kleur[3] = 0xFF;
        }
	//Als de kleur geel is, verstuur geel
        if(kleuren[i] == 3){
            kleur[0] = 0xFF;
            kleur[1] = 0x00;
            kleur[2] = 0xFF;
            kleur[3] = 0xFF;
        }
	//Als de kleur wit is, verstuur wit
        if(kleuren[i] == 4){
            kleur[0] = 0xFF;
            kleur[1] = 0xFE;
            kleur[2] = 0xFE;
            kleur[3] = 0xFE;
        }
	//Als de kleur paars is, verstuur paars
        if(kleuren[i] == 5){
            kleur[0] = 0xFF;
            kleur[1] = 0xFF;
            kleur[2] = 0x00;
            kleur[3] = 0xFF;
        }
	//Als de kleur leeg is, verstuur leeg
        if(kleuren[i] == -1){
            kleur[0] = 0xFF;
            kleur[1] = 0x00;
            kleur[2] = 0x00;
            kleur[3] = 0x00;
        }

        wiringPiSPIDataRW(0, kleur, 4);
    }

    //Zendt eind data naar LED-strip
    for(int i = 0; i < 4; i++) {
        wiringPiSPIDataRW(0, one, 1);
    }
}

