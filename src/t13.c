#include<stdio.h>


void fun(char s[])
{
	int i,j;
	for(i=0;s[i]!='\0';i++)
		if(s[i]%2!=0)
		{
			for(j=i;s[j]!='\0';j++)
				s[j]=s[j+1];

			i--;
		}

}

void main()
{char a[80];
 gets(a);
 fun(a);
 puts(a);

}

/*

  ����void fun(char s[])�Ĺ����ǣ���s��ָ�ַ�����ASCIIֵΪ�������ַ�ɾ����
   ���磬��s��ָ�ַ����е�����Ϊ����ABCDEFG12345���������ַ�A��ASCII��ֵΪ
   �����������ַ�1��ASCII��ֵҲΪ����������Ӧ��ɾ���������������ơ�
   ���s�������ǣ���BDF24����

  */