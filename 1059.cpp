//1059 C语言竞赛 (20 分)
//C 语言竞赛是浙江大学计算机学院主持的一个欢乐的竞赛。既然竞赛主旨是为了好玩，颁奖规则也就制定得很滑稽：
//
//0、冠军将赢得一份“神秘大奖”（比如很巨大的一本学生研究论文集……）。
//1、排名为素数的学生将赢得最好的奖品 —— 小黄人玩偶！
//2、其他人将得到巧克力。
//给定比赛的最终排名以及一系列参赛者的 ID，你要给出这些参赛者应该获得的奖品。
//
//输入格式：
//输入第一行给出一个正整数 N（≤10 
//4
// ），是参赛者人数。随后 N 行给出最终排名，每行按排名顺序给出一位参赛者的 ID（4 位数字组成）。接下来给出一个正整数 K 以及 K 个需要查询的 ID。
//
//输出格式：
//对每个要查询的 ID，在一行中输出 ID: 奖品，其中奖品或者是 Mystery Award（神秘大奖）、或者是 Minion（小黄人）、或者是 Chocolate（巧克力）。如果所查 ID 根本不在排名里，打印 Are you kidding?（耍我呢？）。如果该 ID 已经查过了（即奖品已经领过了），打印 ID: Checked（不能多吃多占）。
//
//输入样例：
//6
//1111
//6666
//8888
//1234
//5555
//0001
//6
//8888
//0001
//1111
//2222
//8888
//2222
//输出样例：
//8888: Minion
//0001: Chocolate
//1111: Mystery Award
//2222: Are you kidding?
//8888: Checked
//2222: Are you kidding?
#include <stdio.h>
int isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n) ;
	int id[10001]={0};
	int flag[10001]={0};
	for(int i=1;i<=n;i++)
	{
		int t;
		scanf("%d",&t);		//0001输入t是1； 
		id[t]=i;
	}
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		int t;
		scanf("%d",&t);
		if(id[t]==0)
		{
			printf("%04d: Are you kidding?\n",t);
			flag[t]=1;
			continue;
		}
		if(flag[t]==1)
		{
			printf("%04d: Checked\n",t);
			flag[t]=1;
			continue;
		}
		if(id[t]==1)
		{
			printf("%04d: Mystery Award\n",t);
			flag[t]=1;
			continue; 
		}
		if(isprime(id[t])==1&&id[t]>=2)		
		{
			printf("%04d: Minion\n",t);
			flag[t]=1;
			continue;
		}
			printf("%04d: Chocolate\n",t);
			flag[t]=1;
	}
	
	return 0;
}

