#include "stdio.h"


void fun(int *p,int n,int m)
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=n-1;j>=0;j--)
			*(p+j+1)=*(p+j);
	
		*(p+0)=*(p+n);
	}

}

void main()
{
 int x[10]={1,2,3,4,5,6,7,8,9,10},i;
 fun(x,10,14);
 for(i=0;i<10;i++)
   printf("%d ",x[i]);
 printf("\n");

 }

/*
	n个整数,前面各数循环顺序后移m个位置,最后m个数变成最前面m个数。
   写函数void fun(int *p,int n,int m)，实现上述功能。在main()中输入与输出。
   如下面程序输出  7 8 9 10 1 2 3 4 5 6  。注意，m可能大于n。

    难度系数：**
  */