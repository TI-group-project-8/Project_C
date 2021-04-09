#include "game.hpp"
#include <iostream>
using namespace std;

//compilen met:
//g++ -Wall PracticalSocket.cpp main.cpp knoppen.cpp LCDfunctie.cpp LEDStripAansturen.cpp 
//DigitAansturen.cpp -o main -lwiringPi -lwiringPiDev -pthread

//Set-up pinnen LCD
int lcdRS = 25;
int lcdE = 24;
int lcdD4 = 23;
int lcdD5 = 22;
int lcdD6 = 21;
int lcdD7 = 30;

//Pinnen Wpi 14 (clock pin) en 12 (data pin) zijn gebruikt voor de LED-strip

//Set-up pinnen Digit Display
int digitA = 2;
int digitB = 0;
int digitC = 8;
int digitD = 9;
int digitE = 7;
int digitF = 3;
int digitG = 13;

//Set-up spelers en score
string inputp2="";
string naamplayer1="";
string naamplayer2="";
int p1score=0;
int p2score=0;
vector<int> kleurenvoorp2;
vector<int> kleuren;

void onrecieve(string message){
    if(message=="p1won"){
        p2score++;}
    else if(message.size()!=4){
    inputp2=message;}
    else{for(unsigned int i=0; i<4; i++){
        kleuren.push_back(int(message[i]-48));
    }
}}

void startrps(){
    //aanmaken publisher en subscription voor beide spelers
    publisher p(naamplayer1);
    subscription s(naamplayer2, onrecieve);
    
    //initializeren variabelen
        string inputp1="";
        string steen="steen";
        string papier="papier";
        string schaar= "schaar";
        string winner=" ";
        inputp1="";
        inputp2="";
        
        //input van player1 vragen
        cout<<"Kies uit: steen/papier/schaar\n";
        cin>>inputp1;
        p.send(inputp1);
        
        //wachten op input van player2
        while(inputp2==""){
            sleep(0.1);}
            
        //vergelijken inputs
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
            
        //bekendmaken winnaar
        cout<<winner<<"\n";
        //output naar gui
        ofstream datafile;
        datafile.open("rpsdata.txt");
        datafile<<winner;
        datafile.close();
        //resetten variabelen
        winner=" ";
        inputp1="";
        inputp2="";
}

//Deze functie zoekt naar een waarde in de kleurenvector
bool find(int element, const vector<int> & kleuren){
    //Kijkt naar iedere waarde  in de vector
    for(unsigned int i = 0; i < kleuren.size(); i++){
        //Als de waarde gelijk is aan element
        if(element == kleuren[i]){
            //Return true
            return true;
        }
    }
    //Anders return false
    return false;
}

//Deze functie zorgt ervoor dat het spel mastermind gespeeld kan worden
void mastermind(const vector<int> & kleuren){

    //Set-up multiplayer
    publisher p(naamplayer1);
    subscription s(naamplayer2, onrecieve);
    sleep(5);

    //Set-up LCD
    int lcd = lcdInit(2, 16, 4, lcdRS, lcdE, lcdD4, lcdD5, lcdD6, lcdD7, 0, 0, 0, 0);

    //Set-up GUI file
    ofstream myfile_1;
    myfile_1.open("mastercode");
    myfile_1 << "";
    myfile_1.close();


    ofstream myfile_2;
    myfile_2.open("kleur");
    myfile_2 << "";
    myfile_2.close();

    ofstream myfile_3;
    myfile_3.open("zwartwit");
    myfile_3 << "";
    myfile_3.close();

    ofstream myfile;
    myfile.open("mastercode", ofstream::app);
    for (unsigned int p = 0; p < kleuren.size(); ++p) {
        myfile << kleuren[p];
    }
    myfile.close();

    //Set-up game vars
    vector<int> kleurenTemp = {};
    vector<int> kleurenInput = {};

    int zwart = 0;
    int wit = 0;

   //Maakt 10 beurten aan
   for(unsigned int j = 9; j >= 0; j--){
     //Schrijft beurtnummer naar Digit Display
     schrijfNaarDigit(-1, digitA, digitB, digitC, digitD, digitE, digitF, digitG);
     schrijfNaarDigit(j, digitA, digitB, digitC, digitD, digitE, digitF, digitG);

     //Laat de speler de kleuren raden
     cout<<"Raad de kleuren.\n";
     vector<int> kleurenInput = inputknoppen();
     schrijfNaarLEDStrip(kleurenInput);

     //Als de kleurencode geraden is, geef hiervan bericht naar LCD en scherm
     //en verhoog de spelerscore met 1
     if(kleuren == kleurenInput){
         cout << "Goed geraden!\n";
         schrijfNaarLCD(lcd, "Goed geraden!", 0, 0, 5);
         publisher p(naamplayer1);
         subscription s(naamplayer2, onrecieve);
         //verstuur naar de 2e speler dat de puzzel opgelost is
         p.send("p1won");
         sleep(5);
         p1score++;
         break;
     }

     //Als er geen beurten meer zijn, geef bericht van verliezen naar LCD en scherm
     else if(j == 0){
         cout << "Helaas, je hebt verloren.\n";
         schrijfNaarLCD(lcd, "Helaas, je hebt verloren", 0, 0, 5);
         break;
     }

     //Bereken het aantal zwarte en witte pinnen
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

       //Schrijf de kleurcode naar de GUI file
       ofstream myfile_2;
       myfile_2.open("kleur", ofstream::app);
       for (unsigned int k = 0; k < kleuren.size(); ++k) {
           myfile_2 << kleurenInput[k];
       }
       myfile_2<<endl;
       myfile_2.close();

       //Schrijf de hoeveelheid van de zwarte en witte pinnen naar de LCD
       schrijfNaarLCD(lcd, "zwart: " + to_string(zwart), 0, 0, 5);
       schrijfNaarLCD(lcd, "wit: " + to_string(wit), 0, 0, 5);

       //Schrijft de zwarte en witte pinnen naar de GUI file
       ofstream myfile_3;
       myfile_3.open("zwartwit", ofstream::app);
       myfile_3 << wit;
       myfile_3 << zwart <<endl;
       myfile_3.close();

       //Reset zwart en wit
       zwart = 0;
       wit = 0;
    }

    //Reset de Digit Display en de LED-strip
    schrijfNaarDigit(-1, digitA, digitB, digitC, digitD, digitE, digitF, digitG);
    schrijfNaarLEDStrip({-1, -1, -1, -1});
}

