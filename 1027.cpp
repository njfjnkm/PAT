//1027 打印沙漏 (20 分)
//本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印
//
//*****
// ***
//  *
// ***
//*****
//所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；
//符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。
//
//给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
//
//输入格式:
//输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。
//
//输出格式:
//首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。
//
//输入样例:
//19 *
//输出样例:
//*****
// ***
//  *
// ***
//*****
//2

//（在此先将沙漏分成3部分：上层，中层（*号只有一个的层），下层），上层与下层对称，将上层的个数记为n层，
//则每层的*号个数为：2*n+1；(等差数列求和)则沙漏的所用*号的总数为：2
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int n;
//	char s;
//	scanf("%d %c",&n,&s);
//	int k;			//上（下）沙漏行数 
//	int sum=0;
//	for(k=1;;k++)
//	{
//		sum=2*k*k-1;
//		if(sum>=n)
//		{
//			k--;
//			break;		
//		}		
//	}
//	sum=2*k*k-1;
//	for(int i=k;i>0;i--)
//	{
//		for(int l=k-i;l>0;l--)
//		{
//			printf(" ");
//		}
//		for(int j=0;j<2*i-1;j++)
//		{
//			printf("%c",s);
//		}
//		printf("\n"); 
//	}
//	for(int i=2;i<=k;i++)
//	{
//		for(int l=0;l<k-i;l++)
//		{
//			printf(" ");
//		}
//		for(int j=0;j<2*i-1;j++)
//		{
//			printf("%c",s);
//		}
//		printf("\n"); 
//	}
//	printf("%d\n",n-sum) ;
//	return 0;
//}
//（在此先将沙漏分成3部分：上层，中层（*号只有一个的层），下层），上层与下层对称，将上层的个数记为n层，
//则每层的*号个数为：2*n+1；(等差数列求和)则沙漏的所用*号的总数为：2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;  char s;
	scanf("%d %c",&n,&s);
// 	int k=1,sum=0;			//上（下）沙漏行数 
//     do{
// 		sum=2*k*k-1;
// 		if(sum>n)       //注意不是k++
// 		{
// 			k=k-1;
// 			break;		
// 		}		
// 	}while(k++);
    int k =(int)sqrt((n+1)/2.0);
//    if(2*t*t==n+1)  k=t;	else k=t+1;
	int sum=2*k*k-1;
	for(int i=k;i>0;i--)    //k,i都代表行数
	{
		for(int j=0;j<k-i;j++)
			printf(" ");
		for(int j=0;j<2*i-1;j++)
			printf("%c",s);
		printf("\n"); 
	}
	for(int i=2;i<=k;i++)   //区别于第一个for循环，从第二行开始打印
	{
		for(int j=0;j<k-i;j++)
			printf(" ");
		for(int j=0;j<2*i-1;j++)
			printf("%c",s);
		printf("\n"); 
	}
	printf("%d\n",n-sum) ;
	return 0;
}

