#include <stdio.h>
#include <conio.h>

int main()
{
   //если Х положительное(не равное нулю) четное целое число, то присвоить Х его квадрат, если не четное, то остаток от деления на три.
    int x;

    	//a
    x = 12;
        if (!(x<=0))
        if (x%2==0)
            x=x*x;
        else x = x%3;
        printf("a) x = %d \n", x);

    x = 11;
        if (!(x<=0))
        if (x%2==0)
            x=x*x;
        else x = x%3;
        printf("a) x = %d \n", x);
	
	    //b
    x = 12;
        if (x>0)
        if (x%2!=0)
            x=x*x;
        else x = x%3;
        printf("b) x = %d \n", x);

    x = 11;
        if (x>0)
        if (x%2!=0)
            x=x*x;
        else x = x%3;
        printf("b) x = %d \n", x);

	    //c
    x = 12;
        if (!(x%2==0)) // было = вместо ==
        if (x>0)
        x=x*x;
        else x = x%3;
        printf("c) x = %d \n", x);

    x = 11;
        if (!(x%2==0)) // было = вместо ==
        if (x>0)
        x=x*x;
        else x = x%3;
        printf("c) x = %d \n", x);

	    //d
    x = 12;    
        if (!(x%2==0)) // было = вместо == 
        {if (x>0)
            x=x*x;}
        else x = x%3;
        printf("d) x = %d \n", x);

    x = 11;
        if (!(x%2==0)) // было = вместо == 
        {if (x>0)
            x=x*x;}
        else x = x%3;
        printf("d) x = %d \n", x);
        // условию задачи соответствует вариант решения A
}