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