#include<stdio.h>
#include<string.h>
#define N 30

 
int fun(char (*ss)[N],int m,char *s)
{
	int i;
	s=strcpy(s,*(ss+0));
	for (i=0;i<m;i++)
		if(strcmp(*(ss+i),s)>0)
			strcpy(s,*(ss+i));
	return(strlen(s));
}

 void main()
 {char a[8][N],b[N];
  int i,len;
  for(i=0;i<8;i++)
	  gets(a[i]);
  len=fun(a,8,b);
  printf("len=%d,str=%s\n",len,b);
 
 }

 /*

  编写函数int fun(char (*ss)[N],int m,char *s)，功能是：形参ss指向一个m行N列的
    二维字符数组，每行存放一个字符串。求出最大的字符串，复制到s所指的字符数组中，
    然后返回此最大字符串的长度。

    难度系数：*
  */