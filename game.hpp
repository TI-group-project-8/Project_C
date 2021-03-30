#include <wiringPi.h>
#include <stdio.h>
#include <lcd.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lcdRS;
int lcdE;
int lcdD4;
int lcdD5;
int lcdD6;
int lcdD7;

void schrijfNaarLCD(int lcd, string tekst, int xPositie, int yPositie, int tijd);
