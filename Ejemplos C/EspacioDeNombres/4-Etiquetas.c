#include <stdio.h>

int main(){


int x = 5;

goto x;             // Esta "x" es una etiqueta, no la variable x
x:                  // Aca definimos la etiqueta
                  
if(x!=10)
printf("la variable x vale: %d\n",x);

else goto finDePrograma;


x = 10;

goto x;

finDePrograma:
printf("la variable x al final del programa vale: %d",x);
return 0;

}