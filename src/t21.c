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

��д����int fun(char *str,char ch),ͳ���ַ���str��
   ָ���ַ�ch�ĸ���,ͳ�ƽ����Ϊ��������ֵ����.
   
   */