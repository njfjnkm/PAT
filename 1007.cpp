//1006 ������ʽ������� (15 ��)
//����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n ����ʾ��Ϊ��ĸ�λ���� n��<10����
//������ʽ�������һ�������� 3 λ�������������� 234 Ӧ�ñ����Ϊ BBSSS1234��
//��Ϊ���� 2 �����١���3 ����ʮ�����Լ���λ�� 4��
//
//�����ʽ��
//ÿ������������� 1 ���������������������� n��<1000����
//
//�����ʽ��
//ÿ���������������ռһ�У��ù涨�ĸ�ʽ��� n��
//
//�������� 1��
//234
//������� 1��
//BBSSS1234
//�������� 2��
//23
//������� 2��
//SS123

//��һ 
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n) ;
//	if(n<10)
//	{
//		for(int i=1;i<=n;i++)
//		{
//			printf("%d",i);
//		}
//	}
//	else if(n>=10&&n<100)
//	{
//		int t=n/10;
//		int a=n%10;
//		for(int i=0;i<t;i++)
//		{
//			printf("S");
//		}
//		for(int i=1;i<=a;i++)
//		{
//			printf("%d",i);
//		}
//	}
//	else if(n>=100&&n<1000)
//	{
//		int b=n/100;
//		int t=(n%100)/10;
//		int a=(n%100)%10;
//		for(int i=0;i<b;i++)
//		{
//			printf("B");
//		}
//		for(int i=0;i<t;i++)
//		{
//			printf("S");
//		}
//		for(int i=1;i<=a;i++)
//		{
//			printf("%d",i);
//		}
//	}
	
//	���� 
#include <stdio.h>
void f(int b,int t,int a)
{
	while(b--)		  			//for(int i=0;i<b;i++)
		printf("B");			//{
								//	printf("B");		 ��Ϊѭ�������ò���ѭ������i 
								//}
	while(t--)				    //for(int i=0;i<t;i++)
		printf("S");			//{
								//	printf("S");
								//}
	for(int i=1;i<=a;i++)
	{
		printf("%d",i);
	}
}
int main()
{
	int n;
	scanf("%d",&n) ;
	int b=n/100;
	int t=(n%100)/10;
	int a=(n%100)%10;
	f(b,t,a);
		return 0;
}

//���� 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[100];
//	gets(a);
//	int l = strlen(a);
//	if (l == 3)
//	{
//		int b = a[0] - '0';
//		int s = a[1] - '0';
//		int g = a[2] - '0';
//		for (int i = 0; i < b; i++)
//		{
//			printf("B");
//		}
//		for (int i = 0; i < s; i++)
//		{
//			printf("S");
//		}
//		for (int i = 1; i <= g; i++)
//		{
//			printf("%d", i);
//		}
//	}
//	else if (l == 2)
//	{
//		int s = a[0] - '0';
//		int g = a[1] - '0';
//		for (int i = 0; i < s; i++)
//		{
//			printf("S");
//		}
//		for (int i = 1; i <= g; i++)
//		{
//			printf("%d", i);
//		}
//	}
//	else
//	{
//		int g = a[0] - '0';
//		for (int i = 1; i <= g; i++)
//		{
//			printf("%d", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
	