void startmm(){
    //reset variabele en start multiplayer
    kleuren.clear();
    publisher p(naamplayer1);
    subscription s(naamplayer2, onrecieve);
    sleep(5);
    //laat de speler kleuren invoeren die de ander moet raden
    vector<int> kleurenvoorp2 = inputknoppen();
        string kleurmessage="";
        for(unsigned int i=0; i<kleurenvoorp2.size(); i++){
            kleurmessage+=to_string(kleurenvoorp2[i]);
        }
    p.send(kleurmessage);
    cout<<"De andere speler moet nu uw code raden\n";
    //wacht op de kleuren van speler2
    while(kleuren.size()!=4){;
        sleep(0.1);}
    //start het spel
    mastermind(kleuren);
}

int main() {
    //Set-up wiring Pi
    wiringPiSetup();
    wiringPiSPISetup(0, 6000000);

    //Set-up LCD
    int lcd = lcdInit(2, 16, 4, lcdRS, lcdE, lcdD4, lcdD5, lcdD6, lcdD7, 0, 0, 0, 0);

    //Set-up pinnen Digital Display
    pinMode(digitA, OUTPUT);
    pinMode(digitB, OUTPUT);
    pinMode(digitC, OUTPUT);
    pinMode(digitD, OUTPUT);
    pinMode(digitE, OUTPUT);
    pinMode(digitF, OUTPUT);
    pinMode(digitG, OUTPUT);

    //vraag om de namen van speler 1 en 2
    cout<<"voer je eigen naam in\n";
    cin>>naamplayer1;
    cout<<"voer de naam van je medespeler in\n";
    cin>>naamplayer2;
    //reset het scorebestand
    ofstream scorefile1;
    scorefile1.open("scores.txt");
    scorefile1<<naamplayer1+" score: "+"0"+"\n"+naamplayer2+" score: "+"0";
    scorefile1.close();
    //start het spel
    while(true){
    int tmpscorep1=p1score;
    int tmpscorep2=p2score;
        kleuren.clear();
        string keuze;
    //speler bepaalt wat hij wilt spelen
    cout<<"Kies tussen mastermind (m) en steen-papier-schaar (sps), of typ \"exit\" om te stoppen ";
    cin>>keuze;
    if(keuze=="m"){startmm();
        }
    else if(keuze=="sps"){
    startrps();}
    else if(keuze=="exit"){break;}
    else{cout<<"Er zijn ongeldige waardes ingevoerd\n";}
    //door een bug in pubsub, of in onze code, wordt de score van de andere speler soms meerdere keren doorgegeven
    //deze 2 lines zorgen ervoor dat de score maar met 1 punt tegelijk omhoog gaat
    if(p1score>tmpscorep1){p1score=tmpscorep1+1;}
    if(p2score>tmpscorep1){p2score=tmpscorep2+1;}
    //output de score naar meerdere outputs
    cout<<"De score van "<<naamplayer1<<" is: "<<p1score<<"!\n";
    cout<<"De score van "<<naamplayer2<<" is: "<<p2score<<"!\n";
    ofstream scorefile;
    scorefile.open("scores.txt");
    scorefile<<naamplayer1+" score: "+to_string(p1score)+"\n"+naamplayer2+" score: "+to_string(p2score);
    scorefile.close();
    schrijfNaarLCD(lcd, naamplayer1+" score: " + to_string(p1score), 0, 0, 5);
    schrijfNaarLCD(lcd, naamplayer2+" score: " + to_string(p2score), 0, 0, 5);
    }
}
