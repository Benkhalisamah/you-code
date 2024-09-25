/*Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, 
Règle :

C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz */
# include <stdio.h>
int main()
{
float temp;
printf("entrer la temperature");
scanf("%f",&temp);
if(temp<0) {
printf("solide");}
else if(0 <= temp && temp <100 ){
Printf("liquide");}
else {
 Printf("gaz");
 }

    return 0;
}