#include<stdio.h>
void main ()
{
  int n,i=0;
  printf("enter limit");
   scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    if(i%2==0)
    printf("%d\t",i);
  }
}
