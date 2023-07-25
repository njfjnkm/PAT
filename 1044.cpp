//1044 火星数字 (20 分)
//火星人是以 13 进制计数的：
//
//地球人的 0 被火星人称为 tret。
//地球人数字 1 到 12 的火星文分别为：jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec。
//火星人将进位以后的 12 个高位数字分别称为：tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, mer, jou。
//例如地球人的数字 29 翻译成火星文就是 hel mar；而火星文 elo nov 对应地球数字 115。
//为了方便交流，请你编写程序实现地球和火星数字之间的互译。
//
//输入格式：
//输入第一行给出一个正整数 N（<100），随后 N 行，每行给出一个 [0, 169) 区间内的数字 —— 或者是地球文，或者是火星文。
//
//输出格式：
//对应输入的每一行，在一行中输出翻译后的另一种语言的数字。
//
//输入样例：
//4
//29
//5
//elo nov
//tam
//
//输出样例：
//hel mar
//may
//115
//13
//分析：
//1 .因为给出的可能是数字（地球文）也有可能是字母（火星文），所以应用字符串s保存每一次的输入，
//因为如果是火星文则会出现空格，所以用getline接收一行的输入～计算string s的长度len，
//判断s[0]是否是数字，如果是数字，表示是地球文，则需要转为火星文，执行func1()；
//如果不是数字，则说明是火星文，需要转为地球文，执行func2()；
//
//2 .func1(int t)中，传入的值是string转int后的结果stoi(s)，因为数字最大不超过168，所以最多只会输出两位火星文，
//如果t / 13不等于0，说明有高位，所以输出b[t/13]；
//如果输出了高位（t/13不等于0）并且t % 13不等于0，说明有高位且有低位，所以此时输出空格；
//如果t % 13不等于0，说明有低位，此时输出a[t % 13]；
//注意，还有个数字0没有考虑，因为数字0取余13等于0，但是要特别输出tret，
//所以在func1的最后一句判断中加一句t == 0，并将a[0]位赋值成tret即可解决0的问题～
//
//3 .func2()中，t1和t2一开始都赋值0，s1和s2用来分离火星文单词，
//因为火星文字符串只可能一个单词或者两个单词，而且一个单词不会超过4，
//所以先将一个单词的赋值给s1，即s1 = s.substr(0, 3)；	（因为火星文都是3个字母） 
//如果len > 4，就将剩下的一个单词赋值给s2，即s2 = s.substr(4, 3)；
//然后下标j从1到12遍历a和b两个数组，如果a数组中有和s1或者s2相等的，说明低位等于j，则将j赋值给t2；
//如果b数组中有和s1相等的（b数组不会和s2相等，因为如果有两个单词，s2只可能是低位），说明高位有值，
//将j赋值给t1，最后输出t1 * 13 + t2即可～

//注；string 中还有个很常用的函数叫做 substr ， 作用是截取某个字符串中的子串 
//string s2 = s. substr(4);  表示从下标4开始一直到结束
//string s3 = s. substr(5, 3);  表示从下标5开始， 3个字符
//#include <iostream>
//#include <string>
//using namespace std;
//string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
//string b[12] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
//string s;
//int len;		//定义全局变量，从而能在函数中使用变量 
//void func1(int t) 
//{
//    if (t / 13) cout << b[t/13-1];
//    if ((t/13) && (t%13)) cout << " ";
//    if (t%13||t==0) cout << a[t%13];
//}
//void func2() 
//{
//    int t1 = 0, t2 = 0;
//    string s1 = s.substr(0, 3), s2;
//    if (len > 4) s2 = s.substr(4, 3);
//    for (int j = 1; j <= 12; j++) {
//        if (s1 == a[j] || s2 == a[j]) t2 = j;	//如果是两个单词，第一位是高位；如果是一个单词，第一位是低位 
//        if (s1 == b[j]) t1 = j;				
//    }
//    cout << t1 * 13 + t2;
//}
//int main() 
//{
//    int n;
//    cin >> n;
//    getchar();		//如果不加getchar(),缓冲区会把'enter'这个字符写进gets(str2),
////					这时程序就会像上面那样,直接结束.而加了getchar();它会吃了缓冲区里的'enter'字符,
////					这时候缓冲区才是真的什么都没有,gets(str2)等待缓冲区写入内容 
//    for (int i = 0; i < n; i++) {
//        getline(cin, s);
//        len = s.length();
//        if (s[0] >= '0' && s[0] <= '9')
//            func1(stoi(s));
//        else
//            func2();
//        cout << endl;
//    }
//    return 0;
//}
// 
#include <iostream>
#include <string>
using namespace std;
string s[100];			//错误string s[n];n再次未知 
string a[13]={"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[12] = {"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int i;
void func1(int t)
{
	int k=t/13;
	int d=t%13;
	if(k)		//两位 
	{
		cout<<b[k-1];						//printf("%s",b[k-1]);错误string类型的输出只能用cin 
		if(d)	cout<<" "<<a[d]	;								//printf(" %s",a[d]);错误 
	}
	else		//一位 
		cout<<a[d];
}
void func2()
{
	string s1=s[i].substr(0,3);
	string s2;
	int t1=0,t2=0,len=s[i].length();
	if(len>4)	s2=s[i].substr(4,3);
	for(int j=0;j<13;j++)
	{
		if(a[j]==s1||a[j]==s2)	t2=j;
		if(b[j]==s1)			t1=j;
	}
	printf("%d\n",13*t1+t2);
 } 
int main()
{
	int n;
	scanf("%d",&n);
//	当从键盘输入时,键盘输入的字符会保存在缓冲区,当键盘按下enter建时,缓冲区被清空,缓冲区的内容被写入目标内,
//	比如我这段代码的目标就是str,即我从键盘输入的list被写入str数组里,这个时候缓冲区还有什么呢?
//	准确的说,这时缓冲区里还有一个字符'enter',如果不加getchar(),缓冲区会把'enter'这个字符写进gets(str2),\
//	这时程序就会像上面那样,直接结束.而加了getchar();它会吃了缓冲区里的'enter'字符,
//	这时候缓冲区才是真的什么都没有,gets(str2)等待缓冲区写入内容,这时程序才会像下面那样执行
	for(int j=0;j<n;j++)
	{
		getchar();
		getline(cin,s[j]);
	}
	for(i=0;i<n;i++)
	{
		cout<<s[i]<<endl;
		if(s[i][0]>='0'&&s[i][0]<='9')
			func1(stoi(s[i]));
		else
			func2();		
		printf("\n");
	}
	
	return 0;
}
