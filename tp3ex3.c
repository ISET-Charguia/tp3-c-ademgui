#include <stdio.h>
#include <math.h>
int main(void)
{
int number,i;
printf("entrer un nombre:\n");
scanf("%d",&number);
for((i=number/2);i!=1;i--)
{
if (number%i==0)
printf("n'est pas premier ");
else
printf(" le nombre est premier");

return(0);
}
}
