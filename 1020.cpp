//1020 �±� (25 ��)
//�±����й���������ѽ�ʱ�Ե�һ�ִ�ͳʳƷ����ͬ���������಻ͬ��ζ���±���
//�ָ������������±��Ŀ���������ۼۡ��Լ��г�����������������������Ի�õ���������Ƕ��١�
//
//ע�⣺����ʱ����ȡ��һ���ֿ�档���������������������ģ����������� 3 ���±����������ֱ�Ϊ 18��15��10 ��֣�
//���ۼ۷ֱ�Ϊ 75��72��45 ��Ԫ������г������������ֻ�� 20 ��֣�
//��ô��������������Ӧ��������ȫ�� 15 ��ֵ� 2 ���±����Լ� 5 ��ֵ� 3 ���±������ 72 + 45/2 = 94.5����Ԫ����
//
//�����ʽ��
//ÿ���������һ������������ÿ�����������ȸ���һ�������� 1000 �������� N ��ʾ�±�����������
//�Լ������� 500�������Ϊ��λ���������� D ��ʾ�г������������
//���һ�и��� N ��������ʾÿ���±��Ŀ�����������Ϊ��λ�������һ�и��� N ��������ʾÿ���±������ۼۣ�����ԪΪ��λ����
//���ּ��Կո�ָ���
//
//�����ʽ��
//��ÿ�������������һ�������������棬����ԪΪ��λ����ȷ��С����� 2 λ��
//
//����������
//3 20
//18 15 10
//75 72 45
//���������
//94.50
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int n,d;
	scanf("%d %d",&n,&d);
	int a[n],b[n];
	double s[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		s[i]=1.0*b[i]/a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i]<s[j])
			{
				int t=s[i];s[i]=s[j];s[j]=t;
				int k=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
	int sum=0,k;
	for(int i=0;sum<=d;i++)
	{
		sum+=a[i];
			k=i;
	}
	double p;
	for(int i=0;i<k;i++)
	{
		p=p+s[i]*a[i];
	}
	p+=(d-sum+a[k])*s[k];
	printf("%.2f",p);
	
	
	
	
	

	return 0;
}
