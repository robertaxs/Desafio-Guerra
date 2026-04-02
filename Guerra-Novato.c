#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Essa estrutura armazena nome, cor do exército e quantidade de tropas
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {

    // Vetor para armazenar 5 territórios
    Territorio territorios[5];

    // Entrada de dados
    printf("=== Cadastro de Territórios ===\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);

        // Nome do território
        printf("Digite o nome: ");
        scanf("%s", territorios[i].nome);

        // Cor do exército
        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);

        // Quantidade de tropas
        printf("Digite o número de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados
    printf("\n=== Territórios cadastrados ===\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("---------------------------\n");
    }

    return 0;
}
