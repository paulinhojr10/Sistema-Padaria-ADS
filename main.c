#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20] = "admin";
    char senha[20] = "1234";
    char input_user[20], input_senha[20];

    printf("=== SISTEMA PADARIA KI-DELICIA ===\n");
    printf("Usuario: ");
    scanf("%s", input_user);
    printf("Senha: ");
    scanf("%s", input_senha);

    if (strcmp(usuario, input_user) == 0 && strcmp(senha, input_senha) == 0) {
        printf("Login realizado com sucesso!\n");
    } else {
        printf("Usuario ou senha incorretos.\n");
    }
    return 0;
}
