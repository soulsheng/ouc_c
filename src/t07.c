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

/*
	给定程序中，函数fun的功能是：有M×N二维数组，分别将每一行的最大值
   与本行的最后一个数据（第N-1列数据）对调，其余数据保持不变。然后按
   每一行的最大值对二维数据各行降序排序。例如，有右侧数组数据：

11  52  43   4  25  22    求最大值并对调后：11  22  43   4  25  52
22  33  46  58  16  47                      22  33  46  47  16  58
83  42  54  26  47  0                        0  42  54  26  47  83
 4   5   6   7   8  9                        4   5   6   7   8   9
45  96  17  18  39  2                       45   2  17  18  39  96

排序后最终输出：
45   2  17  18  39  96
 0  42  54  26  47  83
22  33  46  47  16  58
11  22  43   4  25  52
 4   5   6   7   8   9


  */