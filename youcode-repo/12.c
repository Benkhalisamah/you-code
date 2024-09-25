#include <stdio.h>
int main() {
    int N, inv = 0;
    printf("Donner un nombre de 4 chiffres : ");
    scanf("%d", &N);
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    N = N/10;
    inv = inv*10 + N%10;
    printf("%d", inv);
    
    return 0;
}