//1022 D进制的A+B 
#include <stdio.h>
//分析：参考数学十进制转换为d进制的方法----除d反向取余数法
//1 设sum = A + B，将每一次sum % d的结果保存在int类型的数组s中
//2 然后将sum / d，直到 sum 等于 0为止，此时s中保存的就是 sum 在 D 进制下每一位的结果的倒序，
//3 最后倒序输出s数组即可～
int main()
{
	int a,b,d;
	scanf("%d %d %d",&a,&b,&d);
	int sum=a+b;
	if(sum==0)
	{
		printf("0");
		return 0;		//return 0;程序结束符号，之后的代码不会再执行 
	}
	int s[100];
	int k=0;
	while(sum!=0)
	{
		s[k++]=sum%d;
		sum/=d;
	} 
	for(int i=k-1;i>=0;i--)
	{
		printf("%d",s[i]);
	}

	return 0;
}

