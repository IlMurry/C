/*
    Author: Mauro Mattia
    Date: data
    Es. 000
    Testo: testo

*/

#include <stdio.h>  //contiene la funzione random
#include <stdlib.h>  //gestisce intervalli di tempo
#include <string.h>
#include <math.h>

int main(){
    int vettore[5] = {1, 2, 3, 4, 5};
    int contatore = 5;
    int somma = 0;

    for(int k = 0; k < contatore; k++){
        somma += *(vettore + k);
    }

    printf("Somma: %d", somma);

    return 0;
}