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

/*
   请编写函数long fun(long int x)，功能是：将长整型数x中每一位上
   为奇数的数依次取出，并逆序构成一个新数返回。
   例如：程序运行时输入123456789，输出：b=97531。

  */