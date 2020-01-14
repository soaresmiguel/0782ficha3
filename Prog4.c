#include <stdio.h>
int main (void) {
    int dia;
    printf("introduza o numero do dia da semana que deseja \n");
    scanf(" %d",&dia );
    switch (dia) {
        case 1:
        printf("domingo\n");
        break;

case 2:

printf("segunda-feira\n");
break;

    case 3:
    printf("terca-feira\n");
    break;

    case 4:
    printf("quarta-feira\n");
    break;

    case 5:
    printf("Quinta-feira\n");
    break;

    case 6:
    printf("Sexta-feira\n");
    break;

    case 7:
    printf("Sabado\n");
    break;
    }
    return 0;
}