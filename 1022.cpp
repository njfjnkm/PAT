//1022 D���Ƶ�A+B 
#include <stdio.h>
//�������ο���ѧʮ����ת��Ϊd���Ƶķ���----��d����ȡ������
//1 ��sum = A + B����ÿһ��sum % d�Ľ��������int���͵�����s��
//2 Ȼ��sum / d��ֱ�� sum ���� 0Ϊֹ����ʱs�б���ľ��� sum �� D ������ÿһλ�Ľ���ĵ���
//3 ��������s���鼴�ɡ�
int main()
{
	int a,b,d;
	scanf("%d %d %d",&a,&b,&d);
	int sum=a+b;
	if(sum==0)
	{
		printf("0");
		return 0;		//return 0;����������ţ�֮��Ĵ��벻����ִ�� 
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

