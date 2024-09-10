#include <stdio.h>

int valor(int n){
    if(n>0)return 1;
    else if(n==0) return 0;
    else return -1;
}

void main(){
    int n;
    printf("Valor: ");
    fflush(stdin);
    scanf("%i",&n);
    printf("%i",valor(n));
}
