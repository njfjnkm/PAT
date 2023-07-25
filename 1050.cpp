//1050 螺旋矩阵 (25 分)
//本题要求将给定的 N 个正整数按非递增的顺序，填入“螺旋矩阵”。
//所谓“螺旋矩阵”，是指从左上角第 1 个格子开始，按顺时针螺旋方向填充。
//要求矩阵的规模为 m 行 n 列，满足条件：m×n 等于 N；m≥n；且 m-n 取所有可能值中的最小值。
//
//输入格式：
//输入在第 1 行中给出一个正整数 N，第 2 行给出 N 个待填充的正整数。所有数字不超过 10^4，相邻数字以空格分隔。
//
//输出格式：
//输出螺旋矩阵。每行 n 个数字，共 m 行。相邻数字以 1 个空格分隔，行末不得有多余空格。
//
//输入样例：
//12
//37 76 20 98 76 42 53 95 60 81 58 93
//输出样例：
//98 95 93
//42 37 81
//53 20 76
//58 60 76

//详细解析
//    https://blog.csdn.net/liuchuo/article/details/52123209?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522164380345016780271969198%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fblog.%2522%257D&request_id=164380345016780271969198&biz_id=0&spm=1018.2226.3001.4450 
#include <iostream>
#include <algorithm>		//sort函数
#include <cmath> 			//sqrt函数 
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++)
		scanf("%d",&a[i]);
	sort(a,a+N,cmp);	//a[]从大到小排列， 因为cmp函数排序规则设置了从大到小,sort 默认是从?到?排列的 
	int n=(int)sqrt(N);				//求平方根sqrt函数的原型为：double sqrt(double a) ,整数a传入sqrt函数会自动转化为double 
	int m= N==n*n ?  n :n+1;
	int b[m][n];
	int level = m / 2 + m % 2;
	int t=0; 
	for (int i = 0; i < level; i++) 
	{
        for (int j = i; j <= n - 1 - i && t <= N - 1; j++)		//for循环1 
                b[i][j] = a[t++];
        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++)	//for循环2 
                b[j][n - 1 - i] = a[t++];
        for (int j = n - i - 1; j >= i && t <= N - 1; j--)		//for循环3
                b[m - 1 - i][j] = a[t++];
        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--)	//for循环4 
                b[j][i] = a[t++];
    }
    for (int i = 0;i<m;i++) 
	{
        for (int j =0;j< n; j++) 
		{
            printf("%d", b[i][j]);
            if (j != n - 1)	 printf(" ");
        }
        printf("\n");
    }

	return 0;
}

