//1074 �����޵мӷ��� (20 ��)
//������ϰ��ʹ��ʮ������������Ĭ��һ�����ֵ�ÿһλ����ʮ���Ƶġ�
//���� PAT ���˿��ҵ������ÿ�����ֵ�ÿһλ���ǲ�ͬ���Ƶģ�������������ֳ�Ϊ��PAT������
//ÿ�� PAT ���˶�������Ǹ�λ���ֵĽ��Ʊ���
//���硰����0527���ͱ�ʾ���λ�� 7 ���������� 2 λ�� 2 ���������� 3 λ�� 5 ���������� 4 λ�� 10 ���������ȵȡ�
//ÿһλ�Ľ��� d ������ 0����ʾʮ���ƣ��������� [2��9] �����ڵ�������
//������������Ʊ�Ӧ�ð��������λ���֣�����ʵ��Ӧ�ó�����PAT ����ͨ��ֻ��Ҫ��סǰ 20 λ�͹����ˣ��Ժ��λĬ��Ϊ 10 ���ơ�
//
//������������ϵͳ�У���ʹ�Ǽ򵥵ļӷ�����Ҳ��ò��򵥡�
//�����Ӧ���Ʊ���0527��������μ��㡰6203 + 415���أ����ǵ����ȼ������λ��3 + 5 = 8��
//��Ϊ���λ�� 7 ���Ƶģ��������ǵõ� 1 �� 1 ����λ���� 2 λ�ǣ�0 + 1 + 1����λ��= 2��
//��Ϊ��λ�� 2 ���Ƶģ��������ǵõ� 0 �� 1 ����λ���� 3 λ�ǣ�2 + 4 + 1����λ��= 7��
//��Ϊ��λ�� 5 ���Ƶģ��������ǵõ� 2 �� 1 ����λ���� 4 λ�ǣ�6 + 1����λ��= 7��
//��Ϊ��λ�� 10 ���Ƶģ��������Ǿ͵õ� 7��������ǵõ���6203 + 415 = 7201��
//
//�����ʽ��
//���������ڵ�һ�и���һ�� N λ�Ľ��Ʊ���0 < N �� 20�����Իس������� ������У�ÿ�и���һ�������� N λ�ķǸ��� PAT ����
//
//�����ʽ��
//��һ����������� PAT ��֮�͡�
//
//����������
//30527
//06203
//415
//���������
//7201
#include <iostream>
using namespace std;
int main()
{
	string s,x,y,res;
	cin>>s>>x>>y;
	x.insert(0,s.length()-x.length(),'0');
	y.insert(0,s.length()-y.length(),'0');
	int k=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		int t=((s[i]-'0'==0)?10:s[i]-'0'); 
		res=to_string((x[i]+y[i]-'0'*2+k)%t)+res;
		k=(x[i]+y[i]-'0'*2+k)/t;
	} 
	if(k!=0)	res=to_string(k)+res;
    
//	�������ֿ��ܲ��淶����ͷ��0��
	bool flag=0;
	for(int i=0;i<res.length();i++)
	{
		if(res[i]!='0'||flag==1)	//��ȥ��ͷ���ܶ������0 
		{
			cout<<res[i];
            flag=1;                        
		}	
	}     
    if (flag == 0) cout << 0;		//���һ�ζ�û����������Ҫ���һ��0~
	return 0;
}
