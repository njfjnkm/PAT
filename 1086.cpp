//1086 �Ͳ������� (15 ��)
//����ҵ��ʱ��������С�������㣺��������ߵ��ڶ��٣�����Ӧ�ò�ʧ��ò��ΧЦ�Ÿ�����������ʮ������
//�����Ҫ���㣬���κ�һ�Ը�����������������������ǵĳ˻���
//
//�����ʽ��
//�����ڵ�һ�и������������� 1000 �������� A �� B������Կո�ָ���
//
//�����ʽ��
//��һ���е������ A �� B �ĳ˻���
//
//����������
//5 7
//���������
//53
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int sum=a*b;
	int k=0;
	while(sum!=0)
	{
		k=k*10+sum%10;
		sum/=10;
	} 
	printf("%d\n",k);
	return 0;
}
//���� 
//������a �� b�ĳ˻�ת�����ַ������ٽ��ַ�����ת����󽫷�ת�����ַ���ת�������֡�
//#include <iostream>
//#include <string>			//to_string��Ҫ 
//#include <algorithm>		//reserve������Ҫ��ͷ�ļ� 
//using namespace std;
//int main() 
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    string s = to_string(a * b);
//    reverse(s.begin(), s.end());
//    printf("%d", stoi(s));
//    return 0;
//}

