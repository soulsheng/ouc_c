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