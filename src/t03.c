#include<math.h>
#include<stdio.h>

int fun(int m)
{
	int s=0,a,i;
    for(i=0,a=0;s<=m;i++)
    {
		a+=i;
        s+=a;
    }
	return(i-2);

}

void main()
{
	int x;
	scanf("%d",&x);
	printf("n=%d\n",fun(x));

} 
