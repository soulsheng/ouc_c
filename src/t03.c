#include<math.h>
#include<stdio.h>

int fun(int m)
{
	int s=0,a,i;
    for(i=0,a=0;s<=m;i++)
    {
		a+=i;
        s+=a;
    }
	return(i-2);

}

void main()
{
	int x;
	scanf("%d",&x);
	printf("n=%d\n",fun(x));

} 

/*
	��д����int fun(int  m)�����㲢����������ʽ��
    1+��1+2��+��1+2+3��+��1+2+3+4��+����+��1+2+3+����+n��<=m
    ����n�����磬��m=10000ʱ�����������n=38��

    �Ѷ�ϵ����*
  */