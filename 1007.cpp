//1006 换个格式输出整数 (15 分)
//让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10），
//换个格式来输出任一个不超过 3 位的正整数。例如 234 应该被输出为 BBSSS1234，
//因为它有 2 个“百”、3 个“十”、以及个位的 4。
//
//输入格式：
//每个测试输入包含 1 个测试用例，给出正整数 n（<1000）。
//
//输出格式：
//每个测试用例的输出占一行，用规定的格式输出 n。
//
//输入样例 1：
//234
//输出样例 1：
//BBSSS1234
//输入样例 2：
//23
//输出样例 2：
//SS123

//法一 
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n) ;
//	if(n<10)
//	{
//		for(int i=1;i<=n;i++)
//		{
//			printf("%d",i);
//		}
//	}
//	else if(n>=10&&n<100)
//	{
//		int t=n/10;
//		int a=n%10;
//		for(int i=0;i<t;i++)
//		{
//			printf("S");
//		}
//		for(int i=1;i<=a;i++)
//		{
//			printf("%d",i);
//		}
//	}
//	else if(n>=100&&n<1000)
//	{
//		int b=n/100;
//		int t=(n%100)/10;
//		int a=(n%100)%10;
//		for(int i=0;i<b;i++)
//		{
//			printf("B");
//		}
//		for(int i=0;i<t;i++)
//		{
//			printf("S");
//		}
//		for(int i=1;i<=a;i++)
//		{
//			printf("%d",i);
//		}
//	}
	
//	法二 
#include <stdio.h>
void f(int b,int t,int a)
{
	while(b--)		  			//for(int i=0;i<b;i++)
		printf("B");			//{
								//	printf("B");		 因为循环体内用不着循环变量i 
								//}
	while(t--)				    //for(int i=0;i<t;i++)
		printf("S");			//{
								//	printf("S");
								//}
	for(int i=1;i<=a;i++)
	{
		printf("%d",i);
	}
}
int main()
{
	int n;
	scanf("%d",&n) ;
	int b=n/100;
	int t=(n%100)/10;
	int a=(n%100)%10;
	f(b,t,a);
		return 0;
}

//法三 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	gets(a);
//	int l = strlen(a);
//	if (l == 3)
//	{
//		int b = a[0] - '0';
//		int s = a[1] - '0';
//		int g = a[2] - '0';
//		for (int i = 0; i < b; i++)
//		{
//			printf("B");
//		}
//		for (int i = 0; i < s; i++)
//		{
//			printf("S");
//		}
//		for (int i = 1; i <= g; i++)
//		{
//			printf("%d", i);
//		}
//	}
//	else if (l == 2)
//	{
//		int s = a[0] - '0';
//		int g = a[1] - '0';
//		for (int i = 0; i < s; i++)
//		{
//			printf("S");
//		}
//		for (int i = 1; i <= g; i++)
//		{
//			printf("%d", i);
//		}
//	}
//	else
//	{
//		int g = a[0] - '0';
//		for (int i = 1; i <= g; i++)
//		{
//			printf("%d", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
	

