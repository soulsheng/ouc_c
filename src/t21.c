 #include<stdio.h>

int fun(char *str,char ch)
{
	int i;
	int count=0;
	for(i=0; *(str+i)!='\0'; i++)
		if(ch == *(str+i) )
			count++;
  	
	return count;
}

  
  void main()
  {
   char a[100],b;
   puts("Please input a string:");
   gets(a);
   puts("Please input a character:");
   b=getchar();
	printf("n=%d\n",fun(a,b));

  }

/*

编写函数int fun(char *str,char ch),统计字符串str中
   指定字符ch的个数,统计结果作为函数返回值带回.
   
   */