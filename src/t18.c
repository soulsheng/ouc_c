#include<stdio.h>
#include<string.h>

void fun(char *s1,char *s2)
{
	int i,j,k;
	for(j=0,i=1;s2[j]!='\0';)
	{
		for(k=strlen(s1);k>=i;k--)
			s1[k+1]=s1[k];
		
		s1[i]=s2[j];
				
		j++;i++;
		
		if(s1[i]) 
			i++;
	}

}

void main()
{char a[100],b[100];
 void fun(char *,char *);
 gets(a);
 gets(b);
 fun(a,b);
 puts(a);

 }

/*

  ��д����void fun(char *s1,char *s2),ʵ���ַ���s1��s2�Ľ������ӣ����Ӻ�õ���
   ���ַ�������s1�С�������abc<�س�>12345<�س�>�����a1b2c345,
   ������abcde<�س�>123<�س�>�������a1b2c3de�� 

    �Ѷ�ϵ����**
  */