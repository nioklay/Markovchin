#include <stdio.h>
#include <conio.h>

int main()
{
    int x, number1, number2, number3;
    printf("Enter the number\n");
    scanf("%d",&x);
    number1=x/100;
    number2=x/10%10;
    number3=x%10;
    if (number1==number2 || number1==number3 || number2==number3){
        printf("YES\n");
    }
    else printf("NO\n");
}