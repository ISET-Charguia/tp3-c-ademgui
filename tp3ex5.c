#include <stdlib.h>
#include <stdio.h>
int main()
{
int largeur,longueur,i,j ;
printf("donner la langueur");
scanf("%d",&longueur);
printf("donner la largeur");
scanf("%d",&largeur);
printf("Affichage d’un rectangle d’etoiles de longueur %d et largeur %d.\n",longueur,largeur);
for(i = 0;i < largeur;i = i + 1)
{
for(j = 0;j < longueur;j = j + 1)
{

printf("*");
}
printf("\n");
}
return 0;
}
