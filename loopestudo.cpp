#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int pronome;

    printf("\n");
    printf("Olá! Para prosseguirmos, responda à pergunta abaixo!\n");
    printf("\n");
    printf ("Primeiramente, qual pronomes devemos utilizar?\n");
    printf("----------------\n");

    do {
    printf("1- Ela/dela\n");
    printf("2- Ele/dele\n");
    printf("3- Neutro\n");
    scanf("%d", &pronome);

    if (pronome <1 || pronome >3) {
        printf("Ops! Opção inválida! Selecione APENAS os números abaixo.\n");
        }
    }

    while (pronome <1 || pronome >3);
    if (pronome ==1) {
        printf("Bem vinda! Vamos começar?\n");
        }

    else if (pronome ==2) {
        printf("Bem vindo! Vamos começar?\n");
    }
    else {
        printf("Bem vinde! Vamos começar?\n ");
            }
    return 0;

}
