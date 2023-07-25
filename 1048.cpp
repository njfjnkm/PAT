//1048 数字加密 (20 分)
//本题要求实现一种数字加密方法。首先固定一个加密用正整数 A，对任一正整数 B，
//将其每 1 位数字与 A 的对应位置上的数字进行以下运算：
//对奇数位，对应位的数字相加后对 13 取余——这里用 J 代表 10、Q 代表 11、K 代表 12；
//对偶数位，用 B 的数字减去 A 的数字，若结果为负数，则再加 10。这里令个位为第 1 位。
//
//输入格式：
//输入在一行中依次给出 A 和 B，均为不超过 100 位的正整数，其间以空格分隔。
//
//输出格式：
//在一行中输出加密后的结果。
//
//输入样例：
//1234567 368782971
//输出样例：
//3695Q8118

#include <stdio.h>
#include <string.h>
int main()
{
	char num[14]="0123456789JQK";
	char a[101],b[101];
	int s[101];
	scanf("%s %s",a,b);
	int count=0;
	for(int i=strlen(a)-1,j=strlen(b)-1;i>=0||j>=0;i--,j--)
	{
		int a_i= i>=0?a[i]-'0':0;
		int b_j= j>=0?b[j]-'0':0;		//	int b_j= j>=0?b[j]-'0':0;错误 
		if(count%2==0)
			s[count++]=(a_i+b_j)%13;
		else
			s[count++]=(b_j+10-a_i)%10;
	}
//	int count = 0, i=strlen(a)-1, j = strlen(b)-1;
//	while(i>=0 || j>=0)
//	{
//        int A_i = i>=0?a[i]-'0':0;
//        int B_j = j>=0?b[j]-'0':0;
//        if( count%2 == 0 )
//           s[count++] = (A_i + B_j)%13;
//        else
//            s[count++] = (B_j+10-A_i)%10;
//        i--, j--;
//    }
	for(int i=count-1;i>=0;i--)
	{
		printf("%c",num[s[i]]);
	}
	return 0;
}





