#include<stdio.h>
#include<stdlib.h>

int main()
{

int n,i;
printf(" le tableau de multiplication\n");

printf("Entrer le nombre\t");
scanf("%d",&n);

for ( i = 1; i <= 10; i++)
{
printf("%d x %d = %d\n",n,i,n*i);
}





    return 0;
}