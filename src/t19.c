#include "stdio.h"

int fun(long x,long y)
{
	long sum=0,m;
	for(m=x+y;m>0||sum>=10;)
	{ 
		sum+=m%10;
		m/=10;
		if(m==0&&sum>=10)
		{
			m=sum;
			sum=0;
		}

	}

	return sum;
}

void main()
{
 long x,y;
 int k;
 scanf("%ld%ld",&x,&y);
 k=fun(x,y);
 printf("yuan fen is %d",k);

 }