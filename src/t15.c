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

  ��дȡ���ַ�������void fun(char s1[],char s2[],int m,int n),�������ǽ�
   �ַ�����s2�дӵ�m���ַ���ʼ�Ĺ�n���ַ�����������s1�У���s2��ʣ���ַ���
   ��n������ȡ��β������������ʱ��������"abcd123"��4��3ʱӦ���"d12"��
   ����������"abcd123"��4��6ʱӦ���"d123"��ע�⣬�����ǽ�1��Ϊ��ʼ������

  */