#include <stdio.h>

int par(int n){
    if(n%2==0)return 1;
    else return 0;
}

void main(){
    int n;
    printf("Valor: ");
    fflush(stdin);
    scanf("%i",&n);

    printf("%i",par(n));
}
