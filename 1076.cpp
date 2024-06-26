//1076 Wifi密码 (15 分)
//下面是微博上流传的一张照片：“各位亲爱的同学们，鉴于大家有时需要使用 wifi，又怕耽误亲们的学习，
//现将 wifi 密码设置为下列数学题答案：A-1；B-2；C-3；D-4；请同学们自己作答，每两日一换。
//谢谢合作！！~”—— 老师们为了促进学生学习也是拼了…… 
//本题就要求你写程序把一系列题目的答案按照卷子上给出的对应关系翻译成 wifi 的密码。
//这里简单假设每道选择题都有 4 个选项，有且只有 1 个正确答案。
//
//输入格式：
//输入第一行给出一个正整数 N（≤ 100），随后 N 行，每行按照 编号-答案 的格式给出一道题的 4 个选项，
//T 表示正确选项，F 表示错误选项。选项间用空格分隔。
//
//输出格式：
//在一行中输出 wifi 密码。
//
//输入样例：
//8
//A-T B-F C-F D-F
//C-T B-F A-F D-F
//A-F D-F C-F B-T
//B-T A-F C-F D-F
//B-F D-T A-F C-F
//A-T C-F B-F D-F
//D-T B-F C-F A-F
//C-T A-F B-F D-F
//输出样例：
//13224143


//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	
//	char a,b;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			getchar();		//Attention!	每次在输入字符之前加上getchar（）清空缓冲区 或者在 每次输出后加上getchar（），即35行和43行各加上getchar（） 
//			scanf("%c-%c",&a,&b);
//			
//			if(b=='T')
//			{
//				printf("%d",a-'A'+1);
//			}
//		}
//	}
//	return 0;
//}

//法二：分析：n没什么作用～以字符串方式接收输入，只要遇到任何一个字符串s满足大小为3且s[2]为’T’（主要是排除第一次输入的数字），
//就将s[0]字母对应的wifi密码输出～
#include <iostream>
using namespace std;
int main() {
    string s;
    while (cin >> s) 
        if(s.size() == 3 && s[2] == 'T') cout << s[0]-'A'+1;
    return 0;
}
//该代码无限输入，如果想结束，先按CTRL+z再按Enter（回车键），程序结束 
