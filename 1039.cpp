// 1039 �������� (20 ��)
//С������Щ������һ���Լ�ϲ�����鴮�������ӵ�̯���кܶമ������ɫ���鴮�����ǲ��ϰ��κ�һ����ɢ������
//����С��Ҫ���æ�ж�һ�£�ĳ���������Ƿ������ȫ���Լ���Ҫ�����ӣ�����ǣ���ô�������ж��ٶ�������ӣ�
//������ǣ���ô������ȱ�˶������ӡ�
//
//Ϊ���������������[0-9]��[a-z]��[A-Z]��Χ�ڵ��ַ�����ʾ��ɫ��
//������ͼ1�У���3����С���������鴮����ô��1����������Ϊ������ȫ������Ҫ�����ӣ�������8�Ų���Ҫ�����ӣ�
//��2����������Ϊû�к�ɫ���ӣ���������һ�ź�ɫ�����ӡ�
//
// figbuy.jpg
//
//ͼ 1
//
//�����ʽ��
//ÿ��������� 1 ������������ÿ�����������ֱ��� 2 �����Ⱥ����̯�����鴮��С���������鴮�������������� 1000 �����ӡ�
//
//�����ʽ��
//�������������һ������� Yes �Լ��ж��ٶ�������ӣ�
//���������������һ������� No �Լ�ȱ�˶������ӡ������ 1 ���ո�ָ���
//
//�������� 1��
// ppRYYGrrYBR2258
// YrR8RrY
//������� 1��
// Yes 8
//�������� 2��
// ppRYYGrrYB225
//
// YrR8RrY
//������� 2��
// No 2

//�������ַ���a��b�ֱ�洢̯�����鴮��С���������鴮�������ַ���a����ÿһ���ַ����ֵĴ���������book�����У�
//��ʾ̯����ÿ�����ӵĸ����������ַ���b�����book[b[i]]>0����ʾС��Ҫ������̯���У���book[b[i]]-1��
//��������Ӹ�С�졫����˵��С��Ҫ������̯��û�У���ͳ��ȱ�˶������ӵ�result++��
//���result������0��˵��ȱ���ӣ��򲻿��������No�Լ�ȱ�˵����Ӹ���result��
//����˵����ȱ���ӣ����������Yes�Լ�̯�����Ӷ���ĸ���a.length() �C b.length()��

// C����
//#include <stdio.h>
//#include <string.h>
// int main()
//{
//	char a[1001];
//	char b[1001];
//	scanf("%s",a);
//	scanf("%s",b);
//	int book [256]={0};		//�����ַ���ASCII�뷶Χ��0--256��
//	int result=0;
//	for(int i=0;i<strlen(a);i++)
//	{
//		book[a[i]]++;		//a[i]���ַ�����Ӧ��[0,256]��ASCII��
//	}
//	for(int i=0;i<strlen(b);i++)
//	{
//		if(book[b[i]]>0)
//			book[b[i]]--;	//��book[b[i]]>0����ʾС��Ҫ������̯���У���book[b[i]]-1(��������Ӹ�С��)
//		else result++;		//����˵��С��Ҫ������̯��û�У���ͳ��ȱ�˶������ӵ�result++
//	}
//	if(result==0)
//		printf("Yes %d",strlen(a)-strlen(b));
//	else
//		printf("No %d",result);
//
//	return 0;
// }

// C++����
#include <iostream>
using namespace std;
//���߶���ȫ�ֱ��� int book[256];
int main()
{
	string a, b;
	cin >> a >> b;
	//	int book [256];	//�˾������⣬�ں����ڲ�����ı��� C++����Ĭ���Զ���ʼ��Ϊ0��ֻ��ȫ�ֱ����Ż�Ĭ�ϳ�ʼ��Ϊ0��
	int book[256] = {0};
	for (int i = 0; i < a.length(); i++)
	{
		book[a[i]]++; // a[i]���ַ�����Ӧ��[0,255]��ASCII��
	}
	int result = 0;
	for (int i = 0; i < b.length(); i++)
	{
		if (book[b[i]] > 0)
			book[b[i]]--; //��book[b[i]]>0����ʾС��Ҫ������̯���У���book[b[i]]-1(��������Ӹ�С��)
		else
			result++; //����˵��С��Ҫ������̯��û�У���ͳ��ȱ�˶������ӵ�result++
	}
	if (result == 0)
		printf("Yes %d", a.length() - b.length());
	else
		printf("No %d", result);

	return 0;
}