#include<stdio.h>
#include<iostream>

int main(){
    int x;
    int y;
    int *px;//puntero a x
    char salir;
    x=3;
    y=5;
    //Defino nuevas variables
    px=&x;
    //std::cout<<x;
    printf("direccion x=%X \ndereccion y=%X" ,&x,&y);
    printf("\ncontenido x=%d \ncontenido y=%d",x,y);
    std::cout<<"\nToca cualquier tecla para salir";
    std::cin>>salir;
    return 0;
}
