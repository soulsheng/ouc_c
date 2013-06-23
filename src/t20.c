#include<stdlib.h>
#include<stdio.h>

int fun(int n,int *p)
{
	int arr1[10000]={0};
	int i,j;
	int t1,t2;
	for(i=0;i<n;i++)
	{
		arr1[i]=i+1;
	}
	
	*p=arr1[2];
	p++;

	for(j=0;j<n-3;j++)
	{

		t1=arr1[0];
		t2=arr1[1];
		for(i=0;i<n-3-j;i++)
		{
			arr1[i]=arr1[i+3];
		}
		arr1[n-3-j]=t1;
		arr1[n-2-j]=t2;
		*p=arr1[2];
		p++;
	}
	*p=arr1[0];
	p++;
	*p=arr1[1];
	return *p;

}

void main()
{int m,*a,i,num;
 scanf("%d",&m);
 a=(int *)malloc(sizeof(int)*m);
 num=fun(m,a);
 printf("n=%d\n",num);
 for(i=0;i<m;i++)
	printf("%d ",a[i]);
 puts("");
 free(a);

}


/*
	m个人围成一圈,1,2,3循环报数，报到3的人退出，并将退出的序号依次
   存到数组p中，包括最后一个人的序号。到最后只余1人，输出最后留下
   的是第几号（最初的序号，以1起始）。
   若m=6，则输出n=1<CR>  3 6 4 2 5 1；
   若m=10，则输出n=4<CR> 3 6 9 2 7 8 5 10 4；
   若m=100，则输出n=91……。
   函数int fun(int n ,int *p)实现上述功能，返回n个人中最后余的1人
   的起始序号，并将退出的序号顺序写入p指向的数组中。


  */