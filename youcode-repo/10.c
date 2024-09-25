#include<stdio.h>
int main() {
    float r;
    printf("Saisir le rayon: ");
    scanf("%f", &r);
    float volume = (4/3.0) * 3.14 * pow(r, 3);
    printf("volume = %.2f", volume);
    return 0;
}