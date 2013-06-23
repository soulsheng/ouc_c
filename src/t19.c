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


/*
	传说可以根据两个人的生日来计算其缘分.方法:将两个人的生日各位相加,将得到的数
   再一次各位相加,直到其值为一个一位数,此数即代表两个人的缘分.
   例如,两个生日为:19820523,19841111,则各位相加:1+9+8+2+5+2+3+1+9+8+4+1+1+1+1得:56;
   再5+6得11;再 1+1得2,即为两人的缘分.编写计算缘分程序,两个生日由键盘输入.

  */