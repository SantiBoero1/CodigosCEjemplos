#include <stdio.h>

int globalVar = 100; // Variable global
 
void funcionImprimirVarGlobal() {
    printf("globalVar: %d\n", globalVar);
}

int main() {
    printf("globalVar: %d\n", globalVar);

    // globalVar = 50;

    // int globalVar = 5;

    if(globalVar)
    printf("globalVar: %d\n", globalVar);

    funcionImprimirVarGlobal();
    
    //printf("la variable local: %d", globalVar);

    return 0;
}

/* 
    ¿Que pasa si le asigno un nuevo valor a la variable global?

    
    funcionImprimirVarGlobal();

    ¿Y si declaro una nueva variable local con el mismo nombre? ¿Que pasara al llamar a la funcion?

    int globalVar = 5;
    funcionImprimirVarGlobal();
    printf("la variable local: %d", globalVar);
    
    */
