#include <stdio.h>
// gcc main.c -o main.exe
// .\main.exe
#define FECHADA 0
#define ABERTA 1

int portas(int n) {
    //printf("entrou na funcao");
    int portas[n];

    // Sairam para o jardim 
    for(unsigned long int i = 0; i < n; i++) {
        //printf("foram para o jardim");
        portas[i] = FECHADA;
    }

    // Netos
    for(unsigned long int i = 0; i < n; i++) {
        int neto = i + 1;

        // Portas
        for(unsigned long int j = 0; j < n; j++) {
            int porta = j + 1;

            if (porta % neto == 0) {
                if (portas[j] == FECHADA){
                    portas[j] = ABERTA;
                } else {
                    portas[j] = FECHADA;
                }
            }    
        }
    }

    // Imprimindo portas abertas
    for(unsigned long int i = 0; i < n; i++){
        if (portas[i] == ABERTA) {
            printf("%lu ", i + 1);
        }
    }

    printf("\n");

    return 0;
}

int main() {
    unsigned long int entrada;

    scanf("%d", &entrada);

    while(entrada != 0) {
        //printf("entrou no while");
        portas(entrada);

        scanf("%d", &entrada);
    }

    return 0;
}
