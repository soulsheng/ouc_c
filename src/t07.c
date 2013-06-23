#include<stdio.h>
#include<stdlib.h>

#define N 6
#define M 5

void fun(int a[M][N])
{
	int i,j,t,m,max,k;
	for(i=0;i<5;i++)
	{  
		max=a[i][0];m=0;
		for(j=1;j<6;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				m=j;
			}
		}
		t=a[i][m];
		a[i][m]=a[i][5];
		a[i][5] =t;
	}

	for(k=0;k<4;k++)
		for(i=0;i<4-k;i++)
			if(a[i][5]<a[i+1][5])
				for(j=0;j<6;j++)
				{
					t=a[i][j];
					a[i][j]=a[i+1][j]; 
					a[i+1][j]=t;
				}

}

void main()
{int x[M][N]={{11,52,43,4,25,22},{22,33,46,58,16,47},{83,42,54,26,47,0},
              {4,5,6,7,8,9},{45,96,17,18,39,2}},i,j;
 for(i=0;i<M;i++)
	{for(j=0;j<N;j++)
		printf("%3d",x[i][j]);
	 printf("\n");
	}
 fun(x);
 puts("===================");
 for(i=0;i<M;i++)
	{for(j=0;j<N;j++)
		printf("%3d",x[i][j]);
	 printf("\n");
	}

}