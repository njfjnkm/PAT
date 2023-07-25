//1038 统计同成绩学生 (20 分)
//本题要求读入 N 名学生的成绩，将获得某一给定分数的学生人数输出。
//
//输入格式：
//输入在第 1 行给出不超过 10^5的正整数 N，即学生总人数。
//随后一行给出 N 名学生的百分制整数成绩，中间以空格分隔。
//最后一行给出要查询的分数个数 K（不超过 N 的正整数），随后是 K 个分数，中间以空格分隔。
//
//输出格式：
//在一行中按查询顺序给出得分等于指定分数的学生人数，中间以空格分隔，但行末不得有多余空格。
//
//输入样例：
//10
//60 75 90 55 75 99 82 90 75 50
//3 75 90 88
//输出样例：
//3 2 0
//分析：用b数组保存每个分数对应的学生人数，在输入的时候，对于每一个成绩temp，
//b[temp]++表示将数组b中对应分数的人数+1～对于m个查询，每一次都输出需要查询的temp所对应的人数b[temp]，
//注意i不等于0的时候要在输出人数之前输出一个空格～

//C++代码 
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, temp;
    scanf("%d", &n);
    vector<int> b(101);			//b[i]中的i代表成绩（成绩有100种分数），b[i]的值代表成绩为i的人数 
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        b[temp]++;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; i++) 
	{
        scanf("%d", &temp);
        if (i != 0) printf(" ");
        printf("%d", b[temp]);
    }
    return 0;
}
//C语言
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	int k,b;
//	scanf("%d",&k);
//	int count[k]={0};		//C语言定义数组要初始化，而C++会默认初始化为0 
//	for(int i=0;i<k;i++)
//	{
//		scanf("%d",&b);
//		for(int j=0;j<n;j++)
//		{
//			if(b==a[j])
//				count[i]++;
//		}
//	}
//	printf("%d",count[0]);
//	for(int i=1;i<k;i++)
//	{
//		printf(" %d",count[i]);
//	}
//	
//	return 0;
// } 
