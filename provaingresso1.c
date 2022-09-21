//Matteo Rigolin
//classe 5F
//17-09-2022
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //chiedo all'utente quanti numeri vuole inserire
    printf("\nQuanti numeri vuoi inserire?");
    int lunghezza;
    scanf("%d", lunghezza);
    //la quantità di numeri da inserire diventa la lunghezza dell'array che contiene li tutti
    int numeri[lunghezza];
    //tramite un ciclo for l'utente riempie tutto l'array
    for(int i=0; i<lunghezza; i++){
        printf("\nInserisci il numero:");
        scanf("%d", numeri[i]);
        //controllo se il numero inserito nell'array è 0 e in caso do errore e chiudo il programma
        if (numeri[i]==0){
            printf("\nErrore: non puoi inserire 0");
            exit(0);
        }
    }
    return 0;
}