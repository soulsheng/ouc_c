#include<math.h>
#include<stdio.h>

void fun(char *s,char *t,char *p)
{
	int i,j,k=0,log;
	*p='\0';
	for(i=0;*(t+i)!='\0';i++)
	{
		log=1;
		for(j=0;*(s+j)!='\0';j++)
		if(*(t+i)==*(s+j)) log=0;
	 
		for(j=0;*(p+j)!='\0';j++)
		if(*(t+i)==*(p+j)) log=0;
	 
		if(log)
		{
			*(p+k)=*(t+i);
			k++;
			*(p+k)='\0';
		}
	}

}

void main()
{char s1[50],s2[50],s3[50];
 gets(s1);gets(s2);
 fun(s1,s2,s3);
 puts(s3);
} 

/*

  编写函数void fun(char *s,char *t,char *p)将未在字符串s中出现、
    而在字符串t中出现的字符, 形成一个新的字符串放在p中,p中字符按
    原字符串中字符顺序排列,但去掉重复字符。
    例如: 当s为"12345", t为"8624677"时, p中的字符为: "867";
    当s为”good luck”，t为”thank you very much”时，
    输出：”thanyverm”

    难度系数：***
  */