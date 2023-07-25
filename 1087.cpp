//1087 有多少不同的值 (20 分)
//当自然数 n 依次取 1、2、3、……、N 时，算式 ?n/2?+?n/3?+?n/5? 有多少个不同的值？（注：?x? 为取整函数，表示不超过 x 的最大自然数，即 x 的整数部分。）
//
//输入格式：
//输入给出一个正整数 N（2≤N≤10 
//4
// ）。
//
//输出格式：
//在一行中输出题面中算式取到的不同值的个数。
//
//输入样例：
//2017
//输出样例：
//1480

//优解 set是集合， 个set里面的各元素是各不相同的 ， 而且set会按照元素进行从小到大排序
#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    set<int> s;
    for (int i = 1; i <= n; i++)
        s.insert(i / 2 + i / 3 + i / 5);
    printf("%d", s.size());
    return 0;
}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	scanf("%d",&N);
//	int sum[10000]={0};
//	for(int i=1;i<=N;i++)
//	{
//		int t=int(i/2.0)+int(i/3.0)+int(i/5.0);
//		sum[t]++;
//	}
//	int d=0;
//	for(int i=0;i<10000;i++)
//		if(sum[i]!=0)	d++;
//	printf("%d\n",d) ;
//	return 0;
//}

