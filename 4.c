#include <stdio.h>

int main() {
    float kmc, ms;

    printf("Entrer la vitesse en kilomètres par heure (km/h): ");
    scanf("%f", &kmc);

    ms = kmc * 0.27778;

    printf("La vitesse en mètres par seconde (m/s) est: %f\n", ms);

    return 0;
}
