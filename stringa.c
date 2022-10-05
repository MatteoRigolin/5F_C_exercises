#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int contaVocali(char stringa[], int lunghezzaStringa){
    char vocali[5]={'a', 'e', 'i', 'o', 'u'};
    int contatoreVocali=0;
    for(int i=0;i<lunghezzaStringa;i++){
        for(int j=0; j<5; j++){
            if(stringa[i]==vocali[j]){
                contatoreVocali++;
                break;
            }
        }
    }
    printf("\nLe vocali nella stringa sono: %d", contatoreVocali);
    return contatoreVocali;
}

int contaConsonanti(char stringa[], int lunghezzaStringa){
    char vocali[5]={'a', 'e', 'i', 'o', 'u'};
    int contatoreConsonanti=0;
    for(int i=0;i<lunghezzaStringa;i++){
        for(int j=0; j<5; j++){
            if(stringa[i]!=vocali[j]){
                contatoreConsonanti++;
                break;
            }
        }
    }
    printf("\nLe consonanti nella stringa sono: %d", contatoreConsonanti);
    return contatoreConsonanti;
}

void cercaLettere(char stringa[], int lunghezzaStringa){
    char lettera;
    int contaLettere;
    printf("\nInserisci la lettera da cercare: ");
    scanf("%c", &lettera);
    for(int i=0; i<lunghezzaStringa;i++){
        if(stringa[i]==lettera){
            contaLettere++;
            break;
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
            break;
        }else{
            stringa[i]=dispari[posizioneDispari];
            posizioneDispari++;
            break;
        }
    }
}

void controlloDoppie(char stringa[], int lunghezzaStringa){
    for (int i = 0; i < lunghezzaStringa-1; i++){
        int contatoreDoppioni = 0;
        for(int j = i + 1; j<lunghezzaStringa; j++){
            if (stringa[i]==stringa[j]){
                contatoreDoppioni ++;
                break;
            }
        }
        if(contatoreDoppioni>0){
            printf("\nLa lettera %c ha %d doppioni", stringa[i], contatoreDoppioni);
            break;
        }
    }
}

void confrontoLunghezza(int lunghezzaStringa, int lunghezzaStringa2){
    if(lunghezzaStringa>lunghezzaStringa2){
        printf("\nLa prima stringa è più lunga e la seconda è più corta");
    }
    if(lunghezzaStringa<lunghezzaStringa2){
        printf("\nLa seconda stringa è più lunga e la prima è più corta");
    }
    if(lunghezzaStringa==lunghezzaStringa2){
        printf("\nLe stringhe sono lunghe uguali");
    }
}

void letteraComuni(char stringa[], char stringa2[], int lunghezzaStringa, int lunghezzaStringa2){
    char comuni[lunghezzaStringa + lunghezzaStringa2];
    int controllo = 0;
    int posizione = 0;
    for(int i = 0; i < lunghezzaStringa; i++){
        for(int j = 0; j < lunghezzaStringa2; j++){
            if(stringa[i] == stringa2[j]){
                controllo = 1;
                break;
            }
        }
        if(controllo == 1){
            if(isalpha(stringa[i]) != 0 && strchr(comuni, stringa[i]) == 0){
                comuni[posizione] = stringa[i];
                posizione++;
            }
            controllo = 0;
        }
    }
    printf("\nLe lettere comuni ad entrabe le stringhe sono: %s", comuni);
}

void confrontoVocali(char stringa[], char stringa2[], int lunghezzaStringa, int lunghezzaStringa2){
    int vocaliStringa = contaVocali(stringa,lunghezzaStringa);
    int vocaliStringa2 = contaVocali(stringa2,lunghezzaStringa2);
    if(vocaliStringa>vocaliStringa2){
        printf("\nLa prima stringa contiene più vocali");
    }
    if(vocaliStringa2>vocaliStringa){
        printf("\nLa seconda stringa contiene più vocali");
    }
    if(vocaliStringa==vocaliStringa2){
        printf("\nLe stringhe hanno lo stesso numero di vocali");
    }
}

void confrontoConsonanti(char stringa[], char stringa2[], int lunghezzaStringa, int lunghezzaStringa2){
    int consonantiStringa = contaConsonanti(stringa,lunghezzaStringa);
    int consonantiStringa2 = contaConsonanti(stringa2,lunghezzaStringa2);
    if(consonantiStringa>consonantiStringa2){
        printf("\nLa prima stringa contiene più consonanti");
    }
    if(consonantiStringa2>consonantiStringa){
        printf("\nLa seconda stringa contiene più consonanti");
    }
    if(consonantiStringa==consonantiStringa2){
        printf("\nLe stringhe hanno lo stesso numero di consonanti");
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
                break;
            }else{
                controllo=1;
                lunghezzaStringa++;
                break;
            }
        }
    }while(controllo==0);
    contaVocali(stringa, lunghezzaStringa);
    contaConsonanti(stringa, lunghezzaStringa);
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
                break;
            }else{
                controllo=1;
                lunghezzaStringa2++;
                break;
            }
        }
    }while(controllo==0);
    confrontoLunghezza(lunghezzaStringa, lunghezzaStringa2);
    letteraComuni(stringa, stringa2, lunghezzaStringa, lunghezzaStringa2);
    confrontoVocali(stringa, stringa2, lunghezzaStringa, lunghezzaStringa2);
    confrontoConsonanti(stringa, stringa2, lunghezzaStringa, lunghezzaStringa2);
    return 0;

}