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

  ���������У�����void fun(char *s)�Ĺ����ǣ����β�s��ָ�ַ����е�ÿ�������ַ�
    ֮�����һ��*�š�
    �����β�s��ָ���ַ���Ϊ��def35adh3kjsdf7��ִ�н��Ϊ��def3*5*adh3*kjsdf7*��

  */