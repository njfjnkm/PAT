// 1014 ����Ħ˹��Լ�� (20 ��)
//����̽����Ħ˹�ӵ�һ����ֵ�������
//
//����Լ��ɣ�
// 3485djDkxh4hhGE
// 2984akDfkkkkggEdsb
// s&hgsfdk
// d&Hyscvnm
//����̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�������� 14:04����Ϊǰ�����ַ����е� 1 ����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ� 4 ����ĸ D�����������ģ��� 2 ����ͬ���ַ��� E �����ǵ� 5 ��Ӣ����ĸ������һ����ĵ� 14 ����ͷ������һ��� 0 �㵽 23 �������� 0 �� 9���Լ���д��ĸ A �� N ��ʾ�����������ַ����� 1 ����ͬ��Ӣ����ĸ s �����ڵ� 4 ��λ�ã��� 0 ��ʼ�������ϣ������ 4 ���ӡ��ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣
//
//�����ʽ��
//������ 4 ���зֱ���� 4 ���ǿա��������ո��ҳ��Ȳ����� 60 ���ַ�����
//
//�����ʽ��
//��һ�������Լ���ʱ�䣬��ʽΪ DAY HH:MM������ DAY ��ĳ���ڵ� 3 �ַ���д���� MON ��ʾ����һ��TUE ��ʾ���ڶ���WED ��ʾ��������THU ��ʾ�����ģ�FRI ��ʾ�����壬SAT ��ʾ��������SUN ��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣
//
//����������
// 3485djDkxh4hhGE
// 2984akDfkkkkggEdsb
// s&hgsfdk
// d&Hyscvnm

//���������
// THU 14:04
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c >> d;
    string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "}; // Attention
    int flag = 0;
    for (int i = 0; i < a.length() && i < b.length(); i++)
    {
        if (a[i] == b[i] && a[i] >= 'A' && a[i] <= 'G' && flag == 0)
        {
            cout << week[a[i] - 'A'];
            flag = 1;
        }
        else if (a[i] == b[i] && flag == 1 && isdigit(a[i]))
        {
            printf("0%c:", a[i]);
            break;
        }
        else if (a[i] == b[i] && flag == 1 && a[i] >= 'A' && a[i] <= 'N')
        {
            printf("%d:", a[i] - 'A' + 10);
            break;
        }
    }
    for (int i = 0; i < c.length() && i < d.length(); i++)
    {
        if (c[i] == d[i] && isalpha(c[i]))
        {
            printf("%02d", i);
        }
    }
    return 0;
}
