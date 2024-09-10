#include <stdio.h>
#include <stdlib.h>

int main(){
    int  n1,n2,n3,n4,n5;
    printf("Valor 1: ");
    fflush(stdin);
    scanf("%i",&n1);
    printf("Valor 2: ");
    fflush(stdin);
    scanf("%i",&n2);
    printf("Valor 3: ");
    fflush(stdin);
    scanf("%i",&n3);
    printf("Valor 4: ");
    fflush(stdin);
    scanf("%i",&n4);
    printf("Valor 5: ");
    fflush(stdin);
    scanf("%i",&n5);
    printf("O valores absolutos sao %i, %i, %i, %i, %i.",abs(n1),abs(n2),abs(n3),abs(n4),abs(n5));
}
