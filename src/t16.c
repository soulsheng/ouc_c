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

  编写函数void fun(char *str)，将参数字符串中各单词首字母变大写，其余字母变小写。
   输入输出在main中实现。如输入"you HAVE 10 books,don't you? "  
   输出"You Have 10 Books,Don't You?"。单词以空格、逗号、句号分隔。

    难度系数：**
  */