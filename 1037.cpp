// 1037 在霍格沃茨找零钱 (20 分)
//如果你是哈利·波特迷，你会知道魔法世界有它自己的货币系统 ——
//就如海格告诉哈利的：“十七个银西可(Sickle)兑一个加隆(Galleon)，二十九个纳特(Knut)兑一个西可，很容易。”
//现在，给定哈利应付的价钱 P 和他实付的钱 A，你的任务是写一个程序来计算他应该被找的零钱。
//
//输入格式：
//输入在 1 行中分别给出 P 和 A，格式为 Galleon.Sickle.Knut，其间用 1 个空格分隔。
//这里 Galleon 是 [0, 10^7] 区间内的整数，Sickle 是 [0, 17) 区间内的整数，Knut 是 [0, 29) 区间内的整数。
//
//输出格式：
//在一行中用与输入同样的格式输出哈利应该被找的零钱。如果他没带够钱，那么输出的应该是负数。
//
//输入样例 1：
// 10.16.27 14.1.28
//输出样例 1：
// 3.2.1
//
//输入样例 2：
// 14.1.28 10.16.27
//输出样例 2：
//-3.2.1
//分析
// abc代表应付的钱，mnt代表实付的钱，首先判断应付的钱是否大于实付的钱，如果大于，说明钱不够，
//为了简化计算，将a和m、b和n、c和t调换，使得计算(mnt-abc)时是大的减去小的～调换之后别忘记输出负号～
// xyz分别代表找的钱，从低位向高位计算，如果t<c，说明要向前借位，借一位后自己加上29，否则z=t-c即可
//～别忘记如果有借位，n要减去1～然后计算中间位，如果n < b，说明要借位，则y = n – b + 17，
//否则不用借位，y=n–b即可～最后计算最高位x，如果n<b引起了借位，则x=m–a-1，否则x=m-a即可～
//最后输出x.y.z～

#include <stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a, b, c, m, n, t;
	scanf("%d.%d.%d %d.%d.%d", &a, &b, &c, &m, &n, &t); // C语言中没有自带的swap函数 ，要自己编
	if (a > m || (a == m && b > n) || (a == m && b == n && c && c > t))
	{
		swap(&a, &m);
		swap(&b, &n);
		swap(&c, &t);
		printf("-");
	}
	int x, y, z;
	//	z=t>c ? t-c : t+29-c;
	//	n=t>c ? n : n-1;	//考虑t的上一位n进位
	//	y=n>b ? n-b : n+17-b;
	//	m=n>b ? m : m-1;	//考虑n的上一位m进位
	//	x=m-a;
	if (t > c)
		z = t - c;
	else
	{
		z = t + 29 - c;
		n = n - 1;
	}
	if (n > b)
		y = n - b;
	else
	{
		y = n + 17 - b;
		m = m - 1;
	}
	x = m - a;
	printf("%d.%d.%d", x, y, z);
	return 0;
}
// C++代码
//#include <iostream>
// using namespace std;
// int main()
//{
//	int a,b,c,m,n,t;
//	scanf("%d.%d.%d %d.%d.%d",&a,&b,&c,&m,&n,&t);
//	if(a>m||(a==m&&b>n)||(a==m&&b==n&&c&&c>t))		//C++中有自带的swap函数，包含在using namespace std中
//	{
//		swap(a,m);swap(b,n);swap(c,t);
//		printf("-");
//	}
//	int x,y,z;
//	z=t>c ? t-c : t+29-c;
//	n=t>c ? n : n-1;	//考虑t的上一位n进位
//	y=n>b ? n-b : n+17-b;
//	m=n>b ? m : m-1;	//考虑n的上一位m进位
//	x=m-a;
//	printf("%d.%d.%d",x,y,z);
//	return 0;
// }
