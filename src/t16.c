#include<stdio.h>

void fun(char *str)
{
	int i;

	if(*(str+0)>='a'&&*(str+0)<='z')
		*(str+0)=*(str+0)-32;

	for(i=1;*(str+i)!='\0';i++)
	{
		if(*(str+i-1)==' '||*(str+i-1)==','||*(str+i-1)=='.')
		{
			if(*(str+i)>='a'&&*(str+i)<='z')
				*(str+i)=*(str+i)-32;
		}
		else if(*(str+i)>='A'&&*(str+i)<='Z')
			*(str+i)=*(str+i)+32;
	} 

}

void main()
{char a[100];
 gets(a);
 fun(a);
 puts(a);
 
 }

/*

  ��д����void fun(char *str)���������ַ����и���������ĸ���д��������ĸ��Сд��
   ���������main��ʵ�֡�������"you HAVE 10 books,don't you? "  
   ���"You Have 10 Books,Don't You?"�������Կո񡢶��š���ŷָ���

    �Ѷ�ϵ����**
  */