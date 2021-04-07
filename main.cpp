#include "game.hpp"
#include <iostream>
using namespace std;

int lcdRS = 25;
int lcdE = 24;
int lcdD4 = 23;
int lcdD5 = 22;
int lcdD6 = 21;
int lcdD7 = 30;

//Pinnen Wpi 14 (clock pin) en 12 (data pin) zijn gebruikt voor de LED-strip

int digitA = 2;
int digitB = 0;
int digitC = 8;
int digitD = 9;
int digitE = 7;
int digitF = 3;
int digitG = 13;

string inputp2="";
string naamplayer1;
string naamplayer2;
int p1score=0;
int p2score=0;

//void onrecieve(string message){
    //inputp2=message;}

void startrps(){
    while(true){
        //publisher p(naamplayer1);
        //subscription s(naamplayer2, onrecieve);
        string inputp1="";
        string steen="steen";
        string papier="papier";
        string schaar= "schaar";
        inputp1="";
        inputp2="";
        cout<<"Kies uit: steen/papier/schaar\n";
        cin>>inputp1;
        if(inputp1=="exit"){
            break;
        }else {
            //p.send(inputp1);
        }
        while(inputp2==""){
            sleep(0.1);}
        if((inputp1==steen)&&(inputp2==steen)){
            cout<<"Gelijkspel\n";}
        else if((inputp1==steen)&&(inputp2==papier)){
            cout<<naamplayer2<<" wint!\n";
            p2score++;}
        else if((inputp1==steen)&&(inputp2==schaar)){
            cout<<naamplayer1<<" wint!\n";
            p1score++;}


        else if((inputp1==papier)&&(inputp2==steen)){
            cout<<naamplayer1<<" wint!\n";
            p1score++;}
        else if((inputp1==papier)&&(inputp2==papier)){
            cout<<"Gelijkspel\n";}
        else if((inputp1==papier)&&(inputp2==schaar)){
            cout<<naamplayer2<<" wint!\n";
            p2score++;}


        else if((inputp1==schaar)&&(inputp2==steen)){
            cout<<naamplayer2<<" wint!\n";
            p2score++;}
        else if((inputp1==schaar)&&(inputp2==papier)){
            cout<<naamplayer1<<" wint!\n";
            p1score++;}
        else if((inputp1==schaar)&&(inputp2==schaar)){
            cout<<"Gelijkspel\n";}

        else{
            cout<<"Er zijn ongeldige waardes ingevoerd\n";
        inputp1="";
        inputp2="";
        }
    }
}

bool find(int element, const vector<int> & kleuren){
    for(unsigned int i = 0; i < kleuren.size(); i++){
        if(element == kleuren[i]){
            return true;
        }
    }
    return false;
}

void mastermind(const vector<int> & kleuren){
    int lcd = lcdInit(2, 16, 4, lcdRS, lcdE, lcdD4, lcdD5, lcdD6, lcdD7, 0, 0, 0, 0);

    vector<int> kleurenTemp = {};
    vector<int> kleurenInput = {};
    
    int zwart = 0;
    int wit = 0;

   for(unsigned int j = 9; j >= 0; j--){
     schrijfNaarDigit(-1, digitA, digitB, digitC, digitD, digitE, digitF, digitG);
     schrijfNaarDigit(j, digitA, digitB, digitC, digitD, digitE, digitF, digitG);
     cout<<"Raad de kleuren.\n";
     vector<int> kleurenInput = inputknoppen();
     schrijfNaarLEDStrip(kleurenInput);
     if(kleuren == kleurenInput){
         schrijfNaarLCD(lcd, "Goed geraden!", 0, 0, 5);
         cout << "Goed geraden!\n";
         break;
     }
     else if(j == 0){
         schrijfNaarLCD(lcd, "Helaas, je hebt verloren", 0, 0, 5);
         cout << "Helaas, je hebt verloren.\n";
         break;
     }
     for(unsigned int i = 0; i < kleuren.size(); i++){
        if(kleurenInput[i] == kleuren[i]){
            kleurenTemp.push_back(kleurenInput[i]);
            zwart++;
        }
        else if(find(kleurenInput[i], kleuren) && !find(kleurenInput[i], kleurenTemp)){
            kleurenTemp.push_back(kleurenInput[i]);
            wit++;
        }
     }
     schrijfNaarLCD(lcd, "zwart: " + to_string(zwart), 0, 0, 5);
     schrijfNaarLCD(lcd, "wit: " + to_string(wit), 0, 0, 5);
     zwart = 0;
     wit = 0;
   }
}

int main() {
    wiringPiSetup();
    wiringPiSPISetup(0, 6000000);
   // int lcd = lcdInit(2, 16, 4, lcdRS, lcdE, lcdD4, lcdD5, lcdD6, lcdD7, 0, 0, 0, 0);

    pinMode(digitA, OUTPUT);
    pinMode(digitB, OUTPUT);
    pinMode(digitC, OUTPUT);
    pinMode(digitD, OUTPUT);
    pinMode(digitE, OUTPUT);
    pinMode(digitF, OUTPUT);
    pinMode(digitG, OUTPUT);

<<<<<<< HEAD
    //cout<<"voer je eigen naam in\n";
    //cin>>naamplayer1;
    //cout<<"voer de naam van je medespeler in\n";
    //cin>>naamplayer2;
=======
//<<<<<<< Updated upstream
    cout<<"voer je eigen naam in\n";
    cin>>naamplayer1;
    cout<<"voer de naam van je medespeler in\n";
    cin>>naamplayer2;
    startrps();
    
    cout<<"De score van speler 1 is: "<<p1score<<"!\n";
    cout<<"De score van speler 2 is: "<<p2score<<"!\n";
//=======
>>>>>>> e843ad4a0a45d2b9861fb3fc08b04cd21f49577e
    //startrps();

    //cout<<"De score van speler 1 is: "<<p1score<<"!\n";
    //cout<<"De score van speler 2 is: "<<p2score<<"!\n";

    vector<int> kleuren = inputknoppen();
    cout<<"De andere speler moet nu uw code raden\n";
    mastermind(kleuren);

<<<<<<< HEAD
    //schrijfNaarLCD(lcd, "score p1: " + to_string(p1score), 0, 0, 5);
    //schrijfNaarLCD(lcd, "score p2: " + to_string(p2score), 0, 0, 5);
    //schrijfNaarLEDStrip({0, 1, 3, 2});
    //sleep(2);
    //schrijfNaarLEDStrip({-1, -1, -1, -1});
=======
//>>>>>>> Stashed changes
    schrijfNaarLCD(lcd, "score p1: " + to_string(p1score), 0, 0, 5);
    schrijfNaarLCD(lcd, "score p2: " + to_string(p2score), 0, 0, 5);
    schrijfNaarLEDStrip({0, 1, 3, 2});
    sleep(2);
    schrijfNaarLEDStrip({-1, -1, -1, -1});

    for(unsigned int i = 0; i < 10; i++){
        schrijfNaarDigit(i, digitA, digitB, digitC, digitD, digitE, digitF, digitG);
        sleep(1);
        schrijfNaarDigit(-1, digitA, digitB, digitC, digitD, digitE, digitF, digitG);
    }
>>>>>>> e843ad4a0a45d2b9861fb3fc08b04cd21f49577e

}
