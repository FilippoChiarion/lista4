#include <stdio.h>

int potencia(int base, int expoente){
    int res=1,i;
    for(i=0;i<expoente;i++){
        res*=base;
    }
    return res;
}

void main(){
    int base,expoente;
    printf("O valor da base: ");
    fflush(stdin);
    scanf("%i",&base);
    printf("O valor do expoente: ");
    fflush(stdin);
    scanf("%i",&expoente);
    printf("\n%i^%i=%i\n",base,expoente,potencia(base,expoente));
}
