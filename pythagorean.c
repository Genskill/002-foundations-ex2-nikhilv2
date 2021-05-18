#include<stdio.h>
#include<cs50.h>
int main(void)
{	float largest, a1, b1, calc;
	float a=get_int("side 1 ");
	float b=get_int("side 2 ");
	float c=get_int("side 3 ");
	//finding largest number
	largest = a;
	if(a>b)
	{
		if(a>c)
		{
			largest=a;
			a1=b;
			b1=c;
		}	
		else
		{
			largest=c;
			a1=a;
			b1=b;
		}
	}
	else 
	{
		if(b>c)
		{
			largest=b;
			a1=a;
			b1=c;
		}
		else
		{
			largest=c;
			a1=a;
			b1=b;
		}
	}
	
	if(((a1*a1)+(b1*b1))==(largest*largest))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	
}
