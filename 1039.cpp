// 1039 到底买不买 (20 分)
//小红想买些珠子做一串自己喜欢的珠串。卖珠子的摊主有很多串五颜六色的珠串，但是不肯把任何一串拆散了卖。
//于是小红要你帮忙判断一下，某串珠子里是否包含了全部自己想要的珠子？如果是，那么告诉她有多少多余的珠子；
//如果不是，那么告诉她缺了多少珠子。
//
//为方便起见，我们用[0-9]、[a-z]、[A-Z]范围内的字符来表示颜色。
//例如在图1中，第3串是小红想做的珠串；那么第1串可以买，因为包含了全部她想要的珠子，还多了8颗不需要的珠子；
//第2串不能买，因为没有黑色珠子，并且少了一颗红色的珠子。
//
// figbuy.jpg
//
//图 1
//
//输入格式：
//每个输入包含 1 个测试用例。每个测试用例分别在 2 行中先后给出摊主的珠串和小红想做的珠串，两串都不超过 1000 个珠子。
//
//输出格式：
//如果可以买，则在一行中输出 Yes 以及有多少多余的珠子；
//如果不可以买，则在一行中输出 No 以及缺了多少珠子。其间以 1 个空格分隔。
//
//输入样例 1：
// ppRYYGrrYBR2258
// YrR8RrY
//输出样例 1：
// Yes 8
//输入样例 2：
// ppRYYGrrYB225
//
// YrR8RrY
//输出样例 2：
// No 2

//分析：字符串a和b分别存储摊主的珠串和小红想做的珠串，遍历字符串a，将每一个字符出现的次数保存在book数组中，
//表示摊主的每个珠子的个数，遍历字符串b，如果book[b[i]]>0，表示小红要的珠子摊主有，则book[b[i]]-1，
//将这个珠子给小红～否则说明小红要的珠子摊主没有，则将统计缺了多少珠子的result++，
//如果result不等于0，说明缺珠子，则不可以买，输出No以及缺了的珠子个数result，
//否则说明不缺珠子，可以买，输出Yes以及摊主珠子多余的个数a.length() – b.length()～

// C代码
//#include <stdio.h>
//#include <string.h>
// int main()
//{
//	char a[1001];
//	char b[1001];
//	scanf("%s",a);
//	scanf("%s",b);
//	int book [256]={0};		//所有字符的ASCII码范围是0--256；
//	int result=0;
//	for(int i=0;i<strlen(a);i++)
//	{
//		book[a[i]]++;		//a[i]是字符，对应着[0,256]的ASCII码
//	}
//	for(int i=0;i<strlen(b);i++)
//	{
//		if(book[b[i]]>0)
//			book[b[i]]--;	//果book[b[i]]>0，表示小红要的珠子摊主有，则book[b[i]]-1(将这个珠子给小红)
//		else result++;		//否则说明小红要的珠子摊主没有，则将统计缺了多少珠子的result++
//	}
//	if(result==0)
//		printf("Yes %d",strlen(a)-strlen(b));
//	else
//		printf("No %d",result);
//
//	return 0;
// }

// C++代码
#include <iostream>
using namespace std;
//或者定义全局变量 int book[256];
int main()
{
	string a, b;
	cin >> a >> b;
	//	int book [256];	//此句有问题，在函数内部定义的变量 C++不会默认自动初始化为0，只有全局变量才会默认初始化为0；
	int book[256] = {0};
	for (int i = 0; i < a.length(); i++)
	{
		book[a[i]]++; // a[i]是字符，对应着[0,255]的ASCII码
	}
	int result = 0;
	for (int i = 0; i < b.length(); i++)
	{
		if (book[b[i]] > 0)
			book[b[i]]--; //果book[b[i]]>0，表示小红要的珠子摊主有，则book[b[i]]-1(将这个珠子给小红)
		else
			result++; //否则说明小红要的珠子摊主没有，则将统计缺了多少珠子的result++
	}
	if (result == 0)
		printf("Yes %d", a.length() - b.length());
	else
		printf("No %d", result);

	return 0;
}
