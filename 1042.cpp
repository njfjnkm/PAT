//1042 �ַ�ͳ�� (20 ��)
//���д�����ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ��
//
//�����ʽ��
//������һ���и���һ�����Ȳ����� 1000 ���ַ�����
//�ַ����� ASCII ���������ɼ��ַ����ո���ɣ����ٰ��� 1 ��Ӣ����ĸ���Իس��������س��������ڣ���
//
//�����ʽ��
//��һ�����������Ƶ����ߵ��Ǹ�Ӣ����ĸ������ִ���������Կո�ָ���
//����в��У����������ĸ����С���Ǹ���ĸ��
//ͳ��ʱ�����ִ�Сд�����Сд��ĸ��
//
//����������
//This is a simple TEST.  There ARE numbers and other symbols 1&2&3...........
//���������
//e 7

//C++���� 
//#include <iostream>
//#include <cctype>		//ʹ����isplwer��tolower���� 
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin,s);
//	int count[256]={0};
//	int len=s.length() ;
//	for(int i=0;i<len;i++)
//	{
//		s[i]=tolower(s[i]);		//ͳ��ʱ�����ִ�Сд��tolower( )���ǿո� ��tolower��&���ߣ������Ƕ�Ӧ�ķ��� 
//		if(islower(s[i]))			//�ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ
//		{
//			count[s[i]]++;
//		}
//	}
//	int k=0;
//	for(int i=0;i<256;i++)
//	{
//		if(count[i]>count[k])
//			k=i;
//	}
//	printf("%c %d",k,count[k]);
//	return 0;
//}

//C����
#include <stdio.h>
#include <ctype.h> 	//ʹ����isplwer��tolower���� 
#include <string.h>
int main()
{
	char s[1005];
	gets(s);
	int len=strlen(s);
	int count[26]={0};
	for(int i=0;i<len;i++)
	{
		s[i]=tolower(s[i]);		//ͳ��ʱ�����ִ�Сд��tolower( )���ǿո� ��tolower��&���ߣ������Ƕ�Ӧ�ķ��� 
		if(islower(s[i]))			//�ҳ�һ�θ��������г�����Ƶ�����Ǹ�Ӣ����ĸ
		{
			count[s[i]-'a']++;
		}
	}
	int k=0;
	for(int i=0;i<26;i++)
	{
		if(count[i]>count[k])
			k=i;
	}
	printf("%c %d",k+'a',count[k]);
	return 0;
}

