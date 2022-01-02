#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() 
{
    printf("Enter the number of fish  \n");
    int fish;
    scanf("%d",&fish);
    printf("Enter the aquarium size  \n");
    int size;
    scanf("%d",&size);
    int a;
    if (size >= fish*3){
        printf("Everything ok \n");
    } else{
       a = size/3;
       a = fish - a;
       printf("%d of fish need to be movied\n", a);
    }






}