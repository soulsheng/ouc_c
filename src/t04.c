#include<math.h>
#include<stdio.h>

#define N 10

 void fun(int *x,int n)
 {
	int i,j=0,k,t;
    for (i=0;i<n;i++)
    {
       k=x[i];
       while (k!=0)
       {
         t=k%10;
         if(t==6)
             break;
         else
             k=k/10;
        }

        if(k==0)
            x[j++]=x[i]; 
	}

    for(;j<n;j++)
        x[j]=-1;

    return;

 }


 void main()
 {int a[N],i;
  for(i=0;i<N;i++)
	scanf("%d",a+i);
  fun(a,N);
  for(i=0;i<N;i++)
 	printf("%d ",a[i]);
  printf("\n");

 }

 /*
     ��д����void fun(int *x,int n)�����Ĺ����ǣ�ɾ����n�����ݵ�����x�����а���
     ����6�����ݣ�������ʣ��Ԫ�ظ�ֵΪ-1��nΪ���鳤�ȣ��涨x�����ݶ�Ϊ������
     ���������ʱ�����룺122  1461  6234  16  11  663  911  2671  381  6 
     ɾ���������        122  11  911  381  -1   -1   -1  -1  -1  -1 

  */