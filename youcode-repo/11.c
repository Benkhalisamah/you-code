#include<stdio.h>
int main() {
    float longueur, largeur;
    printf("Saisir la longueur: ");
    scanf("%f", &longueur);
    printf("Saisir la largeur: ");
    scanf("%f", &largeur);
    float surface = longueur * largeur;
    printf("surface = %.2f", surface);
    return 0;
}