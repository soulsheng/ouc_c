  #include<stdio.h>
  #define N 5
  
  int fun(int (*p)[N],int m)
  {
	int i,j,sum;
	sum = 0;

	for(i=0;i<m;i++)
		for(j=0;j<N;j++)
			if(i==0 || i==m-1 || j==0 || j==N-1 )
				sum += p[i][j];

	return sum;
  }
  
  void main()
  {
    int a[4][N]={{3,2,5,4,2},{6,2,3,9,1},{4,6,1,8,6},{7,6,5,4,2}};
	printf("sum=%d\n",fun(a,4));
	
  }

/*
	��д���� int fun(int (*p)[N],int m),����:����m��N�еĶ�ά������
   Χ������֮��.����,����������:57

*/