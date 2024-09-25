#include <stdio.h>

int main() {
    char nom[20], prenom[20], sexe[1], email[50];
    int age;

    printf("Entrez votre nom: ");
    scanf("%19s", &nom);
    printf("Entrez votre prenom:");
    scanf("%19s", &prenom);
    printf("Entrez votre âge: ");
    scanf("%d", &age);
    printf("Entrez votre sexe {M}: ");
    scanf(" %c", &sexe);
    printf("Entrez votre adresse email: ");
    scanf("%49s", &email);
    printf(" Vos informations personnelles:\n");
    printf("Nom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Âge: %d\n", age);
    printf("Sexe: %s\n", sexe);

    return 0;

}

