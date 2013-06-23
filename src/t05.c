#include<math.h>
#include<stdio.h>


long fun(int high,int n)
{
	int i,j,m,x=0,sum=0;
	for (i=high-1;i>=2;i--)
	{
		m=sqrt(i);

		for(j=2;j<=m;j++)
			if(i%j==0) break;
		
		if(j>m) 
		{
			sum+=i;
			x++;
		}
		
		if(x==n) break;
	}

	return(sum);

}

void main()
{int k,n;
 scanf("%d%d",&k,&n);
 printf("sum=%ld\n",fun(k,n));

}

/*
	编写函数long fun(int high，int n)，功能是：计算并返回high以内（不包含high）
    最大的n个素数之和。若不足n个，则到最小素数2为止。例如：若high=100,n=10，
    则函数的返回值为：732；若high=11,n=10，则函数返回：17。
  */