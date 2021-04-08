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
string naamplayer1="";
string naamplayer2="";
int p1score=0;
int p2score=0;

void onrecieve(string message){
    inputp2=message;}

void startrps(){
        publisher p(naamplayer1);
        subscription s(naamplayer2, onrecieve);
        string inputp1="";
        string steen="steen";
        string papier="papier";
        string schaar= "schaar";
        string winner=" ";
        inputp1="";
        inputp2="";
        cout<<"Kies uit: steen/papier/schaar\n";
        cin>>inputp1;
        p.send(inputp1);
        while(inputp2==""){
            sleep(0.1);}
        if((inputp1==steen)&&(inputp2==steen)){
            winner="Gelijkspel";}
        else if((inputp1==steen)&&(inputp2==papier)){
            winner=naamplayer2+" wint!";
            p2score++;}
        else if((inputp1==steen)&&(inputp2==schaar)){
            winner=naamplayer1+" wint!";
            p1score++;}


        else if((inputp1==papier)&&(inputp2==steen)){
            winner=naamplayer1+" wint!";
            p1score++;}
        else if((inputp1==papier)&&(inputp2==papier)){
            winner="Gelijkspel";}
        else if((inputp1==papier)&&(inputp2==schaar)){
            winner=naamplayer2+" wint!";
            p2score++;}


        else if((inputp1==schaar)&&(inputp2==steen)){
            winner=naamplayer2+" wint!";
            p2score++;}
        else if((inputp1==schaar)&&(inputp2==papier)){
            winner=naamplayer1+" wint!";
            p1score++;}
        else if((inputp1==schaar)&&(inputp2==schaar)){
            winner="Gelijkspel";}

        else{
            winner="Er zijn ongeldige waardes ingevoerd";}
        cout<<winner<<"\n";
        inputp1="";
        inputp2="";
        ofstream datafile;
        datafile.open("rpsdata.txt");
        datafile<<winner+"\n"+to_string(p1score)+"\n"+to_string(p2score);
        datafile.close();
        winner=" ";
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

    ofstream myfile;
    myfile.open("mastercode.txt", ofstream::app);
    for (unsigned int p = 0; p < kleuren.size(); ++p) {
        myfile << kleuren[p];
    }
    myfile.close();

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

        //        hier kleuren naar gui
         ofstream myfile;
         myfile.open("kleur.txt", ofstream::app);
         for (unsigned int k = 0; k < kleuren.size(); ++k) {
             myfile << kleurenInput[k];
         }
         myfile<<endl;
         myfile.close();


     }
     schrijfNaarLCD(lcd, "zwart: " + to_string(zwart), 0, 0, 5);
     schrijfNaarLCD(lcd, "wit: " + to_string(wit), 0, 0, 5);

//     hier zwart en wit naar de gui
       ofstream myfile;
       myfile.open("zwartwit.txt", ofstream::app);
       myfile << wit;
       myfile << zwart <<endl;
       myfile.close();

     zwart = 0;
     wit = 0;
   }
}

int main() {
    wiringPiSetup();
    wiringPiSPISetup(0, 6000000);
   int lcd = lcdInit(2, 16, 4, lcdRS, lcdE, lcdD4, lcdD5, lcdD6, lcdD7, 0, 0, 0, 0);
    pinMode(digitA, OUTPUT);
    pinMode(digitB, OUTPUT);
    pinMode(digitC, OUTPUT);
    pinMode(digitD, OUTPUT);
    pinMode(digitE, OUTPUT);
    pinMode(digitF, OUTPUT);
    pinMode(digitG, OUTPUT);

    cout<<"voer je eigen naam in\n";
    cin>>naamplayer1;
    cout<<"voer de naam van je medespeler in\n";
    cin>>naamplayer2;
    while(true){
        string keuze;
    cout<<"Kies tussen mastermind (m) en steen-papier-schaar (sps), of typ \"exit\" om te stoppen ";
    cin>>keuze;
    if(keuze=="m"){vector<int> kleuren = inputknoppen();
    cout<<"De andere speler moet nu uw code raden\n";
    mastermind(kleuren);}
    else if(keuze=="sps"){
    startrps();}
    else if(keuze=="exit"){break;}
    else{cout<<"Er zijn ongeldige waardes ingevoerd\n";}
    
    cout<<"De score van "<<naamplayer1<<" is: "<<p1score<<"!\n";
    cout<<"De score van "<<naamplayer2<<" is: "<<p2score<<"!\n";

    schrijfNaarLCD(lcd, naamplayer1+" score: " + to_string(p1score), 0, 0, 5);
    schrijfNaarLCD(lcd, naamplayer2+" score: " + to_string(p2score), 0, 0, 5);
    schrijfNaarLEDStrip({0, 1, 3, 2});
    sleep(2);
    schrijfNaarLEDStrip({-1, -1, -1, -1});

    for(unsigned int i = 0; i < 10; i++){
        schrijfNaarDigit(i, digitA, digitB, digitC, digitD, digitE, digitF, digitG);
        sleep(1);
        schrijfNaarDigit(-1, digitA, digitB, digitC, digitD, digitE, digitF, digitG);
    }
}
}
