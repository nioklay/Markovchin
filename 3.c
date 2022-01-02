#include <stdio.h>
#include <conio.h>

int main()
{
    
    // a
        /*
	    if x < 5 y >=-10
		printf("%d \n", x+y); 
        не хватает круглых скобок и ","
        */

       int  x=45;
       int  y=-10;
    if (x < 5, y >=-10)
	    printf("a %d \n", x+y);

	// b
	x=45; 
    y=-10;
	if (x<5)
	if (y>=-10)
		printf("b %d \n", x+y);

	// c  
	x=45;
    y=-10;
	if (x<5,y>=-10)
		printf("c %d \n", x+y);

	// d 
	 x=45;
     y=-10;
	if (x<5&&y>=-10)
		printf("d %d \n", x+y);

}