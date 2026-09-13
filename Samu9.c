#include<stdio.h>
void main()
{
    int ch;
    float x,y,z,l,b,h;
    printf("\n1. area of square");
    printf("\n2. area of rectangle");
    printf("\n3. area of triangle");
    printf("\n4. enter your choice:");
    scanf("%d",&ch);
    
    switch (ch)
  {  
     case1:
     {
       printf("enter length:");
       scanf("%f",&l);
       x=1*1;
       printf("area of square=%f",x);
       break;
     }   
     case2:
     {
        printf("enter length:");
        scanf("%f",&l);
        printf("enter breath");
        scanf("%f",&b);
        y=1*b;
        printf("area of rectangle=%f",y);
        break;
     }
     case3:
     {
        printf("enter base:");
        scanf("%f",&b);
        printf("enter height:");
        scanf("%f",&h);
        z=0.5*b*h;
        printf("area of triangle=%f",z);
        break;
      }
      default:
     {
        printf("something went wrong");  
     }
   }
}        

    
