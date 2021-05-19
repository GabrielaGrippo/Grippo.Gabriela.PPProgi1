#include <stdio.h>
#include <stdlib.h>
#define TAM 10
void invertirCadena(char cadena[],int tam);
void ordenarAlgoritmos(char ejem2[],int tam);
int main()
{
    char cadena[TAM]="cadena";
    char ejem2[TAM]="algoritmo";

    invertirCadena(cadena,6);

    ordenarAlgoritmos(ejem2,9);
    printf("%s  ",ejem2);


    return 0;
}
void invertirCadena(char cadena[],int tam){
    char aux;
for(int i=tam;i>=0;i--){
    printf("%c",cadena[i]);
}
}
void ordenarAlgoritmos(char ejem2[],int tam){
char aux;

for(int i=0;i<tam-1;i++){
    for(int j=i+1;j<tam;j++){
        aux=ejem2[i];
        ejem2[i]=ejem2[j];
        ejem2[j]=aux;
    }
}
}
