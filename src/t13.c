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

  函数void fun(char s[])的功能是：将s所指字符串中ASCII值为奇数的字符删除。
   例如，若s所指字符串中的内容为：“ABCDEFG12345”，其中字符A的ASCII码值为
   奇数、…、字符1的ASCII码值也为奇数、…都应当删除，其它依此类推。
   最后s中内容是：“BDF24”。

  */