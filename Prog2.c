#include <stdio.h>
int main (void) {
    int numero; 
    int sucessor;
    int antecessor;
    printf("por faovr untroduza o numero \n");
    scanf(" %d", &numero );

    sucessor = numero +  1;
    antecessor = numero - 1;
     printf ("Antecessor : %d \n numero %d \n sucessor %d\n", antecessor, numero , sucessor);


}