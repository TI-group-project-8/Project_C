#include "pubsub.h"
#include <wiringPi.h>
#include <wiringPiSPI.h>
#include <stdio.h>
#include <lcd.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;


vector<int> inputknoppen();
void schrijfNaarLCD(int lcd, string tekst, int xPositie, int yPositie, int tijd);
void schrijfNaarLEDStrip(vector<int> kleuren);
void schrijfNaarDigit(int digit, int digitA, int digitB, int digitC, int digitD, int digitE, int digitF, int digitG);
