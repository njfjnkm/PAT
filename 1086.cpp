//1086 就不告诉你 (15 分)
//做作业的时候，邻座的小盆友问你：“五乘以七等于多少？”你应该不失礼貌地围笑着告诉他：“五十三。”
//本题就要求你，对任何一对给定的正整数，倒着输出它们的乘积。
//
//输入格式：
//输入在第一行给出两个不超过 1000 的正整数 A 和 B，其间以空格分隔。
//
//输出格式：
//在一行中倒着输出 A 和 B 的乘积。
//
//输入样例：
//5 7
//输出样例：
//53
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int sum=a*b;
	int k=0;
	while(sum!=0)
	{
		k=k*10+sum%10;
		sum/=10;
	} 
	printf("%d\n",k);
	return 0;
}
//法二 
//分析：a 和 b的乘积转换成字符串，再将字符串反转，最后将反转过的字符串转换成数字～
//#include <iostream>
//#include <string>			//to_string需要 
//#include <algorithm>		//reserve函数需要的头文件 
//using namespace std;
//int main() 
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    string s = to_string(a * b);
//    reverse(s.begin(), s.end());
//    printf("%d", stoi(s));
//    return 0;
//}

