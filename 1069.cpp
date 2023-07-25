//1069 微博转发抽奖 (20 分)
//小明 PAT 考了满分，高兴之余决定发起微博转发抽奖活动，从转发的网友中按顺序每隔 N 个人就发出一个红包。
//请你编写程序帮助他确定中奖名单。
//
//输入格式：
//输入第一行给出三个正整数 M（≤ 1000）、N 和 S，
//分别是转发的总量、小明决定的中奖间隔、以及第一位中奖者的序号（编号从 1 开始）。
//随后 M 行，顺序给出转发微博的网友的昵称（不超过 20 个字符、不包含空格回车的非空字符串）。
//
//注意：可能有人转发多次，但不能中奖多次。
//所以如果处于当前中奖位置的网友已经中过奖，则跳过他顺次取下一位。
//
//输出格式：
//按照输入的顺序输出中奖名单，每个昵称占一行。
//如果没有人中奖，则输出 Keep going...。
//
//输入样例 1：
//9 3 2
//Imgonnawin!
//PickMe
//PickMe
//LookHere
//Imgonnawin!
//TryAgainAgain
//TryAgainAgain
//Imgonnawin!
//TryAgainAgain
//输出样例 1：
//PickMe
//Imgonnawin!
//TryAgainAgain
//
//输入样例 2：
//2 3 5
//Imgonnawin!
//PickMe
//输出样例 2：
//Keep going...
//分析：用mapp存储、lag标记为true表示有过人中奖。最后flag如果依然是false说明要输出Keep going...
#include <iostream>
#include <map>
using namespace std;
int main()
{
	int m,n,s;
	scanf("%d %d %d",&m,&n,&s);
	bool flag=false;
	map<string,int>mapp;
	for(int i=1;i<=m;i++)
	{
		string t;
		cin>>t;
		if(i==s&&mapp[t]==1)	s++;		//第12行要写成if (i == s && mp[str] == 1) s += 1;这样表示中奖者重复
									//if(mapp[t]==1)代码的思路是中奖者每重复出现一次 中奖序号就+1 ，
//但事实应该是中奖者在应该中奖的序号出现一次（题目中是如果处于当前中奖位置的网友已经中过奖，则跳过他顺次取下一位。） 中奖序号才+1
		if(i==s&&mapp[t]==0)
		{
			cout<<t<<endl;
			flag=true;
			mapp[t]=1;
			s+=n; 
		}
	}
 	if(flag==false)
 		printf("Keep going...");
	return 0;
}

