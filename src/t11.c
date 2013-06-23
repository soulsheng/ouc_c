#include<stdio.h>


void fun(char *s)
{

}

void main()
{char str[80];
 gets(str);
 fun(str);
 puts(str);

}

/*

  1．给定程序中，函数void fun(char *s)的功能是：把形参s所指字符串中下标为偶数的字符
   右移到下一个偶数位置，最右边被移出字符串的字符绕回放到第一个偶数位置，下标为奇
   数的字符不动（注：字符串的长度大于等于2）。
   例：若输入：abcd123，输出：3badc21

  */