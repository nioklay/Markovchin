#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() 
{
    int x;
    printf("enter the number of the day of the week\n");
    scanf( "%d", &x);
        switch (x) {
            case 6:      
                printf("Wow, it's Saturday! Nice day to finish all chores and watch TV series\n");
                break;
            case 7:
                printf("Sunday... is a good day to stay at home\n");
                break;
            default:
                printf("Oh, no.. today is working day\n");
                break;
        }
    
}
