#include <stdio.h>
#import <math.h>

float ponto(float a1, float a2, float b1, float b2, float res) {
    res = sqrt(((a2-a1)*(a2-a1))+((b2-b1)*(b2-b1)));
    return res;
}

void main(){
    float x1,y1,x2,y2,res;
    printf("Valor de x1 e y1: ");
    fflush(stdin);
    scanf("%f %f",&x1, &y1);
    printf("O valor de x1= %.2f e y1= %.2f\n\n",x1,y1);

    printf("Valor de x2 e y2: ");
    fflush(stdin);
    scanf("%f %f",&x2, &y2);
    printf("O valor de x2= %.2f e y2= %.2f\n\n",x2,y2);

    printf("A distancia euclidiana entre os dois pontos e de: %f",ponto(x1,x2,y1,y2,res));
}
