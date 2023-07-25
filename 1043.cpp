//1043 输出PATest (20 分)
//给定一个长度不超过 10^4的、仅由英文字母构成的字符串。请将字符重新调整顺序，按 PATestPATest.... 这样的顺序输出，
//并忽略其它字符。当然，六种字符的个数不一定是一样多的，若某种字符已经输出完，
//则余下的字符仍按 PATest 的顺序打印，直到所有字符都被输出。
//
//输入格式：
//输入在一行中给出一个长度不超过 10^4的、仅由英文字母构成的非空字符串。
//
//输出格式：
//在一行中按题目要求输出排序后的字符串。题目保证输出非空。
//
//输入样例：
//redlesPayBestPATTopTeePHPereatitAPPT
//输出样例：
//PATestPATestPTetPTePePee
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//		char a[10005];
//		scanf("%s",a) ;
//		
//		int len=strlen(a);
//		int count[6]={0};
//		for(int i=0;i<len;i++)
//		{
//			if(a[i]=='P') count[0]++;
//			if(a[i]=='A') count[1]++;
//			if(a[i]=='T') count[2]++;
//			if(a[i]=='e') count[3]++;
//			if(a[i]=='s') count[4]++;
//			if(a[i]=='t') count[5]++;
//		}
//		while(1)
//		{
//			if(count[0]>0)	
//			{
//				printf("P");		//简化为if(count[0]-->0) 		printf("P");
//				count[0]--;						
//			}				
//			if(count[1]>0)		
//			{
//				printf("A");
//				count[1]--;
//			}
//			if(count[2]>0)	
//			{
//				printf("T");
//				count[2]--;
//			}
//			if(count[3]>0)	
//			{
//				printf("e");
//				count[3]--;
//			}
//			if(count[4]>0)	
//			{
//				printf("s");
//				count[4]--;
//			}
//			if(count[5]>0)	
//			{
//				printf("t");
//				count[5]--;
//			}
//			if(count[0]==0&&count[1]==0&&count[2]==0&&count[3]==0&&count[4]==0&&count[5]==0)
//			break;
//		}
//
//	return 0;
//}


#include <iostream>
using namespace std;
int main() 
{
  int count[128] = {0};		//对应128个ASCII码对于确定的字符 
  int c;
  while ((c = getchar()) !='\n') 	
  		count[c]++;
  while (count['P'] > 0 || count['A'] > 0 || count['T'] > 0 || count['e'] > 0 || count['s'] > 0 || count['t'] > 0) 
  {
	    if (count['P']-- > 0) cout << 'P';
	    if (count['A']-- > 0) cout << 'A';
	    if (count['T']-- > 0) cout << 'T';
	    if (count['e']-- > 0) cout << 'e';
	    if (count['s']-- > 0) cout << 's';
	    if (count['t']-- > 0) cout << 't';
  }
  return 0;
}

