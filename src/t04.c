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
     编写函数void fun(int *x,int n)，它的功能是：删除有n个数据的数组x中所有包含
     数字6的数据，后续的剩余元素赋值为-1。n为数组长度，规定x中数据都为正数。
     如程序运行时若输入：122  1461  6234  16  11  663  911  2671  381  6 
     删除后输出：        122  11  911  381  -1   -1   -1  -1  -1  -1 

  */