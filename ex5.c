#include <stdio.h>

int positivo(int num) {
    return num > 0;
}


int SomaDivisores(int num) {
    int soma=0;
    for(int i=1;i<=num/2;++i) {
        if(num%i==0){
            soma+=i;
        }
    }
    return soma;
}

void main() {
    setlocale (0,"Portuguese");
    int numeros[5];


    for (int i=0;i<5;++i) {
        do {
            printf("Digite o %i� n�mero inteiro positivo: ", i+1);
            scanf("%i", &numeros[i]);
            if (!positivo(numeros[i])) {
                printf("O n�mero deve ser positivo. Tente novamente.\n");
            }
        } while (!positivo(numeros[i]));
    }


    for (int i=0;i<5;++i) {
        int soma=SomaDivisores(numeros[i]);
        printf("A soma dos divisores de %i (exceto ele mesmo) �: %i\n", numeros[i], soma);
    }

}
