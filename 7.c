#include <stdio.h>
#include <conio.h>

int main()
{
    printf( "Enter A, B, C\n" );
    int a, b, c;
    scanf("%d%D%D", &a,&b,&c);
    if ((a%2==0) || (b%2==0) || (c%2==0)){
     printf( "YES"); 
    } else {
       printf( "NO");  
    }
    
}