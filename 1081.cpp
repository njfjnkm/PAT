//1081 ������� (15 ��)
//����Ҫ�������ĳ��վ���û�ע��ģ��дһ������Ϸ��Լ���С���ܡ�
//����վҪ���û����õ���������ɲ�����6���ַ���ɣ�����ֻ����Ӣ����ĸ�����ֺ�С���� .�������������ĸҲ�����֡�
//
//�����ʽ��
//�����һ�и���һ�������� N���� 100������� N �У�ÿ�и���һ���û����õ����룬Ϊ������ 80 ���ַ��ķǿ��ַ������Իس�������
//
//ע�⣺ ��Ŀ��֤������ֻ��С��������롣
//
//�����ʽ��
//��ÿ���û������룬��һ�������ϵͳ������Ϣ��������5�֣�
//
//�������Ϸ������Your password is wan mei.��
//�������̫�̣����ۺϷ���񣬶����Your password is tai duan le.��
//������볤�ȺϷ��������ڲ��Ϸ��ַ��������Your password is tai luan le.��
//������볤�ȺϷ�����ֻ����ĸû�����֣������Your password needs shu zi.��
//������볤�ȺϷ�����ֻ������û����ĸ�������Your password needs zi mu.��
//����������
//5
//123s
//zheshi.wodepw
//1234.5678
//WanMei23333
//pass*word.6
//���������
//Your password is tai duan le.
//Your password needs shu zi.
//Your password needs zi mu.
//Your password is wan mei.
//Your password is tai luan le.
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
     getchar();     //�ڽ�����n��Ҫgetchar()��ȡһ�»��з�������getline�������з�(\n)�ᱻ����getline�С�
    string s; 
    for(int i=0;i<n;i++)
    {
        getline(cin,s); //�������ǿ��ַ�����ÿ���ַ����Իس������������ַ���������ܻ��пո����Բ���ֱ����cin��Ҫ��getline����һ���ַ���
        int invalid=0,hasalpha=0,hasnum=0;
        if(s.size()<6)  
            printf("Your password is tai duan le.\n");
        else 
        { 
            for(int j=0;j<s.size();j++)
            {
                if(s[j]!='.'&&!isalnum(s[j]))    invalid=1;
                else if(isalpha(s[j]))    hasalpha=1;
                else if(isdigit(s[j]))    hasnum=1;
            }
            if(invalid==1)  printf("Your password is tai luan le.\n");
            else if(hasnum==0)   printf("Your password needs shu zi.\n");
            else if(hasalpha==0)    printf("Your password needs zi mu.\n");
            else    printf("Your password is wan mei.\n");
        }
    }
        
}
