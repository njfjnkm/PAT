//1069 ΢��ת���齱 (20 ��)
//С�� PAT �������֣�����֮���������΢��ת���齱�����ת���������а�˳��ÿ�� N ���˾ͷ���һ�������
//�����д���������ȷ���н�������
//
//�����ʽ��
//�����һ�и������������� M���� 1000����N �� S��
//�ֱ���ת����������С���������н�������Լ���һλ�н��ߵ���ţ���Ŵ� 1 ��ʼ����
//��� M �У�˳�����ת��΢�������ѵ��ǳƣ������� 20 ���ַ����������ո�س��ķǿ��ַ�������
//
//ע�⣺��������ת����Σ��������н���Ρ�
//����������ڵ�ǰ�н�λ�õ������Ѿ��й�������������˳��ȡ��һλ��
//
//�����ʽ��
//���������˳������н�������ÿ���ǳ�ռһ�С�
//���û�����н�������� Keep going...��
//
//�������� 1��
//9 3 2
//Imgonnawin!
//PickMe
//PickMe
//LookHere
//Imgonnawin!
//TryAgainAgain
//TryAgainAgain
//Imgonnawin!
//TryAgainAgain
//������� 1��
//PickMe
//Imgonnawin!
//TryAgainAgain
//
//�������� 2��
//2 3 5
//Imgonnawin!
//PickMe
//������� 2��
//Keep going...
//��������mapp�洢��lag���Ϊtrue��ʾ�й����н������flag�����Ȼ��false˵��Ҫ���Keep going...
#include <iostream>
#include <map>
using namespace std;
int main()
{
	int m,n,s;
	scanf("%d %d %d",&m,&n,&s);
	bool flag=false;
	map<string,int>mapp;
	for(int i=1;i<=m;i++)
	{
		string t;
		cin>>t;
		if(i==s&&mapp[t]==1)	s++;		//��12��Ҫд��if (i == s && mp[str] == 1) s += 1;������ʾ�н����ظ�
									//if(mapp[t]==1)�����˼·���н���ÿ�ظ�����һ�� �н���ž�+1 ��
//����ʵӦ�����н�����Ӧ���н�����ų���һ�Σ���Ŀ����������ڵ�ǰ�н�λ�õ������Ѿ��й�������������˳��ȡ��һλ���� �н���Ų�+1
		if(i==s&&mapp[t]==0)
		{
			cout<<t<<endl;
			flag=true;
			mapp[t]=1;
			s+=n; 
		}
	}
 	if(flag==false)
 		printf("Keep going...");
	return 0;
}

