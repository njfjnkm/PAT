//1088 ������ (20 ��)
//��Ի���������У�������ʦ�ɡ��������߶���֮���䲻���߶���֮����
//
//��������ס��ҡ��������˵�����ֵ��ϵΪ���׵�����ֵȷ���� 2 λ��������
//�Ѽ׵�����ֵ�� 2 �����ֵ���λ�þ����ҵ�����ֵ�����������������Ǳ�������ֵ�� X ����
//�ҵ�����ֵ�Ǳ��� Y ��������ָ��˭����ǿӦ����֮����˭������Ӧ����֮����
////
//�����ʽ��
//������һ���и���������������Ϊ��M�����Լ�������ֵ����X �� Y���������־�Ϊ������ 1000 ����������
//
//�����ʽ��
//��һ������������׵�����ֵ�������������ס��ҡ�����������Ĺ�ϵ��
//��������ǿ����� Cong��ƽ������� Ping������������� Gai������� 1 ���ո�ָ�������β�����ж���ո�
//
//ע�⣺����ⲻΨһ�����Լ׵�����Ϊ׼�����жϣ�����ⲻ���ڣ������ No Solution��
//
//�������� 1��
//48 3 7
//������� 1��
//48 Ping Cong Gai
//�������� 2��
//48 11 6
//������� 2��
//No Solution
#include <iostream>
using namespace std;
int M,x,y;		//����ȫ�ֱ����������Զ��庯����ʹ��M 
void print(double t) 
{
    if (M == t) printf(" Ping");
    else if (M < t) printf(" Cong");
    else printf(" Gai");
}

int main()
{
//	int M,x,y;		������һ�е��´��� 
	scanf("%d %d %d",&M,&x,&y);
	for(int jia=99;jia>=10;jia--)
	{
		int yi=(jia%10)*10+jia/10;
		double bing=abs(jia-yi)*1.0/x;			//��������ֵ����Ϊ������ 
		if(abs(jia-yi)*y==yi*x)					//ע��if(bing*y==yi)���Ͻ� 
		{
			printf("%d",jia);
            print(jia); print(yi); print(bing);
            return 0;
		}						
	}
	printf("No Solution");
	return 0;
}

//���� 
//#include <iostream>
//using namespace std;
//int main()
//{
//	int M,x,y;
//	scanf("%d %d %d",&M,&x,&y);
//	int jia,yi; 
//	double bing;			////��������ֵ����Ϊ������
//	for(jia=99;jia>=10;jia--)
//	{
//		yi=(jia%10)*10+jia/10;
//		bing=abs(jia-yi)*1.0/x;			//��������ֵ����Ϊ������ 
//		if(abs(jia-yi)*y==yi*x)					//ע��if(bing*y==yi)���Ͻ� 
//			break;						
//	}
//	if(jia==0)	
//	{
//		printf("No Solution");
//		return 0;
//	}
//	else
//	{
//		printf("%d",jia);
//		if(jia==M)	printf(" Ping");
//		else if(jia<M)	printf(" Gai");
//		else if(jia>M)	printf(" Cong");
//		
//		if(yi==M)	printf(" Ping");
//		else if(yi<M)	printf(" Gai");
//		else if(yi>M)	printf(" Cong");
//		
//		if(bing==M)	printf(" Ping");
//		else if(bing<M)	printf(" Gai");
//		else if(bing>M)	printf(" Cong");
//	}
//	return 0;
//}
//

