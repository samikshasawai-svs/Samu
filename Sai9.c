#include<stdio.h>
void main ()
{
   int a,b,i;
   printf("enter range:");
   scanf("%d%d",&a,&b);
   
   for (i=a;i<=b;i++)
   {
       printf("%d*%d=%d\n",i,i,i*i);
   }
}       
