 #include <stdio.h>
  
float fun(int m)
{
	int i;
	int sign;
	float sum;

	sign=1;
	sum=0.0f;

	for(i=1;i<=m;i++)
	{
		sum += sign*1.0f/i ;  // *1.0f 化成小数很重要
		sign *= -1;
	}

	return sum;
}
  
  void main()
  {
   int x;
   scanf("%d",&x);
   printf("1-1/2+1/3...+(-)1/%d!=%f\n",x,fun(x));
  }

/*

  编写函数float fun(int m),功能是:根据正整型形参m,计算如下公式的值:
    y=1-1/2+1/3-1/4+1/5...+(-)1/m  ,该值作为函数返回值.

    难度系数：*
  */