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
		sum += sign*1.0f/i ;  // *1.0f ����С������Ҫ
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

  ��д����float fun(int m),������:�����������β�m,�������¹�ʽ��ֵ:
    y=1-1/2+1/3-1/4+1/5...+(-)1/m  ,��ֵ��Ϊ��������ֵ.

    �Ѷ�ϵ����*
  */