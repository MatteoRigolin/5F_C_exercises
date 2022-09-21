#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <boolean.h>

bool checkStrings(char* strings[],int nelements)
{
    bool check = false;
    for(int i = 0; i < nelements - 1; i++)
    {
        //tramite string compare controllo se ci sono doppioni e in caso ritorno il booleano a true
        if(strcmp(strings[i],strings[nelements-1]) == 0){
            check = true;
            break;
        }
    }
    return check;
}
int main(){
    //inizializzo le variabili
    int length = 1000000, strLength, character;
    bool check;
    char chars[36] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};
    char strings[length];
    //creo e apro il file che conterrà le stringhe
    FILE *file;
    file=fopen("file.txt","w+");
    //ripeto finché non ho generato 1000000 stringhe
    for(int i = 0; i < length; i++){
        //genero a random quanto sarà lunga la stringa da creare
        strLength= (rand() % (20-3) ) + 3;
        //ripeto in base a quanto deve essere lunga la stringa
        for(int j = 0; j < strLength; j++)
	    {
            //creo la stringa prendendo randomicamente un carattere dall'array con lettere e numeri
            character= (rand() % (35-0) );
            strings[i][j]=chars[characters];
	    }      
        strings[i][strLength]='\0';
        //controllo con una funzione se la stringa esiste già
        if(i > 0){
            check=checkStrings(strings, i+1);
        }
        //se la funzione restituisce true ripeto il ciclo e ne genero una nuova
        if(check==true){
            i--;
        }
    }
    //inserisco nel file le stringhe e lo chiudo
    for(int k = 0; k < length; k++){
        fprintf(file," %s\n", strings[k]);
    }
    fclose(file);
    return 0;
}
