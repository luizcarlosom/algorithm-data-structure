#include <stdio.h>

#define NORTE 'N'
#define SUL 'S'
#define LESTE 'L'
#define OESTE 'O'

#define TAM_BUSSOLA 4

char buscando(int entrada_num , char entrada_str[]) {
    int cont = 0;

    int result = 0;

    for(int j = 0; j < entrada_num; j++) {
        cont++;

        result = (entrada_str[j] == 'D' ? result + 90 : result - 90);

        if (cont == TAM_BUSSOLA) {
            result = 0;
        }
    }

    if (result == 360 || result == -360) return NORTE;
    if (result == 180 || result == -180) return SUL;
    if (result == 90 || result == 270) return LESTE;
    if (result == -90 || result == -270) return OESTE;
}

int main() {
    int entrada_num;
    scanf("%d", &entrada_num);

    char entrada_str[entrada_num];
    scanf("%s", entrada_str);

    printf("%c", buscando(entrada_num, entrada_str));
    //buscando(entrada_num, entrada_str);
    return 0;
}