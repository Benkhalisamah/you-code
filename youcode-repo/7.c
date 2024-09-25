

#include<stdio.h>
int main() {
    float a, b, c;
    printf("Saisir N1: ");
    scanf("%f", &a);
    printf("Saisir N2: ");
    scanf("%f", &b);
    printf("Saisir N3: ");
    scanf("%f", &c);
    float moy = (a*2 + b*3 + c*5) / 9;
    printf("Moyenne pondérée = %.2f", moy);
    return 0;
}


