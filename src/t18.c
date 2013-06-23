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

  编写函数void fun(char *s1,char *s2),实现字符串s1与s2的交叉连接，连接后得到的
   新字符串放在s1中。如输入abc<回车>12345<回车>，输出a1b2c345,
   若输入abcde<回车>123<回车>，则输出a1b2c3de。 

    难度系数：**
  */