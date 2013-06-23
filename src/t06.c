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