#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c;
    // s1 = 2*a
    // s2 2*a + b

    if (a < b)
     if (a > b) c = 2*a;
     else c = 2*a + b;
        printf("%d - Result \n", c);
    if (a < b) 
    { 
        if (a > b) c = 2*a;
         else c = 2*a + b; 
    }
        printf("%d - Result \n", c);
    if (a < b)
    { 
        if (a > b) c = 2*a;    
    } 
      else c = 2*a + b; 
         printf("%d - Result \n", c);
    if (a < b)
      if (a > b) c = 2*a;
       else ;
        else c = 2*a + b; 
         printf("%d - Result \n", c);
    if (a < b)
      if (a > b) c = 2*a;
       else c = 2*a + b;
        else ;
         printf("%d - Result \n", c);
}