#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

    char alfabeto[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alfabeto_minusculo[] = "abcdefghijklmnopqrstuvwxyz";
    printf("qual mensagem deseja criptografar?\n");
    char mensagem[100];
    fgets(mensagem, sizeof(mensagem), stdin);
    mensagem[strcspn(mensagem, "\n")] = '\0';
    printf("digite a quantidade de shift\n");
    int shift;
    scanf("%d", &shift);
    printf("digite a razao da progressao\n");
    int razao;
    scanf("%d", &razao);
    for (int i = 0; i < strlen(mensagem); i++) {

    if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
        int shift_atual = shift + i * razao;
        // letra maiúscula
        for (int j = 0; j < 26; j++) {
            if (alfabeto[j] == mensagem[i]) {
               int recomecar;
                recomecar = (j + shift_atual) % 26;
                mensagem[i] = alfabeto[recomecar];
                break;
            }
        }
    }
    else if (mensagem[i] >= 'a' && mensagem[i] <= 'z') {
        // letra minúscula
        int shift_atual = shift + i * razao;
        for (int j = 0; j < 26; j++) {
            if (alfabeto_minusculo[j] == mensagem[i]) {
               int recomecar;
                recomecar = (j + shift_atual) % 26;
                mensagem[i] = alfabeto_minusculo[recomecar];
                break;
            }

        }
    }
}
    printf("seu texto criptografado eh: %s", mensagem);
    return 0;
}
