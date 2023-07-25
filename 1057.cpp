//1057 数零壹 (20 分)
//给定一串长度不超过 10^5的字符串，
//本题要求你将其中所有英文字母的序号（字母 a-z 对应序号 1-26，不分大小写）相加，得到整数 N，
//然后再分析一下N的二进制表示中有多少0、多少1。例如给定字符串 PAT (Basic)，
//其字母序号之和为：16+1+20+2+1+19+9+3=71，而 71 的二进制是 1000111，即有 3 个 0、4 个 1。
//
//输入格式：
//输入在一行中给出长度不超过 10^5、以回车结束的字符串。
//
//输出格式：
//在一行中先后输出 0 的个数和 1 的个数，其间以空格分隔。
//注意：若字符串中不存在字母，则视为 N 不存在，也就没有 0 和 1。
//
//输入样例：
//PAT (Basic)
//输出样例：
//3 4
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
int main()
{
	string a;
	getline(cin,a);//用 cin 读入字符串的时候， 是以空格为分隔符的， 如果想要读入一整行的字符串， 就需要用 getline
	int n=0;
	for(int i=0;i<a.length() ;i++)
	{
		a[i]=tolower(a[i]);
		if(islower(a[i]))
		{
			n+=a[i]-'a'+1;
		}
	}
//	法二 
//	for(int i = 0; i < a.length(); i++) {
//        if(isalpha(a[i])) {
//            a[i] = toupper(a[i]);
//            n += (a[i] - 'A' + 1);
//        }
//    }
//	除2余数法求二进制 
	int cnt0 = 0, cnt1 = 0;
    while(n!=0) 
	{
        if(n%2==0) 
            cnt0++;
        else 
            cnt1++;
        n=n/2;
	}
	printf("%d %d",cnt0,cnt1);
	return 0;
}

