#include<stdio.h>
#include<string.h>

void fun(char *s)
{
	int len,i;
	char last;

	len = strlen(s);
	
	if(len%2==0)
		last=s[len-2];
	else
		last=s[len-1];

	for(i=len-1;i>1;i--)
	{
		if(i%2==0)
			s[i] = s[i-2];
	}

	s[0]=last;
}

void main()
{char str[80];
 gets(str);
 fun(str);
 puts(str);

}

/*

  1�����������У�����void fun(char *s)�Ĺ����ǣ����β�s��ָ�ַ������±�Ϊż�����ַ�
   ���Ƶ���һ��ż��λ�ã����ұ߱��Ƴ��ַ������ַ��ƻطŵ���һ��ż��λ�ã��±�Ϊ��
   �����ַ�������ע���ַ����ĳ��ȴ��ڵ���2����
   ���������룺abcd123�������3badc21

  */