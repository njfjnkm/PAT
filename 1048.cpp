//1048 ���ּ��� (20 ��)
//����Ҫ��ʵ��һ�����ּ��ܷ��������ȹ̶�һ�������������� A������һ������ B��
//����ÿ 1 λ������ A �Ķ�Ӧλ���ϵ����ֽ����������㣺
//������λ����Ӧλ��������Ӻ�� 13 ȡ�ࡪ�������� J ���� 10��Q ���� 11��K ���� 12��
//��ż��λ���� B �����ּ�ȥ A �����֣������Ϊ���������ټ� 10���������λΪ�� 1 λ��
//
//�����ʽ��
//������һ�������θ��� A �� B����Ϊ������ 100 λ��������������Կո�ָ���
//
//�����ʽ��
//��һ����������ܺ�Ľ����
//
//����������
//1234567 368782971
//���������
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
		int b_j= j>=0?b[j]-'0':0;		//	int b_j= j>=0?b[j]-'0':0;���� 
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




