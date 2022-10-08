#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define DIM 100
#define MIN 1
#define MAX 233

bool controlloDoppioni(int numRandom, int *numeri)
{
    for (int i = 0; i < DIM; i++)
    {
        if (numeri[i] == numRandom)
        {
            return true;
        }
    }
    return false;
}

void bubbleSort(int numeri[])
{
    for (int i = 0; i < DIM - 1; i++)
    {
        for (int j = 0; j < DIM - i - 1; j++)
        {
            if (numeri[j] > numeri[j + 1])
            {
                int temp = numeri[j];
                numeri[j] = numeri[j + 1];
                numeri[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int numeri[DIM];
    srand(time(0));
    for (int i = 0; i < DIM; i++)
    {
        int numRandom = (rand() % (MAX - MIN + 1)) + MIN;
        if (controlloDoppioni(numRandom, numeri) == false)
        {
            numeri[i] = numRandom;
        }
        else
        {
            i--;
        }
    }
    for (int i = 0; i < DIM; i++)
    {
        printf("\n%d", numeri[i]);
    }

    bubbleSort(numeri);

    for (int i = 0; i < DIM; i++)
    {
        printf("\n%d", numeri[i]);
    }
    int lungPari = 20;
    int pari[lungPari];

    for (int = 0; i < DIM; i++)
    {
        if (numeri[i] % 2 == 0)
        {
            scanf
        }
    }
    return 0;
}