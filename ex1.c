#include <stdio.h>

int numeros(int n1, int n2){
    if(n1<n2)return n1;
    else return n2;
}
void main(){
    int x,y;
    printf("Numero 1: ");
    fflush(stdin);
    scanf("%i",&x);
    printf("Numero 2: ");
    fflush(stdin);
    scanf("%i",&y);
    printf("O menor numero e %i",numeros(x,y));
}
