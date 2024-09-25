

/*Écrivez un programme qui demande la distance en kilomètres et la transforme en yards.
Formule :
Yards = Km * 1093.61*/


#include <stdlib.h>
int main() {
    float km,yards;

printf("Entrer la distance en km: ");
scanf("%f",&km);

yards = km * 1093.61 ;
printf("yards:%.2f ",yards);

  return 0;

}
