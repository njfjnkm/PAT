//1087 �ж��ٲ�ͬ��ֵ (20 ��)
//����Ȼ�� n ����ȡ 1��2��3��������N ʱ����ʽ ?n/2?+?n/3?+?n/5? �ж��ٸ���ͬ��ֵ����ע��?x? Ϊȡ����������ʾ������ x �������Ȼ������ x ���������֡���
//
//�����ʽ��
//�������һ�������� N��2��N��10 
//4
// ����
//
//�����ʽ��
//��һ���������������ʽȡ���Ĳ�ֵͬ�ĸ�����
//
//����������
//2017
//���������
//1480

//�Ž� set�Ǽ��ϣ� ��set����ĸ�Ԫ���Ǹ�����ͬ�� �� ����set�ᰴ��Ԫ�ؽ��д�С��������
#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    set<int> s;
    for (int i = 1; i <= n; i++)
        s.insert(i / 2 + i / 3 + i / 5);
    printf("%d", s.size());
    return 0;
}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	scanf("%d",&N);
//	int sum[10000]={0};
//	for(int i=1;i<=N;i++)
//	{
//		int t=int(i/2.0)+int(i/3.0)+int(i/5.0);
//		sum[t]++;
//	}
//	int d=0;
//	for(int i=0;i<10000;i++)
//		if(sum[i]!=0)	d++;
//	printf("%d\n",d) ;
//	return 0;
//}

