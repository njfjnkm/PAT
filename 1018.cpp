//1018 锤子剪刀布 (20 分)
//大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：
//
//FigCJB.jpg
//
//现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。
//
//输入格式：
//输入第 1 行给出正整数 N（≤10^5），即双方交锋的次数。
//随后 N 行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。
//C 代表“锤子”、J 代表“剪刀"、B代表布，第 1 个字母代表甲方，第 2 个代表乙方，中间有 1 个空格。
//
//输出格式：
//输出第 1、2 行分别给出甲、乙的胜、平、负次数，数字间以 1 个空格分隔。
//第 3 行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有 1 个空格。
//如果解不唯一，则输出按字母序最小的解。
//
//输入样例：
//10
//C J
//J B
//C B
//B B
//B C
//C C
//C B
//J B
//B C
//J J
//输出样例：
//5 3 2
//2 3 5
//B B
//分析：count1、count2分别表示甲乙赢的次数，字符a和b分别表示每一次甲乙给出的手势，
//s[]和t[]分别表示甲乙获胜手势相应次数所对应的下标（012分别表示CJB），
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count1=0,count2=0;	//count1和count2分别代表甲乙赢的次数 
	int s[3]={0}; int t[3]={0};
	char a,b;
	for(int i=0;i<n;i++)
	{
		getchar();	//scanf在使用%c进行输入时会连同换行符\n一起读入，所以在下一次读入字符时要用getchar（）吃回车键 
		scanf("%c %c",&a,&b);
//		getchar();	
		if(a=='C'&&b=='J'){
			count1++;
			s[0]++; 
		}else if(a=='J'&&b=='B'){
			count1++;
			s[1]++;
		}else if(a=='B'&&b=='C'){
			count1++;
			s[2]++;
		}else if(a=='J'&&b=='C'){
			count2++;
			t[0]++;
		}else if(a=='B'&&b=='J'){
			count2++;
			t[1]++;
		}else if(a=='C'&&b=='B'){
			count2++;
			t[2]++;
		}
	}
	printf("%d %d %d\n",count1,n-count1-count2,count2);
	printf("%d %d %d\n",count2,n-count1-count2,count1);
	char p[3]={'C','J','B'};		//字符是单引号，字符串是双引号 ，只需定义字符即可 
	int k1=0,k2=0;		//找出s[]和t[]最大元素的下标 
	for(int i=0;i<3;i++)
	{
		if(s[i]>s[k1])
			k1=i;
		if(t[i]>t[k2])
			k2=i; 
		printf("%d %d\n",s[i],t[i]) ;
	}
	printf("%d %d ",k1,k2);
	return 0;
}

