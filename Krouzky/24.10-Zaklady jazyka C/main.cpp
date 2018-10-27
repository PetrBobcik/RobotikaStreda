/*#include <ARDUINO.h>

int 
char
float/double
bool

int pocitadlo = 0;
char pismeno = 'a';
float cislo = 3.14;
double pi = 3.14;
bool funguje = TRUE;

// komentar na jeden radek

    komentar na vic radku
 

// >, <, >=, <=, ==, !=

if(pocitadlo > 0){
    pocitadlo = 1;
    cislo = cislo/pi;
}

else if(pocitadlo == 1){
    pocitadlo = 2;
}

else{

}

switch(pocitadlo){
    case 1:
        pocitadlo = 2;

        break;
    case 2:
    case 3:
}

void setup(){   // inicializace


}

void loop(){    // kod


}
*/















//#include "ALKS.h"
#include <Arduino.h>

#define L_R 22 

void setup() {
    pinMode(L_R, OUTPUT);
}

void loop() {
    digitalWrite(L_R,HIGH); //HIGH = log 1 = zapnuto
    delay(500); // pauza 500 ms
    digitalWrite(L_R,LOW);
    delay(500);
}




