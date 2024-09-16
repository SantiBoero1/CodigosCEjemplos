#include <stdio.h>

// Definicion de una funcion llamada "ejemplo"

void ejemplo(){
    printf("Llamando a la funcion ejemplo() \n");
}


int main(){

    // Creamos una variable con el mismo nombre que una funcion global

    int ejemplo = 3;

    // Llamamos a la funcion

    ejemplo();
    
    return ejemplo;
    
}