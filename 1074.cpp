//1074 宇宙无敌加法器 (20 分)
//地球人习惯使用十进制数，并且默认一个数字的每一位都是十进制的。
//而在 PAT 星人开挂的世界里，每个数字的每一位都是不同进制的，这种神奇的数字称为“PAT数”。
//每个 PAT 星人都必须熟记各位数字的进制表，
//例如“……0527”就表示最低位是 7 进制数、第 2 位是 2 进制数、第 3 位是 5 进制数、第 4 位是 10 进制数，等等。
//每一位的进制 d 或者是 0（表示十进制）、或者是 [2，9] 区间内的整数。
//理论上这个进制表应该包含无穷多位数字，但从实际应用出发，PAT 星人通常只需要记住前 20 位就够用了，以后各位默认为 10 进制。
//
//在这样的数字系统中，即使是简单的加法运算也变得不简单。
//例如对应进制表“0527”，该如何计算“6203 + 415”呢？我们得首先计算最低位：3 + 5 = 8；
//因为最低位是 7 进制的，所以我们得到 1 和 1 个进位。第 2 位是：0 + 1 + 1（进位）= 2；
//因为此位是 2 进制的，所以我们得到 0 和 1 个进位。第 3 位是：2 + 4 + 1（进位）= 7；
//因为此位是 5 进制的，所以我们得到 2 和 1 个进位。第 4 位是：6 + 1（进位）= 7；
//因为此位是 10 进制的，所以我们就得到 7。最后我们得到：6203 + 415 = 7201。
//
//输入格式：
//输入首先在第一行给出一个 N 位的进制表（0 < N ≤ 20），以回车结束。 随后两行，每行给出一个不超过 N 位的非负的 PAT 数。
//
//输出格式：
//在一行中输出两个 PAT 数之和。
//
//输入样例：
//30527
//06203
//415
//输出样例：
//7201
#include <iostream>
using namespace std;
int main()
{
	string s,x,y,res;
	cin>>s>>x>>y;
	x.insert(0,s.length()-x.length(),'0');
	y.insert(0,s.length()-y.length(),'0');
	int k=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		int t=((s[i]-'0'==0)?10:s[i]-'0'); 
		res=to_string((x[i]+y[i]-'0'*2+k)%t)+res;
		k=(x[i]+y[i]-'0'*2+k)/t;
	} 
	if(k!=0)	res=to_string(k)+res;
    
//	输入数字可能不规范（开头有0）
	bool flag=0;
	for(int i=0;i<res.length();i++)
	{
		if(res[i]!='0'||flag==1)	//除去开头可能多出来的0 
		{
			cout<<res[i];
            flag=1;                        
		}	
	}     
    if (flag == 0) cout << 0;		//如果一次都没有输出，最后要输出一个0~
	return 0;
}

