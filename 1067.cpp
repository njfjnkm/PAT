//1067 ������ (20 ��)
//������ͼ��¼ĳ��ϵͳȴ��������ʱ��ϵͳһ��ֻ�������㳢�����޶�Σ�
//�������������ʱ���˺žͻᱻ���������������ʵ�����С���ܡ�
//
//�����ʽ��
//�����ڵ�һ�и���һ�����루���Ȳ����� 20 �ġ��������ո�Tab���س��ķǿ��ַ�����
//��һ�������� N���� 10�����ֱ�����ȷ�������ϵͳ�����ԵĴ�����
//���ÿ�и���һ���Իس������ķǿ��ַ��������û�������������롣
//���뱣֤������һ�γ��ԡ�������һ��ֻ�е��� # �ַ�ʱ�����������������һ�в����û������롣
//
//�����ʽ��
//���û���ÿ�����룬�������ȷ�������ҳ��Դ��������� N������һ������� Welcome in������������
//����Ǵ���ģ�����һ���а���ʽ��� Wrong password: �û�����Ĵ������룻
//�������Դﵽ N ��ʱ�������һ�� Account locked������������
//
//�������� 1��
//Correct%pw 3
//correct%pw
//Correct@PW
//whatisthepassword!
//Correct%pw
//#
//������� 1��
//Wrong password: correct%pw
//Wrong password: Correct@PW
//Wrong password: whatisthepassword!
//Account locked

//�������� 2��
//cool@gplt 3
//coolman@gplt
//coollady@gplt
//cool@gplt
//try again
//#
//
//������� 2��
//Wrong password: coolman@gplt
//Wrong password: coollady@gplt
//Welcome in

//������ע��3���㣺1������Ѿ���"#"�˾Ͳ�Ҫ����������ж��ˣ���Ȼ�������Wrong password: "#"
//
//2�������������Ҵﵽ�˳��ԵĴ������������Wrong password�Ǿ���������Account locked�Ǿ�
//
//3��Wrong password: �����и��ո�
//4����ȷ�����벻���ո񣬿�����cin>>���룬�����û������������������пո񣬱���Ҫgetline 
#include <iostream>
using namespace std;
int main()
{
	string s,t;
	int n;
	cin>>s>>n;
	getchar();
	int cnt=0;
	do{
		getline(cin,t);
		if(t=="#")	return 0;
		if(t==s)
		{
			cout<<"Welcome in\n";
			return 0;	
		}
		else
			cout<<"Wrong password: "<<t<<endl;
		cnt++;
	}while(cnt<n);
	printf("Account locked\n");

	return 0;
}

