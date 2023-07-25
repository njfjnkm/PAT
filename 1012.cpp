//1012 数字分类 (20 分)
//给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
//A1
//A2
//A3
//A4
//A5
//
//输入格式：
//每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，
//随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。
//
//输出格式：
//对给定的 N 个正整数，按题目要求计算 A 

//  并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
//
//若分类之后某一类不存在数字，则在相应位置输出 N。
//
//输入样例 1：
//13 1 2 3 4 5 6 7 8 9 10 20 16 18
//输出样例 1：
//30 11 2 9.7 9
//输入样例 2：
//8 1 2 4 5 6 7 9 16
//输出样例 2：
//N 11 2 N 9
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int sum1=0,sum2=0,sum3=0,count1=0,count2=0,count3=0,max=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%5==0&&a[i]%2==0)
			sum1+=a[i];
		if(a[i]%5==1)
		{
			if(count3%2==0)
				sum2+=a[i];
			else
				sum2-=a[i];
			count3++;
		}
		if(a[i]%5==2)
			count1++;
		if(a[i]%5==3)
		{
			count2++;
			sum3+=a[i];
		}
		if(a[i]%5==4&&max<a[i])
		{
			max=a[i];
		}
	}
	double average=1.0*sum3/count2;
	printf("%d %d %d %.1f %d",sum1,sum2,count1,average,max);
	


	return 0;
}

