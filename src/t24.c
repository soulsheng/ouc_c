  #include<stdio.h>

  int fun(float *p,int n)
  {
	float average;
	int count;
	int i;
	average = 0.0f;
	count =0;

	for(i=0;i<n;i++)
		average += p[i];
	average /= n;

	for(i=0;i<n;i++)
		if( p[i] > average )
			count ++;

	return count;
  }
  
  void main()
  {
    float a[8];int n,i;
	for(i=0;i<8;i++)
		scanf("%f",&a[i]);
	n=fun(a,8);
	printf("n=%d\n",n);
  }

/*
	编写函数 int fun(float *p,int n) , 功能:统计有n个数据的一维数组p中
    大于平均值的数组元素个数.例如,若输入:3 5 6 1 2 8 9 6  输出: n=4  

    难度系数：*
*/