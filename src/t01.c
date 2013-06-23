#include<stdio.h>


long fun(long int x)
{
	long y=0;
	int  bit=0;

	while( x/10 != 0 )
	{
		bit = x%10;

		if( bit%2 != 0 )
		  y= y*10 + bit;

		x=x/10;
	}

	if( x%2 != 0 )
		y= y*10 + x;

	return y;
}

void main()
{long a,b;
 printf("Please input a long int num:");
 scanf("%ld",&a);
 b=fun(a);
 printf("b=%ld\n",b);

}