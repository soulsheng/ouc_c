#include<stdlib.h>
#include<stdio.h>

int fun(int n,int *p)
{
	int arr1[10000]={0};
	int i,j;
	int t1,t2;
	for(i=0;i<n;i++)
	{
		arr1[i]=i+1;
	}
	
	*p=arr1[2];
	p++;

	for(j=0;j<n-3;j++)
	{

		t1=arr1[0];
		t2=arr1[1];
		for(i=0;i<n-3-j;i++)
		{
			arr1[i]=arr1[i+3];
		}
		arr1[n-3-j]=t1;
		arr1[n-2-j]=t2;
		*p=arr1[2];
		p++;
	}
	*p=arr1[0];
	p++;
	*p=arr1[1];
	return *p;

}

void main()
{int m,*a,i,num;
 scanf("%d",&m);
 a=(int *)malloc(sizeof(int)*m);
 num=fun(m,a);
 printf("n=%d\n",num);
 for(i=0;i<m;i++)
	printf("%d ",a[i]);
 puts("");
 free(a);

}


/*
	m����Χ��һȦ,1,2,3ѭ������������3�����˳��������˳����������
   �浽����p�У��������һ���˵���š������ֻ��1�ˣ�����������
   ���ǵڼ��ţ��������ţ���1��ʼ����
   ��m=6�������n=1<CR>  3 6 4 2 5 1��
   ��m=10�������n=4<CR> 3 6 9 2 7 8 5 10 4��
   ��m=100�������n=91������
   ����int fun(int n ,int *p)ʵ���������ܣ�����n������������1��
   ����ʼ��ţ������˳������˳��д��pָ��������С�


  */