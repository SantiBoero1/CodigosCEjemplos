#include <stdio.h>

// Definicion de una funcion llamada "ejemplo"

void ejemplo(){
    printf("Llamando a la funcion ejemplo() \n");
}

// Definicion de una estructura con el mismo nombre que la funcion

struct ejemplo {

    int valor;  
};

int main(){

    // Creamos una variable del tipo de la estructura definida

    struct ejemplo miEjemplo;
    miEjemplo.valor = 42;

    // Llamamos a la funcion

    ejemplo();
    printf("Valor de la estructura: %d \n", miEjemplo.valor);
    return 0;
    
}