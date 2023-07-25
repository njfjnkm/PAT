//1004 成绩排名 (20 分)
//读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
//
//输入格式：
//每个测试输入包含 1 个测试用例，格式为
//
//第 1 行：正整数 n
//第 2 行：第 1 个学生的姓名 学号 成绩
//第 3 行：第 2 个学生的姓名 学号 成绩
//  ... ... ...
//第 n+1 行：第 n 个学生的姓名 学号 成绩
//其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
//
//输出格式：
//对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。
//
//输入样例：
//3
//Joe Math990112 89
//Mike CS991301 100
//Mary EE990830 95
//输出样例：
//Mike CS991301
//Joe Math990112
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char name[n][11];
	char number[n][11];
	int a[n];
//	for(int i=0;i<n;i++)
//	{
//													//		scanf("%s",name[i]);			
//		scanf("%s %s %d",name[i],number[i],&a[i]);	//		scanf("%s",number[i]);
//													//		scanf("%d",&a[i]);
//	}
//	int min=0,max=0;
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]<a[min])
//			min=i;
//		else if(a[i]>a[max])
//			max=i;
//	}

//	化简，将两个for循环合并为一个for循环 
	int min=0,max=0;
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %d",name[i],number[i],&a[i]);
		if(a[i]<a[min])
			min=i;
		else if(a[i]>a[max])
			max=i;
	}
	printf("%s %s\n",name[max],number[max]);
	printf("%s %s\n",name[min],number[min]);

	return 0;
}

