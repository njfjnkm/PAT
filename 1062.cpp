//1062 最简分数 (20 分)
//一个分数一般写成两个整数相除的形式：N/M，其中 M 不为0。
//最简分数是指分子和分母没有公约数的分数表示形式。
//
//现给定两个不相等的正分数 N1/M和 N2/M ，要求你按从小到大的顺序列出它们之间分母为 K 的最简分数。
//
//输入格式：
//输入在一行中按 N/M 的格式给出两个正分数，随后是一个正整数分母 K，其间以空格分隔。
//题目保证给出的所有整数都不超过 1000。
//
//输出格式：
//在一行中按 N/M 的格式列出两个给定分数之间分母为 K 的所有最简分数，
//按从小到大的顺序，其间以 1 个空格分隔。行首尾不得有多余空格。题目保证至少有 1 个输出。
//
//输入样例：
//7/18 13/20 12
//输出样例：
//5/12 7/12


//	C语言 
#include <stdio.h>
int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	int a,b,c,d,k;
	scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&k);
	double x=(double)a/b;
	double y=(double)c/d;
	if(x>y)
	{
		double l=x;
		x=y;
		y=l;
	}
	int cnt=0;
	for(int i=1;i<k;i++)
	{
		double t=(double)i/k;
		if(gcd(i,k)==1&&t>x&&t<y)
		{
			if(cnt!=0)	printf(" ");
			printf("%d/%d",i,k);
			cnt++;
		}
	}
	return 0;
}

//C++版 
//分析：使用辗转相除法gcd计算a和b的最大公约数，因为要列出n1/m1和n2/m2之间的最简分数，
//但是n1/m1不一定小于n2/m2，所以如果n1 * m2 > n2 * m1，说明n1/m1比n2/m2大，
//则调换n1和n2、m1和m2的位置～假设所求的分数分母为k、分子num，
//先令num=1，当n1 * k >= m1 * num时，num不断++，直到num符合n1/m1 < num/k为止～
//、然后在n1/m1和n2/m2之间找符合条件的num的值，
//用gcd(num, k)是否等于1判断num和k是否有最大公约数，
//如果等于1表示没有最大公约数，就输出num/k，然后num不断++直到退出循环～

#include <iostream>
using namespace std;
int gcd(int a, int b)		// 辗转相除法求分子和分母的最大公约数
{
    return b == 0 ? a : gcd(b, a % b);
}
int main() {
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if(n1 * m2 > n2 * m1) 
	{
        swap(n1, n2);
        swap(m1, m2);
    }
    bool flag=false;	//用来处理 按从小到大的顺序，其间以 1 个空格分隔。行首尾不得有多余空格。
    for(int i=1;i*m2<n2*k;i++)
    {
    	if(i*m1>n1*k&&gcd(i,k)==1)
    	{
    		printf("%s%d/%d",flag==true?" ":"",i,k);
    		flag=true;
		}
	}
//	或者是以下写法 
//    int num = 1;
//    bool flag = false;
//    while(n1 * k >= m1 * num) num++;		//此循环结束后num/k>n1/m1; 
//    while(n1 * k < m1 * num && m2 * num < n2 * k) 
//	{
//        if(gcd(num, k) == 1) 
//		{
//            printf("%s%d/%d", flag == true ? " " : "", num, k);
//            flag = true;
//        }
//        num++;
//    }
    return 0;
}
