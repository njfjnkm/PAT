//1016 ����A+B (15 ��)
//������ A �ġ�D 
//
//�����ʽ��
//������һ�������θ��� A��D 
//
//�������� 1��
//3862767 6 13530293 3
//������� 1��
//399
//�������� 2��
//3862767 1 13530293 8
//������� 2��
//0
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int f(int a,int d);
int main()
{
	int a,d1,b,d2;
	scanf("%d %d %d %d",&a,&d1,&b,&d2); 
	printf("%d\n",f(a,d1)+f(b,d2));
	return 0;
}
int f(int a,int d)
{
	int sum=0,count=0;
	while(a!=0)
	{
		int digit=a%10;
		if(digit==d)
			count++;
		a/=10;
	}
	for(int i=0;i<count;i++)
	{
		sum=sum*10+d;
	}
	return sum;
 
} 

