//1042 字符统计 (20 分)
//请编写程序，找出一段给定文字中出现最频繁的那个英文字母。
//
//输入格式：
//输入在一行中给出一个长度不超过 1000 的字符串。
//字符串由 ASCII 码表中任意可见字符及空格组成，至少包含 1 个英文字母，以回车结束（回车不算在内）。
//
//输出格式：
//在一行中输出出现频率最高的那个英文字母及其出现次数，其间以空格分隔。
//如果有并列，则输出按字母序最小的那个字母。
//统计时不区分大小写，输出小写字母。
//
//输入样例：
//This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
//输出样例：
//e 7

//C++代码 
//#include <iostream>
//#include <cctype>		//使用了isplwer和tolower函数 
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin,s);
//	int count[256]={0};
//	int len=s.length() ;
//	for(int i=0;i<len;i++)
//	{
//		s[i]=tolower(s[i]);		//统计时不区分大小写，tolower( )还是空格 ；tolower（&或者，）还是对应的符号 
//		if(islower(s[i]))			//找出一段给定文字中出现最频繁的那个英文字母
//		{
//			count[s[i]]++;
//		}
//	}
//	int k=0;
//	for(int i=0;i<256;i++)
//	{
//		if(count[i]>count[k])
//			k=i;
//	}
//	printf("%c %d",k,count[k]);
//	return 0;
//}

//C代码
#include <stdio.h>
#include <ctype.h> 	//使用了isplwer和tolower函数 
#include <string.h>
int main()
{
	char s[1005];
	gets(s);
	int len=strlen(s);
	int count[26]={0};
	for(int i=0;i<len;i++)
	{
		s[i]=tolower(s[i]);		//统计时不区分大小写，tolower( )还是空格 ；tolower（&或者，）还是对应的符号 
		if(islower(s[i]))			//找出一段给定文字中出现最频繁的那个英文字母
		{
			count[s[i]-'a']++;
		}
	}
	int k=0;
	for(int i=0;i<26;i++)
	{
		if(count[i]>count[k])
			k=i;
	}
	printf("%c %d",k+'a',count[k]);
	return 0;
}

