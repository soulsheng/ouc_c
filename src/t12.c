#include<stdio.h>


void fun(char *s1,char *s2)
{
	int i,j,k,n=0;char t;

	for(i=0;*(s1+i)!=0;i++) 
		n+=1;

	for(i=0;i<n-1;i++)
	{  
		k=i;
		for(j=i+1;j<n;j++) 
			if(*(s1+j)<*(s1+k)) 
				k=j;

		if(k!=i) 
		{
			t=s1[k];
			s1[k]=s1[i];
			s1[i]=t;
		}
	}

	for(i=0,j=0;i<n;i++)
	{ 
		if(i%2==0) 
		{
			s2[j]=s1[i];
			j++;
		}
	}
	s2[j]=0;

}

void main()
{char a[80],b[80];
 gets(a);
 fun(a,b);
 puts(b);
 
}