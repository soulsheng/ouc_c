#include "stdio.h"

void fun(int x,char *p)
{
	int i,k=x;
	char s[80];
	for(i=0; ;i++)
	{
		if(x%2==0) 
			s[i]='0';
		else 
			s[i]='1';

		x/=2;

		if(x==0) 
			break;
	}

	if(k<0) 
		*(p+0)='-';

	for( ;i>=0;i--,p++)
		if(k<0) 
			*(p+1)=s[i];
		else 
			*p=s[i];

	if(i==-1)
	{
		if(k<0) 
			*(p+1)='\0';
		else 
			*p='\0';
	}

}

void main()
{int a;
 char c[18];
 scanf("%d",&a);
 fun(a,c);
 printf("%d'S BINARY IS: %s\n",a,c);
 
}