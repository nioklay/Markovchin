#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() 
{
  int m, n;
  printf("Enter the time of music  \n");
  scanf("%d%d",&m,&n);
  if (16 * (m * 60 + n) <= 6 * 1024){
      printf("enough space\n");
    } 
    else {
        printf("not enough space\n");
        }
  
}