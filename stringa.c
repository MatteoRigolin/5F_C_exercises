#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void contaVocaliConsonanti(char stringa[], int lunghezzaStringa){
    char vocali[5]={'a', 'e', 'i', 'o', 'u'};
    int contatoreVocali=0;
    int contatoreConsonanti=0;
    for(int i=0;i<lunghezzaStringa;i++){
        for(int j=0; j<5; j++){
            if(stringa[i]==vocali[j]){
                contatoreVocali++;
            }
        }
    }
    contatoreConsonanti=lunghezzaStringa-contatoreVocali;
    printf("\nLe vocali nella stringa sono: %d", contatoreVocali );
    printf("\nLe consonanti nella stringa sono: %d", contatoreConsonanti);
}

void cercaLettere(char stringa[], int lunghezzaStringa){
    char lettera;
    int contaLettere;
    printf("\nInserisci la lettera da cercare: ");
    scanf("%c", &lettera);
    for(int i=0; i<lunghezzaStringa;i++){
        if(stringa[i]==lettera){
            contaLettere++;
        }
    }
    printf("\nLa lettera cercata compare %d volte", contaLettere);
}

void letterePariDispari(char stringa[], int lunghezzaStringa){
    char pari[lunghezzaStringa];
    char dispari[lunghezzaStringa];
    int posizionePari=0;
    int posizioneDispari=0;
    for(int i=0; i<lunghezzaStringa;i++){
        if(i%2==0){
            stringa[i]=pari[posizionePari];
            posizionePari++;
        }else{
            stringa[i]=dispari[posizioneDispari];
            posizioneDispari++;
        }
    }
}

void controlloDoppie(char stringa[], int lunghezzaStringa){
    for (int i = 0; i < lunghezzaStringa-1; i++){
        int contatoreDoppioni = 0;
        for(int j = i + 1; j<lunghezzaStringa; j++){
            if (stringa[i]==stringa[j]){
                contatoreDoppioni ++;
            }
        }
        if(contatoreDoppioni>0){
            printf("\nLa lettera %c ha %d doppioni", stringa[i], contatoreDoppioni);
        }
    }
}

int main(){
    char stringa[100];
    int lunghezzaStringa=0;
    int controllo;
    do{
        printf("\nInserisci una stringa di sole lettere: ");
        scanf("%s", stringa);
        for(int i = 0; i < 100; i++){
            if(isalpha(stringa[i])==0){
                controllo=0;
            }else{
                controllo=1;
                lunghezzaStringa++;
            }
        }
    }while(controllo==0);
    contaVocaliConsonanti(stringa, lunghezzaStringa);
    cercaLettere(stringa, lunghezzaStringa);
    letterePariDispari(stringa, lunghezzaStringa);
    controlloDoppie(stringa, lunghezzaStringa);
    char stringa2[100];
    int lunghezzaStringa2=0;
    do{
        printf("\nInserisci una seconda stringa: ");
        scanf("%s", stringa2);
        for(int i = 0; i < 100; i++){
            if(isalpha(stringa2[i])==0){
                controllo=0;
            }else{
                controllo=1;
                lunghezzaStringa2++;
            }
        }
    }while(controllo==0);
    confrontoLunghezza();
    letteraRicorrente();
    return 0;

}