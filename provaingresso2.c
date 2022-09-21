//Matteo Rigolin
//classe 5F
//17-09-2022
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //l'utente inserisce la parola
    char parola[100];
    int peso=0;
    printf("\nInserisci una parola:");
    scanf("%s", parola);
    //calcolo peso di ogni carattere
    for(int i=0, i<100, i++){
        
    }
    //scrivo se il peso della parola in ascii è maggiore, uguale o minore di 2000
    if(peso > 2000){
        printf("\nIl peso della parola in ascii è maggiore di 2000");
    }
    if(peso == 2000){
        printf("\nIl peso della parola in ascii è 2000");
    }
    if(peso < 2000){
        printf("\nIl peso della parola in ascii è minore di 2000");
    }
    return 0;
}