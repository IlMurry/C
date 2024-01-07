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

#define DIM 5

int main(){
    int vettore[DIM] = {1, 2, 3, 4, 5};
    int somma = 0;

    for(int *k = vettore; k < vettore + DIM; k++){
        somma += *k;
    }

    printf("Somma: %d", somma);

    return 0;
}