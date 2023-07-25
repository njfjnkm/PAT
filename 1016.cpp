//1016 部分A+B (15 分)
//正整数 A 的“D 
//
//输入格式：
//输入在一行中依次给出 A、D 
//
//输入样例 1：
//3862767 6 13530293 3
//输出样例 1：
//399
//输入样例 2：
//3862767 1 13530293 8
//输出样例 2：
//0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int f(int a,int d);
int main()
{
	int a,d1,b,d2;
	scanf("%d %d %d %d",&a,&d1,&b,&d2); 
	printf("%d\n",f(a,d1)+f(b,d2));
	return 0;
}
int f(int a,int d)
{
	int sum=0,count=0;
	while(a!=0)
	{
		int digit=a%10;
		if(digit==d)
			count++;
		a/=10;
	}
	for(int i=0;i<count;i++)
	{
		sum=sum*10+d;
	}
	return sum;
 
} 

