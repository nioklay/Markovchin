#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int max (int a, int b) { return a>b? a: b; }
int main()
{

    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);
    int mx;
    mx = max(max(a,b),c);
    printf("Max is %d", mx);
    
}