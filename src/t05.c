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