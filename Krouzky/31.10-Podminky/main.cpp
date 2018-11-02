#include <Arduino.h>

#define PIEZO_IN  18
#define PIEZO_OUT 19

int sw1 = 15;
int sw2 = 2;
int ledR = 22;
int ledB = 5;
int pot = 32;

int pot_max = 4095;
int pot_mid = 2047;
int pot_min = 0;

void setup(){
    pinMode(ledR, OUTPUT);
    pinMode(ledB, OUTPUT);
    pinMode(sw1, INPUT_PULLUP);         // tlacitko vzdycky PULLUP
    pinMode(sw2, INPUT_PULLUP);         // tlacitko vzdycky PULLUP
    digitalWrite(ledB, LOW);
    pinMode(pot,INPUT);
    pinMode(PIEZO_IN, OUTPUT);
    pinMode(PIEZO_OUT, OUTPUT);
}

void loop(){

    // potenciometr dava hodnotu 0 - 4095 diky 12 bit adc (analog to digital convertor) -> 2^12 = 4095
    digitalWrite(PIEZO_IN, HIGH);
    digitalWrite(PIEZO_OUT, LOW);

    // podminka1 || podminka2  ==> podminka1 nebo podminka2
    // podminka1 && podminka2  ==> podminka1 a zaroven podminka2
    if( analogRead(pot) < pot_mid ){
        digitalWrite(ledR, HIGH);
        digitalWrite(ledB, LOW);
    }
    else if( analogRead(pot) > pot_mid){
        digitalWrite(ledR, LOW);
        digitalWrite(ledB, HIGH);
    }

    /*switch(digitalRead(sw1)){
        case 0:         // digitalRead(sw1) == 0
            digitalWrite(ledR, HIGH);
            break;
        default:        // else
            digitalWrite(ledR, LOW);
            break;
    }*/

    /*if(digitalRead(sw1) == 0){          // 0 = sepnuto
        digitalWrite(ledR, HIGH);
    }
    else
        digitalWrite(ledR, LOW);*/         // pokud neni sepnuto, tak vypne ledku
}
  
