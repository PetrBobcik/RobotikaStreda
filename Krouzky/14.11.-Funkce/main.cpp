#include <Arduino.h>
#include <Servo.h>

Servo servoMy;
int servoPin = 18;

int sw1 = 15;
int sw2 = 2;
int pot = 32;
int ledR = 22;
int ledB = 5;

// int16_t  <−32 768; 32 767>
// uint16_t <0; 65 536> u == unsigned (pouze kladna cisla)
/*
    2 typy: funkce, ktere vraceji hodnotu - (navratovy typ - int, bool, vas vlastni typ,....)
            funkce, ktere nevraci hodnotu (procedury) - void 
*/

/*
    navratovy_typ jmeno_funkce( seznam_parametru ){ -seznam_parametru je nepovinny
        telo_funkce - co se ma delat
    } 
*/

/* Funkce pro soucet, ktera secte parametr x s y a vraci soucet suma
int add(int x, int y){
    int suma = x + y;
    return suma;
}
*/

// funkce pro nastaveni pinu
void setPins(){
    servoMy.attach(servoPin);   // nastaveni serva
    pinMode(sw1, INPUT_PULLUP);
    pinMode(sw2, INPUT_PULLUP);
    pinMode(ledB, OUTPUT);
    digitalWrite(ledB, LOW);
    pinMode(ledR, OUTPUT);
    pinMode(pot,INPUT);
}


/*
10 / 5 = 2
zbytek 0 => modulo / %
7 / 2 = 3
zbytek 1 => modulo / %

%5   zbytek -- 0 -> 4
%3   zbytek -- 0 -> 2
*/

// % = modulo

void switchLEDB(int cntrB){ // funkce ktera nic nevraci a stara se o zapnuti a vypnuti ledB
    // provede se pokud je cntr liche cislo
    if(cntrB % 2){ // 0 = FALSE, vse mimo 0 = TRUE
        digitalWrite(ledB, LOW);
    }
    else{
        digitalWrite(ledB, HIGH);
    }
}

void switchLEDR(int cntrR){ // funkce ktera nic nevraci a stara se o zapnuti a vypnuti ledR
    if(cntrR % 2){ // 0 = FALSE, vse mimo 0 = TRUE
        digitalWrite(ledR, HIGH);
    }
    else{
        digitalWrite(ledR, LOW);
    }
}

void switchLEDS(int cntr){  
    switchLEDB(cntr); // volani funkce pro ledB napsanou vyse 
    switchLEDR(cntr); // volani funkce pro ledR napsanou vyse
}




void ServoFun(){
    servoMy.write( (analogRead(pot)/4095) * 100 );
}


void setup(){
    setPins();
}

int cnt = 0;

void loop(){
    //ServoFun();
    switchLEDS(cnt++);
    delay((analogRead(pot)));
}
