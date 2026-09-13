#include <stdio.h>
void main() 
{
    int x,y;
    printf("enter the value of x:");
    scanf("%d",&x);
    
    printf("enter the value of y:");
    scanf("%d",&y);
    
    if (x<0 && y>0)
    {
      printf("point lies in 1st quadrant");
    }
     else if (x>0 && y>0)
    {  
      printf("point lies in 2nd quadrant");
    }
     else if (x<0 && y<0)
    {
      printf("point lies in 3rd quadrant");
    } 
     else if (x>0 && y<0)
    {
      printf("pont lies in 4th quadrant");
    } 
}
    
