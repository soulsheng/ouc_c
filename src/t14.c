#include<stdio.h>

int fun(long int x)
{
	long m,a;
	for(a=10; ;a*=10)
	{
		m=x*x%a;

		if(x==m) 
			return(1);

		if(x*x/a==0) 
			return(0);
	}

}

void main()
{int x;
 scanf("%d",&x);
 if(fun(x)==1)
	puts("Yse");
 else puts("No");
 
}

/*
	���дһ������int fun(long int x)�����Ĺ����ǣ��ж�����x�Ƿ���ͬ������
   ����ͬ��������������1�����򷵻�0����ν��ͬ��������ָ������������������
   ����ƽ�������ұߡ����磺��������5��5��ƽ������25��5��25���Ҳ������
   ����5��ͬ���������"Yes"��Ҫ��x��ֵ������10000��

  */