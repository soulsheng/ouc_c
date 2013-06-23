#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void fun(char *s)
{
	int i,j;
	char a[100];
	for(i=0,j=0;*(s+i)!='\0';i++,j++)
	{
		a[j]=*(s+i);

		if(*(s+i)>='0'&&*(s+i)<='9')
		{
			*(a+j+1)='*';
			j++;
		}
	}
	a[j]='\0';
	strcpy(s,a);

}

void main()
{char str[80];
 gets(str);
 fun(str);
 puts(str);

}

/*

  给定程序中，函数void fun(char *s)的功能是：在形参s所指字符串中的每个数字字符
    之后插入一个*号。
    例，形参s所指的字符串为：def35adh3kjsdf7。执行结果为：def3*5*adh3*kjsdf7*。

  */