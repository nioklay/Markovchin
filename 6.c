#include <stdio.h>
#include <conio.h>

int main(){

//	Если Х равно 5, то присвоить Y квадрат Х, если 7, то У присвоить остаток от деления Х на 2, в остальных случаях значение Y увеличить на 1.
int x;
printf("Enter X\n");
scanf( "%d", &x);
int y = 1;
    switch (x) {
        case 5:  
            y = x*x;        
            printf("%d \n", y);
            break;
        case 7:
            y = x%2;
            printf("%d \n", y);
            break;
        default:
            y = y + 1;
            printf("%d \n", y);
            break;
    }
  
}