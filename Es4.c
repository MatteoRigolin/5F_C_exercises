#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printNumbers(int numbers[]){
    for(int i=0, i<10, i++){
        printf("\n%d", numbers[i]);
    }
}

void printReverseNumbers(int numbers[]){
    for(int i=9, i>=0, i++){
        printf("\n%d", numbers[i]);
    }
}

void sumNumbers(int numbers[]){
    int sum = 0;
    for(int i=0, i<10, i++){
        sum = sum + numbers[i];
    }
    int media = somma / 10;
    printf("\nLa somma è: %d, e la media è: %d", sum, media);
}

void printEvenNumbers(int numbers[]){
    for(int i=0, i<10, i++){
        if(numbers[i]%2 == 0){
            printf("\n%d", numbers[i]);
        }
    }
}

void printOddNumbers(int numbers[]){
    for(int i=0, i<10, i++){
        if(numbers[i]%2 != 0){
            printf("\n%d", numbers[i]);
        }
    }
}

void searchNumbers(int numbers[]){
    int number;
    printf("\nInserisci il numero da cercare: ");
    scanf("%d", &number);
    for(int i=0, i<10, i++){
        if(number==numbers[i]){
            printf("\nNumero trovato");
            break;
        }
    }
    printf("\nNumero non trovato")
}

void removeNumbers(int numbers[]){
    int number;
    printf("\nInserisci il numero da rimuovere: ");
    scanf("%d", &number);
    for(int i=0, i<10, i++){
        if(number==numbers[i]){
            numbers
            printf("\nNumero rimosso");
            break;
        }
    }
}

int main(){
    int numbers[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int answer;
    do{
        printf("\nMenù");
        printf("\nInsersci un numero per cambiare sezione:");
        printf("\n1: Stampa numeri;");
        printf("\n2: Stampa inversa numeri;");
        printf("\n3: Somma e media dei numeri;");
        printf("\n4: Stampa numeri pari;");
        printf("\n5: Stampa numeri dispari;");
        printf("\n6: Cerca numero nell'array;");
        printf("\n7: Elimina numero dell'array;");
        printf("\n8: Scambia numeri dell'array;");
        printf("\n9: Ordina array;"); 
        printf("\nUn numero diverso: Esci.");
        scanf("%d", &answer);
        switch(answer){
            case 1: 
                printNumbers(numbers);
                break;
            case 2: 
                printReverseNumbers(numbers);
                break;
            case 3: 
                sumNumbers(numbers);
                break;
            case 4: 
                printEvenNumbers(numbers);
                break;
            case 5: 
                printOddNumbers(numbers);
                break;
            case 6: 
                searchNumbers(numbers);
                break;
            case 7: 
                removeNumbers(numbers);
                break;
            case 8: 
                switchNumbers(numbers);
                break;
            case 9: 
                ordinateNumbers(numbers);
                break;
            default: 
                exit(0);
        }
    }while(answer>0||answer<10);


}