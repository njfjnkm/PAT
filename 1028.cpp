//1028 �˿��ղ� (20 ��)
//ĳ��������˿��ղ飬�õ���ȫ���������ա�������д�������ҳ��������곤����������ˡ�
//
//����ȷ��ÿ����������ڶ��ǺϷ��ģ�����һ���Ǻ���ġ���
//������֪����û�г��� 200 ������ˣ��������� 2014 �� 9 �� 6 �գ�
//���Գ��� 200 ������պ�δ���������ն��ǲ�����ģ�Ӧ�ñ����˵���
//
//�����ʽ��
//�����ڵ�һ�и��������� N��ȡֵ��(0,10 
//5
// ]����� N �У�ÿ�и��� 1 ���˵��������ɲ����� 5 ��Ӣ����ĸ��ɵ��ַ��������Լ��� yyyy/mm/dd������/��/�գ���ʽ���������ա���Ŀ��֤���곤�����������û�в��С�
//
//�����ʽ��
//��һ����˳�������Ч���յĸ��������곤�˺��������˵�����������Կո�ָ���
//
//����������
//5
//John 2001/05/12
//Tom 1814/09/06
//Ann 2121/01/30
//James 1814/09/05
//Steve 1967/11/20
//���������
//3 Tom John
//���������ַ�������name��birth�������ǰbirth >= ��1814/09/06����<= ��2014/09/06�壬
//������Ч���գ���Ч����cnt++�����birth >= maxbirth�������maxname��maxbirth��ֵ��
//���birth <= minbirth�������minname��minbirth��ֵ�������max��min��ָ��ֵ�ϵĴ�С��
//������cnt��minname��maxname��
//minname��ʾ���곤�ģ����յ���ֵ��С��С�ģ���maxname��ʾ������ģ����յ���ֵ��С���ģ���

//C++�� 
//#include <iostream>
//using namespace std;
//int main() {
//    int n, cnt = 0;
//    cin >> n;
//    string name, birth, maxname, minname, maxbirth = "1814/09/06", minbirth = "2014/09/06";
//    for (int i = 0; i < n; i++) 
//	{
//        cin >> name >> birth;
//        if (birth >= "1814/09/06" && birth <= "2014/09/06") 
//		{
//            cnt++;
//            if (birth >= maxbirth) 
//			{
//                maxbirth = birth;
//                maxname = name;
//            }
//            if (birth <= minbirth) 
//			{
//                minbirth = birth;
//                minname = name;
//            }
//        }
//    }
//    cout << cnt;
//    if (cnt != 0) cout << " " << minname << " " << maxname;
//    return 0;
//}

//C���Է� 
#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char name[6], birth[11], maxname[6], minname[6], maxbirth[]= "1814/09/06", minbirth[]= "2014/09/06";
	int count=0;
	for(int i=0;i<n;i++)
	{
		scanf("%s %s",name,birth);
		if(strcmp(birth,"2014/09/06")<=0&&strcmp(birth,"1814/09/06")>=0)
		{
			count++;
			if(strcmp(birth,maxbirth)>0)
			{
				strcpy(maxbirth,birth);	//	maxbirth=birth;	����C�����ַ���֮�丳ֵ����ֱ��ʹ���ַ���������ʾ��ַ�����и�ֵ ��C++���ԣ� 
				strcpy(maxname,name);	//	maxname=name;		����C����ֻ��ͨ��strcpy����ʵ���ַ���֮��ĸ�ֵ 
			}
			if(strcmp(birth,minbirth)<0)
			{
				strcpy(minbirth,birth);	
				strcpy(minname,name);
			}
		}
	}
	printf("\n");
	if(count!=0)
		printf("%d %s %s",count,minname,maxname);	
	return 0;
 } 
