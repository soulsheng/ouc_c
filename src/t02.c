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
