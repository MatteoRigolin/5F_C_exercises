// Matteo Rigolin 5F
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <malloc.h>
#define MAX 20
#define MIN 1

void sortFrequenza(int frequenze[], int numeri[], int lunghezza)
{
    for (int i = 0; i < lunghezza; i++)
    {
        for (int j = 0; j < lunghezza; j++)
        {
            if (frequenze[i] > frequenze[j])
            {
                int temp = frequenze[i];
                frequenze[i] = frequenze[j];
                frequenze[j] = temp;

                int temp2 = numeri[i];
                numeri[i] = numeri[j];
                numeri[j] = temp2;
            }
        }
    }
    printf("\nNumeri ordinati per frequenza: ");
    for (int i = 0; i < lunghezza; i++)
    {
        printf("\n%d", numeri[i]);
    }
    printf("\n");
}

void frequenza(int numeri[], int lunghezza)
{
    int frequenze[lunghezza];
    for (int i = 0; i < lunghezza; i++)
    {
        int contatore = 0;
        for (int j = 0; j < lunghezza; j++)
        {
            if (numeri[i] == numeri[j])
            {
                contatore++;
            }
        }
        frequenze[i] = contatore;
    }
    sortFrequenza(frequenze, numeri, lunghezza);
    printf("\nFrequenze ordinate in ordine decrescente: ");
    for (int i = 0; i < lunghezza; i++)
    {
        printf("\n%d", frequenze[i]);
    }
    printf("\n");
    printf("\nIl numero con frequenza maggiore è %d che appare %d volte", numeri[0], frequenze[0]);
}

void ordinaPariDispari(int numeri[], int pari[], int dispari[], int lunghezza)
{
    int lunghezzaPari = 0;
    int lunghezzaDispari = 0;

    for (int i = 0; i < lunghezza; i++)
    {
        if (numeri[i] % 2 == 0)
        {
            pari[lunghezzaPari] = numeri[i];
            lunghezzaPari++;
        }
        else
        {
            dispari[lunghezzaDispari] = numeri[i];
            lunghezzaDispari++;
        }
    }

    for (int i = 0; i < lunghezza; i++)
    {
        for (int j = 0; j < lunghezza; j++)
        {
            if (pari[i] > pari[j])
            {
                int temp = pari[i];
                pari[i] = pari[j];
                pari[j] = temp;
            }
        }
    }

    for (int i = 0; i < lunghezza; i++)
    {
        for (int j = 0; j < lunghezza; j++)
        {
            if (dispari[i] < dispari[j])
            {
                int temp = dispari[i];
                dispari[i] = dispari[j];
                dispari[j] = temp;
            }
        }
    }

    printf("\nNumeri pari:");
    for (int i = 0; i < lunghezzaPari; i++)
    {
        printf("\n%d", pari[i]);
    }

    printf("\nNumeri dispari:");
    for (int i = 0; i < lunghezzaDispari; i++)
    {
        printf("\n%d", dispari[i]);
    }

    for (int i = 0; i < lunghezzaPari + lunghezzaDispari; i++)
    {
        if(i < lunghezzaPari){
            numeri[i] = pari[i];
        }
        else{
            numeri[i] = dispari[i- lunghezzaPari];
        }
    }

    printf("\nArray ordinato");
    for (int i = 0; i < lunghezzaPari + lunghezzaDispari; i++)
    {
        printf("\n%d", numeri[i]);
    }
    printf("\n");
}

int main()
{
    printf("\nInserisci quanti numeri random vuoi generare: ");
    int lunghezza;
    scanf("%d", &lunghezza);
    int numeri[lunghezza];
    srand(time(0));
    for (int i = 0; i < lunghezza; i++)
    {
        // da usare per generare senza il vincolo di massimo e minimo
        // int numRandom = rand();
        int numRandom = (rand() % (MAX - MIN + 1)) + MIN;
        numeri[i] = numRandom;
    }
    printf("\nNumeri generati: ");
    for (int i = 0; i < lunghezza; i++)
    {
        printf("\n%d", numeri[i]);
    }
    printf("\n");

    frequenza(numeri, lunghezza);

    int pari[lunghezza];
    int dispari[lunghezza];

    ordinaPariDispari(numeri, pari, dispari, lunghezza);
    return 0;
}