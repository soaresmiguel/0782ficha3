#include <stdio.h>
int main (void) {
    int numero1;
    int numero2;
    char operacao;
    int mais;
    int menos;
    int veses;
    int dividir;
    printf("introduza o numero 1\n");
    scanf("%d",&numero1);

    printf("introduza numero 2\n");
    scanf(" %d",&numero2);

printf("Escolha uma das opreacoes , +,-,*,/\n");
scanf(" %c", &operacao);
    if (operacao == '+') {
     mais = numero1 + numero2;
     printf("A soma de %d e de %d é de %d\n", numero1, numero2, mais);
    } else if (operacao == '-') {
        menos = numero1 - numero2;
        printf(" A subtracao de %d e de %d é de %d\n",numero1, numero2,menos);
        
    } else if (operacao == '*') {
        veses = numero1 * numero2;
        printf("A multiplicacao de %d e de %d é de %d\n",numero1 , numero2, veses);
    } else if (operacao == '/' ) {
        dividir = numero1 / numero2;
        printf(" A divisao entre %d e de %d é de %d\n",numero1,numero2, dividir);

    }
    return 0;
}