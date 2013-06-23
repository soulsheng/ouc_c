#include<math.h>
#include<stdio.h>

int fun(int m)
{
	int s=0,a,i;
    for(i=0,a=0;s<=m;i++)
    {
		a+=i;
        s+=a;
    }
	return(i-2);

}

void main()
{
	int x;
	scanf("%d",&x);
	printf("n=%d\n",fun(x));

} 

/*
	编写函数int fun(int  m)，计算并返回满足表达式：
    1+（1+2）+（1+2+3）+（1+2+3+4）+……+（1+2+3+……+n）<=m
    最大的n。例如，当m=10000时，程序输出：n=38。

    难度系数：*
  */