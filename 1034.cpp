//1034 有理数四则运算 (20 分)
//本题要求编写程序，计算 2 个有理数的和、差、积、商。
//
//输入格式：
//输入在一行中按照 a1/b1 a2/b2 的格式给出两个分数形式的有理数，其中分子和分母全是整型范围内的整数，
//负号只可能出现在分子前，分母不为 0。
//
//输出格式：
//分别在 4 行中按照 有理数1 运算符 有理数2 = 结果 的格式顺序输出 2 个有理数的和、差、积、商。
//注意输出的每个有理数必须是该有理数的最简形式 k a/b，其中 k 是整数部分，a/b 是最简分数部分；
//若为负数，则须加括号；若除法分母为 0，则输出 Inf。题目保证正确的输出中没有超过整型范围的整数。
//
//输入样例 1：
//2/3 -4/2

//输出样例 1：
//2/3 + (-2) = (-1 1/3)
//2/3 - (-2) = 2 2/3
//2/3 * (-2) = (-1 1/3)
//2/3 / (-2) = (-1/3)

//输入样例 2：
//5/3 0/6

//输出样例 2：
//1 2/3 + 0 = 1 2/3
//1 2/3 - 0 = 1 2/3
//1 2/3 * 0 = 0
//1 2/3 / 0 = Inf

//数据类型不能选用int类型，因为题目说都是整形范围内的数，有可能是长整形，应该选用longlong 
#include <iostream>
#include <cmath>		//使用了abs函数 
using namespace std;
long long gcd(long long t1,long long t2);		//gcd函数用来求分子（t1）和分母（t2）的最大公约数 
void format (long long m,long long n);			//format函数用与将分数约分最简化并输出 
int main()
{
	long long a,b,c,d;		//分子和分母全是整型范围内的整数
	scanf("%lld/%lld %lld/%lld",&a,&b,&c,&d);		//带有混合数字和其他符号（如、/,.等）的输入，只能用功能更强大，效率更高的scanf而不是cin>> 
	format(a,b);printf("+");format(c,d);printf("=");format(a*d+b*c,b*d);printf("\n");
	format(a,b);printf("-");format(c,d);printf("=");format(a*d-b*c,b*d);printf("\n");
	format(a,b);printf("*");format(c,d);printf("=");format(a*c,b*d);printf("\n");
	format(a,b);printf("/");format(c,d);printf("=");format(a*d,c*d);
	
	return 0;
 } 
long long gcd(long long t1,long long t2)
{
	return t2==0 ? t1 :gcd(t2,t1%t2);
}
void format (long long m,long long n)
{
	if(m*n==0)				//分母不为 0。此时讨论的是分子或分母为0的特殊情况
	{
		printf("%s",n==0 ? "Inf" :"0");
		return;		//函数到此目的完成，直接结束即可；后面的代码就不用考虑这种情况（相当于省略了else,后面的if同理） 
	}
	bool flag=((m>0&&n<0)||(m<0&&n>0));  //注意不要用m*n>0来判断，可能超出整形的范围
	printf("%s",flag ? "(-" :"");	//输出符号,判断正负 
	m=abs(m) ;n=abs(n);				//abs函数取绝对值 ,需要头文件  #include <cmath> 
	long long x=m/n;				//结果是整形的x，即约分的整数部分
	if(x!=0) printf("%lld",x);		//考虑假分式，将整数部分输出
	if(m%n==0)
	{
		if(flag) printf(")");		//假分式6/2应该是输出3，而不是3/1 
		return;						//后面的代码就不用考虑这种情况
	} 
	if(x!=0) printf(" ");			//假分数中非6/2类型的，整数部分输出后, 输出一个空格， 
	m=m-x*n;						//并转化为真分数，和后面的假分数情况合并考虑并输出；
	long long t=gcd(m,n);
	m=m/t;n=n/t;				//真分式的分子分母约分 
	printf("%lld/%lld%s",m,n,flag ? ")" : ""); 
}










