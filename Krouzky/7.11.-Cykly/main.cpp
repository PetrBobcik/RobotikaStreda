#include <Arduino.h>

// cykly
/*
    for(promenna; podminka; proved)     // musi mit v sobe 2 stredniky
    while(podminka)                     // nejdrive se kontroluje podminka
    do{ 
    
    }while(podminka)        // nejprve se provede kod, pak az se kontroluje podminka
*/
//  cnt = cnt + 1 --> cnt++ nebo ++cnt
//  cnt = cnt - 1 --> cnt-- nebo --cnt

// char znak;       globalni promenna (aktivni odtud do konce programu)

int ledR = 22;
int ledB = 5;

void setup(){  
   pinMode(ledR, OUTPUT);
   pinMode(ledB, OUTPUT); 
   digitalWrite(ledB, LOW);
 
}

void loop(){
    
   
    /*
      for(int cnt = 0; cnt < 10; cnt++){    vytvarime promennou cnt 
    
      }
      for(cnt = 0; cnt < 10; cnt++){        pouzivame jiz existujici promennou cnt
    
      }
      for(; cnt < 10; cnt++){               neresime promennou
    
      }
    */

   //Blikani LED celkem 3x
    /*for(int x = 0; x < 3; x++){
        digitalWrite(ledR, HIGH);
        delay(500);
        digitalWrite(ledR, LOW);
        delay(500);
    }*/

    // nekonecna smycka
    /*
        for(;;){

        }
    */
   int cnt = 0;       // staticka promenna (aktivni odtud do konce bloku)
   
   //Blikani LED celkem 3x
   /*
     while(cnt < 3){
        digitalWrite(ledR, HIGH);
        delay(500);
        digitalWrite(ledR, LOW);
        delay(500);
        cnt++;      // potreba pridat
     }
   */
   /*
     // nekonecna smycka pro while
    
     while(1){    // 0 je false, a cokoli mimo 0 je True
       if(nejaka_podmika)
            break;    // ukonci cyklus (nejvice vnorena)
     }

     while(1){
         while(1){
             for(;;){
                 break; // vyskoci pouze z for()
             }
         }
         
     }
   
   */

   //Blikani LED celkem 3x
   /*do{
       digitalWrite(ledR, HIGH);
       delay(500);
       digitalWrite(ledR, LOW);
       delay(500);
       cnt++;      // potreba pridat
     }while(cnt < 3);*/
    /*


    // vnoreni cyklu
    //celkem 50 cyklu -> 10*5
    for(int i = 0; i < 10; i++){
        // provede se 10x
        for(int j = 0; j < 5; j++){
            // provede 5x
            
        }
    }
    */

   
    /*
    int prom = 0;
    while(1){
        prom++;
        if(prom == 5){
            break;
        }
    }
    */
    // ekvivalentni zapis pro while(1) vyse -> for(prom; prom != 5; prom++)


    /*
        While priklad pro senzor (pseudo program)
        
        int a = 0;
        while(1){
            a = nacti_hodnotu_ze_senzoru();         // do a ukladam hodnotu, kterou nacetl senzor
            if(a < 10 && a > 0){
                break;
            }
        }

        // tady je pouzitelna promenna a, se kterou mohu dale pracovat
        vypis_hodnotu_ze_senzoru(a);                // funkce vypise a

    */



   // Pole array (retezec)
   /*
        datovy_typ pole[velikost];  velikost == pocet prvku pole
        idealne velikost pole o 1 vetsi nez je treba 
   */

    //int velikost = 10;
    //int pole[velikost];

    // int pole[5] = {0,1,8,9};
    //char jmeno[5] = {'P', 'e', 't','r','\0'};
    //char Prijmeni[] = {'P', 'e', 't','r','\0'};       // pokud zname velikost, nemusime ji tam psat
                                                        //  ale musime vlozit prvky
    /*jmeno[0]; // == nulty prvek == 1. prvku v poli -> vrati hodnotu 'P'

    for(int i = 0; i < 5; i++){
        switch(jmeno[i]){
            case 'P':
                digitalWrite(ledR, HIGH);
                delay(500);
                break;
            case 'e':
            //  .
            //  .
            //  .

        }
    }*/

    int LedArr[2];
    LedArr[0] = ledR;
    LedArr[1] = ledB;

    while(1){
       for(int i = 0; i < 2; i++){
            digitalWrite(LedArr[i], HIGH);
            
       }
       delay(500);
       for(int i = 0; i < 2; i++){
            digitalWrite(LedArr[i], LOW);
       }
       delay(500);

    }


}
  
