//1082 ������� (20 ��)
//����Ŀ��������������Ĺ���ǳ��򵥣�˭��ĵ���������������˭���ǹھ���˭�����Զ��˭���ǲ���
//�������һϵ�е�����ƽ������(x,y)�������д�����ҳ��ھ��Ͳ������Ǽ��������ԭ��(0,0)��
//
//�����ʽ��
//�����ڵ�һ���и���һ�������� N���� 10 000������� N �У�ÿ�а����и�ʽ������ID x y
//���� ID ���˶�Ա�ı�ţ��� 4 λ������ɣ���x �� y �������ĵ�����ƽ������(x,y)����Ϊ������
//�� 0 �� |x|, |y| �� 100����Ŀ��֤ÿ���˶�Ա�ı�Ų��ظ�����ÿ��ֻ�� 1 ǹ��
//
//�����ʽ��
//����ھ��Ͳ���ı�ţ��м�� 1 ����Ŀ��֤������Ψһ�ġ�
//
//����������
//3
//0001 5 7
//1020 -1 3
//0233 0 -1
//���������
//0233 0001
//��������һ 
//1.����C++��STL֮ӳ��map [����ֵ]
//2.map���Զ��� �� ��С��������
//3.���map���׸�Ԫ�ص�ֵ���һ��Ԫ�ص�ֵ���ɡ�
//#include <iostream>
//#include <map>
//using namespace std;
//int main()
//{
//	int n,x,y;
//	scanf("%d",&n) ;
//	string s;
//	map<int,string>p;
//	for(int i=0;i<n;i++)
//	{
//		cin>>s>>x>>y;
//		p[x*x+y*y]=s; 
//	}
//	cout<<p.begin()->second<<" "<<p.rbegin()->second;
//	return 0;
//}
//������ 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,id,x,y,max_id,min_id;
	scanf("%d",&n);
	int max=0,min=100;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&id,&x,&y);
		if(max<sqrt(x*x+y*y))	
		{
			max_id=id;
			max=sqrt(x*x+y*y);
		}
		if(min>sqrt(x*x+y*y))	
		{
			min_id=id;
			max=sqrt(x*x+y*y);
		}
	}
	printf("%04d %04d\n",min_id,max_id);
	return 0;
}
