#include<stdio.h>
#include<stdlib.h>
void main()
{
   int i,j,table;
   system("clear");
   printf("\n enter how many tables you want");
   scanf("%d",&table);
   for(i=1;i<=table;i++)
   {
	for(j=2;j<i;j++)
   {
    printf("\n%d*%d=%d",i,j,i*j);
   }
    printf("\n");
   }
}    
