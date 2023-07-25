//1084 外观数列 (20 分)
//外观数列是指具有以下特点的整数序列：
//
//d, d1, d111, d113, d11231, d112213111, ...
//它从不等于 1 的数字 d 开始，序列的第 n+1 项是对第 n 项的描述。
//比如第 2 项表示第 1 项有 1 个 d，所以就是 d1；
//第 2 项是 1 个 d（对应 d1）和 1 个 1（对应 11），所以第 3 项就是 d111。
//又比如第 4 项是 d113，其描述就是 1 个 d，2 个 1，1 个 3，所以下一项就是 d11231。
//当然这个定义对 d = 1 也成立。本题要求你推算任意给定数字 d 的外观数列的第 N 项。
//
//输入格式：
//输入第一行给出 [0,9] 范围内的一个整数 d、以及一个正整数 N（≤ 40），用空格分隔。
//
//输出格式：
//在一行中给出数字 d 的外观数列的第 N 项。
//
//输入样例：
//1 8
//输出样例：
//1123123111
#include <iostream>
using namespace std;
int main()
{
	int N;
	string s;
	cin>>s>>N;
	int k;
	for(int i=1;i<N;i++)		//N指第N项，经历了 N-1次变化 
	{
		string t;				//上一次循环中的t会被消除，重新将长度变为零 ，相当于char t[10000] ={0};
		for(int j=0;j<s.length();j=k)
		{
			int cnt=0;
			//string t;位置放错 
			for(k=j;k<s.length();k++)
			{
				if(s[j]==s[k])	
					cnt++;
				else
				{
//					t+=s[j]+to_string(cnt);	//不能放在这里否则第一个就不行 
					break;	
				}
			} 
			t+=s[j]+to_string(cnt);	//不能直接加到s上，因为正在遍历上一次的s，不能改变 
		}
		s=t;
		cout<<t<<endl; 
	}
	cout<<s;
	return 0;
}
//化简 
//#include <iostream>
//using namespace std;
//int main() {
//    string s;
//    int n, k;
//    cin >> s >> n;
//    for (int i = 1; i < n; i++) 
//	 {
//        string t;
//        for (int j = 0; j < s.length(); j = k) 
//	  	  {
//            for (k = j; k < s.length() && s[j] == s[k]; k++);	//注意这里有一个分号，表示只循环， 
//            t += s[j] + to_string(k - j);
//        }
//        s = t;
//    }
//    cout << s;
//    return 0;
//}

