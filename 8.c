#include <stdio.h>
#include <conio.h>

int main()
{
 printf( "Enter A, B, C, e, f\n" );
    int a, b, c, e, f;
    scanf("%d%d%d%d%d", &a,&b,&c,&e,&f);
    if (e<f){
        if (a>=e && a<=f){
            printf("%d ",a);
        }
        if (b>=e && b<=f){
            printf("%d ",b);
        }
        if (c>=e && c<=f){
            printf("%d ",c);
        }
    }
    else 
    {
        printf("f < e, retry");
    }

}