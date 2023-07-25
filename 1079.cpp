//1079 �ӳٵĻ����� (20 ��)
//����һ�� k+1 λ�������� N��д�� a 
//  ����ʽ�����ж����� i �� 0��a 
// >0��N ����Ϊһ�������������ҽ��������� i �� a 
// ����Ҳ������Ϊһ����������
//
//�ǻ�����Ҳ����ͨ��һϵ�в�����������������Ƚ���������ת���ٽ���ת���������ӣ�����ͻ�����һ�������������ظ������ת����ӵĲ�����ֱ��һ�����������֡����һ���ǻ��������Ա�����������ͳ������Ϊ�ӳٵĻ������������巭���� https://en.wikipedia.org/wiki/Palindromic_number ��
//
//��������һ��������������Ҫ�����ҵ��������Ǹ���������
//
//�����ʽ��
//������һ���и���һ��������1000λ����������
//
//�����ʽ��
//�Ը�����������һ��һ����������������Ĺ��̡�ÿ�и�ʽ����
//
//A + B = C
//���� A ��ԭʼ�����֣�B �� A ����ת����C �����ǵĺ͡�A �������������ʼ���ظ�����ֱ�� C �� 10 �����ڱ�ɻ���������ʱ��һ������� C is a palindromic number.��������� 10 ����û�ܵõ���������������һ������� Not found in 10 iterations.��
//
//�������� 1��
//97152
//������� 1��
//97152 + 25179 = 122331
//122331 + 133221 = 255552
//255552 is a palindromic number.
//�������� 2��
//196
//������� 2��
//196 + 691 = 887
//887 + 788 = 1675
//1675 + 5761 = 7436
//7436 + 6347 = 13783
//13783 + 38731 = 52514
//52514 + 41525 = 94039
//94039 + 93049 = 187088
//187088 + 880781 = 1067869
//1067869 + 9687601 = 10755470
//10755470 + 07455701 = 18211171
//Not found in 10 iterations.
//1 ���ַ���������ԭ�ַ����ȽϿ��Ƿ���ȿ�֪s�Ƿ�Ϊ���Ĵ�
//
//
//2 ���ÿɲ���algorithmͷ�ļ�����ĺ���reverse(s.begin(), s.end())ֱ�Ӷ��ַ���s���е���
//3 ��ĿҪ��������һ���и���һ��������1000λ���������� longlong���ֻ�ܵ�2^64,��Լ10������19λ����ֻ��ʹ������ 
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int cnt;		//cnt���ڼ�¼�������� 
	for(cnt=0;cnt<10;cnt++)
	{
		string t=s;
		reverse(t.begin() ,t.end());		//��Ҫͷ�ļ�#include<algorithm> 
		if(t==s)
		{
			cout<<s<<" is a palindromic number.\n";
			break;
		}
		else 
		{
//			int sum=stoi(s)+stoi(t);		//���Ե�6����ԭ��int���͵�sumԽ�� �Լ�iת��Ϊ���֣�stoi���Ѿ�������int�ķ�Χ 
			cout<<s<<" + "<<t<<" = "<<stoull(s)+stoull(t)<<endl;
//			s=to_string(sum);
			s=to_string(stoull(s)+stoull(t));
		}
	}
	if(cnt==10)	printf("Not found in 10 iterations.");
	return 0;
}
