#include <stdio.h>
#include <stdlib.h>

//fazer uma calculadora em c usando do while

int main()
{
    float num1, num2, resultado;
    char operacao;
    int continuar = 1;
    
    while(continuar == 1) {
        printf("\n=== CALCULADORA ===\n");
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        
        printf("Digite a operação (+, -, *, /): ");
        scanf(" %c", &operacao);
        
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        
        if (operacao == '+') {
            resultado = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
        } else if (operacao == '-') {
            resultado = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
        } else if (operacao == '*') {
            resultado = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
        } else if (operacao == '/') {
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
        } else {
            printf("Operação inválida!\n");
        }
        
        printf("\nDeseja continuar? (1=Sim, 0=Não): ");
        scanf("%d", &continuar);
    }
    
    printf("Calculadora encerrada!\n");
    return 0;
}