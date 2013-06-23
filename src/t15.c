#include<stdio.h>
#include<string.h>

void fun(char s1[],char s2[],int m,int n)
{
	int i,a,b;

	a=strlen(s2);

	b=(a<m+n-1?a:m+n-1);

	for(i=m-1;i<b;i++)
	{
		*s1=*(s2+i);
		s1++;
	}

	*s1='\0';

}


void main()
{static char a[100],b[100];
 int s,len;
 void fun(char s1[],char s2[],int m,int n);
 puts("ENTER A STRING:");
 gets(a);
 puts("ENTER STARTING POSITION AND LENGTH:");
 scanf("%d%d",&s,&len);
 fun(b,a,s,len);
 printf("THE SRBSTING IS:%s\n",b);

 }


/*

  编写取子字符串函数void fun(char s1[],char s2[],int m,int n),其作用是将
   字符数组s2中从第m个字符开始的共n个字符拷贝到数组s1中；若s2中剩余字符不
   足n个，则取到尾部。程序运行时，当输入"abcd123"、4，3时应输出"d12"；
   当我们输入"abcd123"、4，6时应输出"d123"。注意，这里是将1作为起始计数。

    难度系数：**
  */