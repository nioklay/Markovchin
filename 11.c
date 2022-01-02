#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() 
{
  int X, Y;
   printf("Enter the X and Y\n");
   scanf("%d%d",&X,&Y);
      if ((X*Y>0))
        {                                                                                                                          
            printf((X>0&&Y>0) ? "1 quadrant" : "3 quadrant");
        } 
      else 
        {
            printf((X>0&&Y<0) ? "4 quadrant" : "2 quadrant");
        }
}