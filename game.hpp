#include <wiringPi.h>
#include <stdio.h>
#include <lcd.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void schrijfNaarLCD(int lcd, string tekst, int xPositie, int yPositie, int tijd);
