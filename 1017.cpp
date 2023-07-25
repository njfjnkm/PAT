//1017 A除以B (20 分)
//本题要求计算 A/B，其中 A 是不超过 1000 位的正整数，B 是 1 位正整数。你需要输出商数 Q 和余数 R，使得 A=B×Q+R 成立。
//
//输入格式：
//输入在一行中依次给出 A 和 B，中间以 1 空格分隔。
//
//输出格式：
//在一行中依次输出 Q 和 R，中间以 1 空格分隔。
//
//输入样例：
//123456789050987654321 7
//输出样例：
//17636684150141093474 3

//分析：模拟手动除法的过程（类比自己在草稿纸上计算除法的过程），每次用第一位去除以B，
//输出得到的商，否则就*10+下一位，直到最后的数为余数～
#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001];
	int b;
	scanf("%s %d",a,&b);
	int len=strlen(a);
	int temp=0;		//temp表示进位到下一位的数 ,最开始进位为0； 
//	初次问题 无法处理商的第一位为0（题目测试用例） 
//	for(int i=0;i<len;i++)
//	{
//		int t=(temp*10+a[i]-'0')/b;
//		printf("%d",t);
//		temp=(temp*10+a[i]-'0')%b;
//	}
//	printf(" %d",temp);
	
	
//	改进：把第一位单独拿出来考虑
	 int t=(temp*10+a[0]-'0')/b;
	 if(t!=0)
	 {
	 	printf("%d",t);
	 }
	 temp=(temp*10+a[0]-'0')%b;
	for(int i=1;i<len;i++)
	{
		t=(temp*10+a[i]-'0')/b;
		printf("%d",t);
		temp=(temp*10+a[i]-'0')%b;
	}
	printf(" %d",temp); 
	return 0; 
}

