#include <stdio.h>
#include <conio.h>

int main()
{
    float a = 1;
    int city;
    printf("Choose the City number \n");
    printf("1.Vladivostock   2.Moskov    3.Krasnodar   4.Volgograd\n");
    printf("    432            095           861            844  \n");
    scanf("%d",&city);
    printf("Enter the time of talking on the phone  \n");
    int time;
    scanf("%d",&time);
        switch(city){
            case 1:
            printf("Your rate is 9,20\n");
            a = time * 9.2;
            printf("total cost = %f",a);
            break;
            case 2:
            printf("Your rate is 4,10\n");
            a = time * 4.1;
            printf("total cost = %f",a);
            break;
            case 3:
            printf("Your rate is 2,05\n");
            a = time * 2.05;
            printf("total cost = %f",a);
            break;
            case 4:
            printf("Your rate is 2,50\n");
            a = time * 2.5;
            printf("total cost = %f \n",a);
            break;
        }
}