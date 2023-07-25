//1062 ������ (20 ��)
//һ������һ��д�����������������ʽ��N/M������ M ��Ϊ0��
//��������ָ���Ӻͷ�ĸû�й�Լ���ķ�����ʾ��ʽ��
//
//�ָ�����������ȵ������� N1/M�� N2/M ��Ҫ���㰴��С�����˳���г�����֮���ĸΪ K ����������
//
//�����ʽ��
//������һ���а� N/M �ĸ�ʽ���������������������һ����������ĸ K������Կո�ָ���
//��Ŀ��֤���������������������� 1000��
//
//�����ʽ��
//��һ���а� N/M �ĸ�ʽ�г�������������֮���ĸΪ K ��������������
//����С�����˳������� 1 ���ո�ָ�������β�����ж���ո���Ŀ��֤������ 1 �������
//
//����������
//7/18 13/20 12
//���������
//5/12 7/12


//	C���� 
#include <stdio.h>
int gcd(int a,int b)
{
	return b==0?a:gcd(b,a%b);
}
int main()
{
	int a,b,c,d,k;
	scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&k);
	double x=(double)a/b;
	double y=(double)c/d;
	if(x>y)
	{
		double l=x;
		x=y;
		y=l;
	}
	int cnt=0;
	for(int i=1;i<k;i++)
	{
		double t=(double)i/k;
		if(gcd(i,k)==1&&t>x&&t<y)
		{
			if(cnt!=0)	printf(" ");
			printf("%d/%d",i,k);
			cnt++;
		}
	}
	return 0;
}

//C++�� 
//������ʹ��շת�����gcd����a��b�����Լ������ΪҪ�г�n1/m1��n2/m2֮�����������
//����n1/m1��һ��С��n2/m2���������n1 * m2 > n2 * m1��˵��n1/m1��n2/m2��
//�����n1��n2��m1��m2��λ�á���������ķ�����ĸΪk������num��
//����num=1����n1 * k >= m1 * numʱ��num����++��ֱ��num����n1/m1 < num/kΪֹ��
//��Ȼ����n1/m1��n2/m2֮���ҷ���������num��ֵ��
//��gcd(num, k)�Ƿ����1�ж�num��k�Ƿ������Լ����
//�������1��ʾû�����Լ���������num/k��Ȼ��num����++ֱ���˳�ѭ����

#include <iostream>
using namespace std;
int gcd(int a, int b)		// շת���������Ӻͷ�ĸ�����Լ��
{
    return b == 0 ? a : gcd(b, a % b);
}
int main() {
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if(n1 * m2 > n2 * m1) 
	{
        swap(n1, n2);
        swap(m1, m2);
    }
    bool flag=false;	//�������� ����С�����˳������� 1 ���ո�ָ�������β�����ж���ո�
    for(int i=1;i*m2<n2*k;i++)
    {
    	if(i*m1>n1*k&&gcd(i,k)==1)
    	{
    		printf("%s%d/%d",flag==true?" ":"",i,k);
    		flag=true;
		}
	}
//	����������д�� 
//    int num = 1;
//    bool flag = false;
//    while(n1 * k >= m1 * num) num++;		//��ѭ��������num/k>n1/m1; 
//    while(n1 * k < m1 * num && m2 * num < n2 * k) 
//	{
//        if(gcd(num, k) == 1) 
//		{
//            printf("%s%d/%d", flag == true ? " " : "", num, k);
//            flag = true;
//        }
//        num++;
//    }
    return 0;
}
