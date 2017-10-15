#include<stdio.h>

void main() {
	int a, b, x, t, m;


	printf("Entrez le premier entier positif:\t");
	scanf("%d",&a);
	printf("\nEntrez le deuxieme entier positif:\t");
	scanf("%d",&b);
	if (b>a)
	{	x=b;
		b=a;
		a=x;}

	while(b != 0)
	{	x = a%b;
		a = b;
		b = x;}
	while((a>b)&&(a !=0)&&(b !=0));
	printf("\nLe PGCD est :\t%d", a);
}

