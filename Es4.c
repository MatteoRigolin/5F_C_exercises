#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printNumbers(int numbers[], int arrLength){
    for(int i=0, i<arrLength, i++){
        printf("\n%d", numbers[i]);
    }
}

void printReverseNumbers(int numbers[], int arrLength){
    for(int i=arrLength-1, i>=0, i++){
        printf("\n%d", numbers[i]);
    }
}

void sumNumbers(int numbers[], int arrLength){
    int sum = 0;
    for(int i=0, i<arrLength, i++){
        sum = sum + numbers[i];
    }
    int media = somma / arrLength;
    printf("\nLa somma è: %d, e la media è: %d", sum, media);
}

void printEvenNumbers(int numbers[], int arrLength){
    for(int i=0, i<arrLength, i++){
        if(numbers[i]%2 == 0){
            printf("\n%d", numbers[i]);
        }
    }
}

void printOddNumbers(int numbers[], int arrLength){
    for(int i=0, i<arrLength, i++){
        if(numbers[i]%2 != 0){
            printf("\n%d", numbers[i]);
        }
    }
}

void searchNumbers(int numbers[], int arrLength){
    int number;
    printf("\nInserisci il numero da cercare: ");
    scanf("%d", &number);
    for(int i=0, i<arrLength, i++){
        if(number==numbers[i]){
            printf("\nNumero trovato");
            break;
        }else{
            printf("\nNumero non trovato");
        }
    }
    printf("\nNumero non trovato")
}

void removeNumbers(int numbers[], int arrLength){
    int number;
    printf("\nInserisci il numero da rimuovere: ");
    scanf("%d", &number);
    for(int i=0, i<arrLength, i++){
        if(number==numbers[i]){
            for(int j=i+1, j<arrLength-1, j++){
                numbers[i]=numbers[j];
            }
            numbers[j]=NULL;
            arrLength = arrLength - 1;
            printf("\nNumero rimosso");
            break;
        }else{
            printf("\nNumero non trovato");
        }
    }
}

void switchNumbers(int numbers[], int arrLength){
    int number1;
    int number2;
    int temp;
    printf("\nInserisci il primo numero da scambiare: ");  
    scanf("%d", &number1);
    printf("\nInserisci il secondo numero da scambiare: ");  
    scanf("%d", &number2);
    if(number1 != number2){
        for(int i=0, i<arrLength, i++){
            if(number1==numbers[i]){
                for(int j=0, j<arrLength, j++){
                    if(number2==numbers[j]){
                        temp = numbers[i];
                        numbers[i] = numbers[j];
                        numbers[j] = temp;
                        printf("\nNumeri scambiati");
                        break;
                    }else{
                        printf("\nSecondo numero non trovato");
                    }
                }
            }else{
                printf("\nPrimo numero non trovato");
            }
        }
    }
}

void sortNumbers(int numbers[], int arrLength){
    for (int i = 0; i < arrLength - 1; i++){
        for (int j = 0; j < arrLength - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

int main(){
    int arrLength=10;
    int numbers[arrLength]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
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
                printNumbers(numbers, arrLength);
                break;
            case 2: 
                printReverseNumbers(numbers, arrLength);
                break;
            case 3: 
                sumNumbers(numbers, arrLength);
                break;
            case 4: 
                printEvenNumbers(numbers, arrLength);
                break;
            case 5: 
                printOddNumbers(numbers, arrLength);
                break;
            case 6: 
                searchNumbers(numbers, arrLength);
                break;
            case 7: 
                removeNumbers(numbers, arrLength);
                break;
            case 8: 
                switchNumbers(numbers, arrLength);
                break;
            case 9: 
                sortNumbers(numbers, arrLength);
                break;
            default: 
                exit(0);
        }
    }while(answer>0||answer<10);
    return 0;
}
