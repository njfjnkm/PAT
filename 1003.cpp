/* 1002 写出这个数 (20 分)
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10 ^100. 

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu	
*/
#include<stdio.h>
int main(void) {
    char s[][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" }; //用字符型二维数组存储数字对应的拼音
    char input[105]; //数字过大，使用字符串存储。10的100次方应该为100位，每一位用一个char储存，结尾有一个‘\0’ 
    int n[3];//用数组记录最后和的结果 ，输入的数小于10的100次方，即一百位，一百位加起来最后结果小于1000，所以存结果的只留三位即可；
    scanf("%s", input);
    	//按位读取数字，根据ASC II 码，字符的ASC II码-48即可得到对应的整数，这个循环用来求和
    int i=0,sum=0;
    while (input[i]) 		//while(input[i]!='\0')
	{
        sum+=input[i]-'0';
        i++;
    }
    int k=sum;
    int index=1;
    while(k>9)
    {
    	k/=10;
    	index*=10;
	}
//	for(;index>0;index/=10) 
//	{
//		int digit=sum/index;
//		printf("%s",s[digit]);
//		sum%=index;
//		if(index)
//		{
//			printf(" ");
//		}
//	}
	while(index>0) 
	{
		int digit=sum/index;
		printf("%s",s[digit]);
		sum%=index;
		index/=10;
		if(index)
		{
			printf(" ");
		}
	}
    return 0;
}
