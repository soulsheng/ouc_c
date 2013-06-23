#include<stdio.h>

int fun(long int x)
{
	long m,a;
	for(a=10; ;a*=10)
	{
		m=x*x%a;

		if(x==m) 
			return(1);

		if(x*x/a==0) 
			return(0);
	}

}

void main()
{int x;
 scanf("%d",&x);
 if(fun(x)==1)
	puts("Yse");
 else puts("No");
 
}

/*
	请编写一个函数int fun(long int x)，它的功能是：判断整数x是否是同构数。
   若是同构数，函数返回1；否则返回0。所谓“同构数”是指这样的数，它出现在
   它的平方数的右边。例如：输入整数5，5的平方数是25，5是25中右侧的数，
   所以5是同构数，输出"Yes"。要求x的值不大于10000。

  */