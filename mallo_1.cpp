#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
int main(){
    int salir;
    //Definimos el vector de PUNTEROS
    int nletras;
    int cont;
    char palabra[20];
    char *lista[3];//3 posiciones de memoria que apuntan a 3 palabras
    //procedimiento
    for(cont=0;cont<3;cont++){
    //1.Leo una palabra
            std::cout<<"Palabra: ";
            std::cin>>palabra;
    //2.Aveeriguo cuantas letras tiene
            nletras=strlen(palabra);
    //3.Reservo memoria para guardar la palabra
                lista[cont]=(char*)malloc(nletras*sizeof(char));
    //4.escribo la palabra en la memoria reservada
                strcpy(lista[0], palabra);//Copia la palabra en la lista [0]
    //5.volvemos al punto 1
} 
    printf("\nToca cualquier letra para salir");
    scanf("%i",&salir);
}  
