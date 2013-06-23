#include<stdio.h>

int fun(int *a,int n)
{
	int i,j=0;
	for(i=0;i<n;i++)
		if(*(a+i)%2==0)
		{
			a[j]=*(a+i);
			j++;
		}
	
	a[j]=-1;

	return(j);
}

void main()
{int x[15],i,n;
 for(i=0;i<15;i++)
	scanf("%d",x+i);
 n=fun(x,15);
 for(i=0;x[i]!=-1 && i<15;i++)
	printf("%d ",x[i]);
 printf("n=%d\n",n);

}

/*
	请编写函数int fun(int *a,int n)，它的功能是：把形参a所指数组中的偶数按原顺序
    依次存放到a[0]、a[1]、a[2]、……中，把奇数从数组中删除，偶数个数通过函数值返回，
    以-1作为有效数据的结束标志。
    例：若输入：1 2 3 4 5 6 7 8 9 10 11 12 13 14 15，输出：2 4 6 8 10 12 14 n=7
  */