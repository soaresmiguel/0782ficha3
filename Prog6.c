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

printf("Escolha uma das operacoes , +,-,*,/\n");
scanf(" %c", &operacao);
switch (operacao) {
    case '+':
    mais = numero1 + numero2;
     printf("A soma de %d e de %d é de %d\n", numero1, numero2, mais);
     break;
     case '*':
     veses = numero1 * numero2;
        printf("A multiplicacao de %d e de %d é de %d\n",numero1 , numero2, veses);
        break;
        case '-':
         menos = numero1 - numero2;
        printf(" A subtracao de %d e de %d é de %d\n",numero1, numero2,menos);
        break;
        case '/':
         dividir = numero1 / numero2;
        printf(" A divisao entre %d e de %d é de %d\n",numero1,numero2, dividir);
        break;
        
     default:
     break;
}
}