#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
	//a	
	switch (x)
		{
		  case 5: x++; break;
		 // case x>0: x--; break;  // выражение должно быть константным
		  default: x+=66; 
	    }
	
	// b	
    int x1;
	switch (x1)
		{
		  case 5: x+=7; break;
		  case 6: case 11: --x; break;
	    }
	
	// c
    int x2;
	switch (x2)
		{
		  case 5: x*=16;        // отсутствует оператор break , switch будет работать некорректно
		  case 6: case 11: x-=23; break;
	    }
	
	// d	
	switch (5)                  // необходима переменная в скобках
		{
		  case 5: x+=7; break;
		  case 6: case 11: --x; break;
	    }


}