//1067 试密码 (20 分)
//当你试图登录某个系统却忘了密码时，系统一般只会允许你尝试有限多次，
//当超出允许次数时，账号就会被锁死。本题就请你实现这个小功能。
//
//输入格式：
//输入在第一行给出一个密码（长度不超过 20 的、不包含空格、Tab、回车的非空字符串）
//和一个正整数 N（≤ 10），分别是正确的密码和系统允许尝试的次数。
//随后每行给出一个以回车结束的非空字符串，是用户尝试输入的密码。
//输入保证至少有一次尝试。当读到一行只有单个 # 字符时，输入结束，并且这一行不是用户的输入。
//
//输出格式：
//对用户的每个输入，如果是正确的密码且尝试次数不超过 N，则在一行中输出 Welcome in，并结束程序；
//如果是错误的，则在一行中按格式输出 Wrong password: 用户输入的错误密码；
//当错误尝试达到 N 次时，再输出一行 Account locked，并结束程序。
//
//输入样例 1：
//Correct%pw 3
//correct%pw
//Correct@PW
//whatisthepassword!
//Correct%pw
//#
//输出样例 1：
//Wrong password: correct%pw
//Wrong password: Correct@PW
//Wrong password: whatisthepassword!
//Account locked

//输入样例 2：
//cool@gplt 3
//coolman@gplt
//coollady@gplt
//cool@gplt
//try again
//#
//
//输出样例 2：
//Wrong password: coolman@gplt
//Wrong password: coollady@gplt
//Welcome in

//分析：注意3个点：1、如果已经是"#"了就不要继续下面的判断了，不然可能输出Wrong password: "#"
//
//2、如果密码错误并且达到了尝试的次数，是先输出Wrong password那句紧接着输出Account locked那句
//
//3、Wrong password: 后面有个空格～
//4、正确的密码不含空格，可以用cin>>输入，但是用户尝试输入的密码可能有空格，必须要getline 
#include <iostream>
using namespace std;
int main()
{
	string s,t;
	int n;
	cin>>s>>n;
	getchar();
	int cnt=0;
	do{
		getline(cin,t);
		if(t=="#")	return 0;
		if(t==s)
		{
			cout<<"Welcome in\n";
			return 0;	
		}
		else
			cout<<"Wrong password: "<<t<<endl;
		cnt++;
	}while(cnt<n);
	printf("Account locked\n");

	return 0;
}

