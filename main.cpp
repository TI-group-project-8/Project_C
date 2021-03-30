#include "game.hpp"
#include <iostream>
#include <string>
using namespace std;

int lcdRS = 25;
int lcdE = 24;
int lcdD4 = 23;
int lcdD5 = 22;
int lcdD6 = 21;
int lcdD7 = 14;

int p1score=0;
int p2score=0;

void startrps(){
    while(true){
        string inputp1="";
        string inputp2="";
        string steen="steen";
        string papier="papier";
        string schaar= "schaar";
        cout<<"Kies uit: steen/papier/schaar\n";
        cin>>inputp1;
        if(inputp1=="exit"){
            break;
        }
        cout<<"Kies uit: steen/papier/schaar\n";
        cin>>inputp2;


        if((inputp1==steen)&&(inputp2==steen)){
            cout<<"Gelijkspel\n";}
        else if((inputp1==steen)&&(inputp2==papier)){
            cout<<"Speler 2 wint!\n";
            p2score++;}
        else if((inputp1==steen)&&(inputp2==schaar)){
            cout<<"Speler 1 wint!\n";
            p1score++;}


        else if((inputp1==papier)&&(inputp2==steen)){
            cout<<"Speler 1 wint!\n";
            p1score++;}
        else if((inputp1==papier)&&(inputp2==papier)){
            cout<<"Gelijkspel\n";}
        else if((inputp1==papier)&&(inputp2==schaar)){
            cout<<"Speler 2 wint!\n";
            p2score++;}


        else if((inputp1==schaar)&&(inputp2==steen)){
            cout<<"Speler 2 wint!\n";
            p2score++;}
        else if((inputp1==schaar)&&(inputp2==papier)){
            cout<<"Speler 1 wint!\n";
            p1score++;}
        else if((inputp1==schaar)&&(inputp2==schaar)){
            cout<<"Gelijkspel\n";}

        else{
            cout<<"Er zijn ongeldige waardes ingevoerd\n";
        }
    }
}
int main() {
    wiringPiSetup();
    int lcd = lcdInit(2, 16, 4, lcdRS, lcdE, lcdD4, lcdD5, lcdD6, lcdD7, 0, 0, 0, 0);
    startrps();
    cout<<"De score van speler 1 is: "<<p1score<<"!\n";
    cout<<"De score van speler 2 is: "<<p2score<<"!\n";
    schrijfNaarLCD(lcd, "score p1: " + to_string(p1score), 0, 0, 5);
    schrijfNaarLCD(lcd, "score p2: " + to_string(p2score), 0, 0, 5);
    
}
