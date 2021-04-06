#include<wiringPi.h>
#include<iostream>
#include<vector>
using namespace std;

int main(void){

//set de pinnen
int paars=29;
int groen=16;
int wit=1;
int blauw=10;
int rood=5;
int geel=6;

//setup pinnen
wiringPiSetup();
pinMode(paars,INPUT);
pinMode(groen,INPUT);
pinMode(wit,INPUT);
pinMode(blauw,INPUT);
pinMode(rood,INPUT);
pinMode(geel,INPUT);

//variable voor status
bool purplethen=LOW;
bool greenthen=LOW;
bool whitethen=LOW;
bool bluethen=LOW;
bool redthen=LOW;
bool yellowthen=LOW;

bool purplenow=LOW;
bool greennow=LOW;
bool whitenow=LOW;
bool bluenow=LOW;
bool rednow=LOW;
bool yellownow=LOW;

//vector om kleuren in op te slaan
vector<int> kleuren={};

//Opslaan eerste kleur in een vector
for (;;){
	
cout<<"Druk de knop in voor de eerste kleur: \n";
delay(4000);

//lezen input van knop
purplenow=digitalRead(paars);
greennow=digitalRead(groen);
whitenow=digitalRead(wit);
bluenow=digitalRead(blauw);
rednow=digitalRead(rood);
yellownow=digitalRead(geel);

	if(purplethen != purplenow){
		if(purplenow==HIGH){
			kleuren.push_back(5);
			purplenow=LOW;
			
		}
	}
	if(greenthen != greennow){
		if(greennow==HIGH){
			kleuren.push_back(1);
			greennow=LOW;
		}
	}
	if(whitethen != whitenow){
		if(whitenow==HIGH){
			kleuren.push_back(4);
			whitenow=LOW;
		}
	}
	if(bluethen != bluenow){
		if (bluenow==HIGH){
			kleuren.push_back(0);
			bluenow=LOW;
			}
	}
	if(redthen != rednow){
		if(rednow==HIGH){
			kleuren.push_back(2);
			rednow=LOW;
		}
	}
	if(yellowthen != yellownow){
		if (yellownow==HIGH){
			kleuren.push_back(3);
			yellownow=LOW;
		}
	}
	purplethen = purplenow;
	greenthen = greennow;
	whitethen = whitenow;
	bluethen = bluenow;
	redthen = rednow;
	yellowthen = yellownow;
	if(kleuren.size()==1){
	 break;
	}
}
	

//Opslaan tweede kleur in een vector
for (;;){
	
cout<<"Druk de knop in voor de tweede kleur: \n";
delay(4000);

//lezen input van knop
purplenow=digitalRead(paars);
greennow=digitalRead(groen);
whitenow=digitalRead(wit);
bluenow=digitalRead(blauw);
rednow=digitalRead(rood);
yellownow=digitalRead(geel);

	if(purplethen != purplenow){
		if(purplenow==HIGH){
			kleuren.push_back(5);
			purplenow=LOW;
			
		}
	}
	if(greenthen != greennow){
		if(greennow==HIGH){
			kleuren.push_back(1);
			greennow=LOW;
		}
	}
	if(whitethen != whitenow){
		if(whitenow==HIGH){
			kleuren.push_back(4);
			whitenow=LOW;
		}
	}
	if(bluethen != bluenow){
		if (bluenow==HIGH){
			kleuren.push_back(0);
			bluenow=LOW;
			}
	}
	if(redthen != rednow){
		if(rednow==HIGH){
			kleuren.push_back(2);
			rednow=LOW;
		}
	}
	if(yellowthen != yellownow){
		if (yellownow==HIGH){
			kleuren.push_back(3);
			yellownow=LOW;
		}
	}
	purplethen = purplenow;
	greenthen = greennow;
	whitethen = whitenow;
	bluethen = bluenow;
	redthen = rednow;
	yellowthen = yellownow;
	if(kleuren.size()==2){
	 break;
	}
}
	
//Opslaan eerste kleur in een vector
for (;;){
	
cout<<"Druk de knop in voor de derde kleur: \n";
delay(4000);

//lezen input van knop
bool purplenow=digitalRead(paars);
bool greennow=digitalRead(groen);
bool whitenow=digitalRead(wit);
bool bluenow=digitalRead(blauw);
bool rednow=digitalRead(rood);
bool yellownow=digitalRead(geel);

	if(purplethen != purplenow){
		if(purplenow==HIGH){
			kleuren.push_back(5);
			purplenow=LOW;
		}
	}
	if(greenthen != greennow){
		if(greennow==HIGH){
			kleuren.push_back(1);
			greennow=LOW;
		}
	}
	if(whitethen != whitenow){
		if(whitenow==HIGH){
			kleuren.push_back(4);
			whitenow=LOW;
		}
	}
	if(bluethen != bluenow){
		if (bluenow==HIGH){
			kleuren.push_back(0);
			bluenow=LOW;
			}
	}
	if(redthen != rednow){
		if(rednow==HIGH){
			kleuren.push_back(2);
			rednow=LOW;
		}
	}
	if(yellowthen != yellownow){
		if (yellownow==HIGH){
			kleuren.push_back(3);
			yellownow=LOW;
		}
	}
	purplethen = purplenow;
	greenthen = greennow;
	whitethen = whitenow;
	bluethen = bluenow;
	redthen = rednow;
	yellowthen = yellownow;
	if(kleuren.size()==3){
		
	 break;
	}
}
	
//Opslaan laaste kleur in een vector
for (;;){
	
cout<<"Druk de knop in voor de laaste kleur: \n";
delay(4000);

//lezen input van knop
bool purplenow=digitalRead(paars);
bool greennow=digitalRead(groen);
bool whitenow=digitalRead(wit);
bool bluenow=digitalRead(blauw);
bool rednow=digitalRead(rood);
bool yellownow=digitalRead(geel);


	if(purplethen != purplenow){
		if(purplenow==HIGH){
			kleuren.push_back(5);
			purplenow=LOW;
			
		}
	}
	if(greenthen != greennow){
		if(greennow==HIGH){
			kleuren.push_back(1);
			greennow=LOW;
		}
	}
	if(whitethen != whitenow){
		if(whitenow==HIGH){
			kleuren.push_back(4);
			whitenow=LOW;
		}
	}
	if(bluethen != bluenow){
		if (bluenow==HIGH){
			kleuren.push_back(0);
			bluenow=LOW;
			}
	}
	if(redthen != rednow){
		if(rednow==HIGH){
			kleuren.push_back(2);
			rednow=LOW;
		}
	}
	if(yellowthen != yellownow){
		if (yellownow==HIGH){
			kleuren.push_back(3);
			yellownow=LOW;
		}
	}
	purplethen = purplenow;
	greenthen = greennow;
	whitethen = whitenow;
	bluethen = bluenow;
	redthen = rednow;
	yellowthen = yellownow;
	if(kleuren.size()==4){
		
	 cout<<"De ander speler moet nu uw kleurcode raden \n";
	 break;
	}
}


for(unsigned int i = 0; i < kleuren.size(); i++){
	cout<<kleuren[i];
	}
	cout<<"\n";
}
