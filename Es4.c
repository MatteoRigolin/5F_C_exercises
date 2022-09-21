#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        switch(answer){
            case 1: 
                printNumbers();
                break;
            case 2: 
                printReverseNumbers();
                break;
            case 3: 
                sumNumbers();
                break;
            case 4: 
                printEvenNumbers();
                break;
            case 5: 
                printOddNumbers();
                break;
            case 6: 
                searchNumbers();
                break;
            case 7: 
                removeNumbers();
                break;
            case 8: 
                switchNumbers();
                break;
            case 9: 
                ordinateNumbers();
                break;
            default: 
                exit(0);
        }
    }while(answer>0||answer<10);


}