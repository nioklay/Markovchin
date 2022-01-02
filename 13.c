#include <stdio.h>
#include <conio.h>

int main()
{
    int k;
    printf("Enter the sum of money  \n");
    scanf("%d",&k);
    if (k%10==1)
    {
        printf("%d Roobl\n",k);
    }
    else if(k%10<=4 && k%10>=2)
    {
        printf("%d Rooblya\n",k);
    }
    else if((k%10<=9 && k%10>=5) || k%10==0)
    {
        printf("%d Roobley\n",k);
    }
}