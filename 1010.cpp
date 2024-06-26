//1009 说反话 (20 分)
//给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。
//
//输入格式：
//测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。
//字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，
//单词之间用 1 个空格分开，输入保证句子末尾没有多余的空格。
//
//输出格式：
//每个测试用例的输出占一行，输出倒序后的句子。
//
//输入样例：
//Hello World Here I Come


//输出样例：
//Come I Here World Hello


//分析：利用二维数组存储输入的句子，可能此题难点在于怎么存储输入的句子。
//一、整体思路
//
//读入输入的字符串后，依次找出字符串中的每一个单词并存储在对应数组中，最后再反向输出
//
//二、关键问题
//
//1.如何找出字符串中的每一个单词
//
//2.如何实现各单词的分别存储
//
//三、关键问题对应的解决方法
//
//1.遍历输入的字符串，当遍历到空格符时该空格符的下一个字符即为下一单词的内容
//
//2.使用二维数组存储各单词，二维数组的行数标志着各单词的顺序与对应地址，当遍历到空格符时就需要令行数+1
//
//四、数据结构
//
//使用字符数组存储输入的字符串
//
//使用二维数组存储各单词
//
//五、一些小细节
//
//1.scanf与gets在使用上的一些区别
//
//scanf：读到空字符就停止读取，因此不能处理带有空格的字符串， 
//
//gets：读到换行符才停止读取，因此可以处理带有空格的字符串,读取结束(读取到'\n')或读取失败时,函数返回空指针（NULL）
#include <stdio.h>
#include <string.h>
int main()
{
	char a[80][80];	//测试输入包含一个测试用例，在一行内给出总长度不超过 80 的字符串。 
	char c;
	int n=0;
//	法一 
//	do{
//		scanf("%s",a[i++]);		//scanf：读到空字符就停止读取，因此不能处理带有空格的字符串 
//		c=getchar();		//用c来存单词间的空格
//	}while(c!='\n');		//此循环用于存储句子
	
//	法二
	do{
		scanf("%s",a[n++]);		//应该用do-while而不能用while，因为char c没有赋值，第一次判断有误 
	} while((c=getchar())!='\n'); 
	for(int i=n-1;i>0;i--)
	{
		printf("%s ",a[i]);	//单词之间有空格,注意是a【n】而不是a【i】 
	}
		printf("%s",a[0]);	//结尾单词后面不留空格
	
	return 0;
}


