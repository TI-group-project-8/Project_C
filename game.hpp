#include <wiringPi.h>
#include <stdio.h>
#include <lcd.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lcdRS = 25;
int lcdE = 24;
int lcdD4 = 23;
int lcdD5 = 22;
int lcdD6 = 21;
int lcdD7 = 14;

void schrijfNaarLCD(int lcd, string tekst, int xPositie, int yPositie, int tijd);
