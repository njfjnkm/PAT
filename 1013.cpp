// 1013 ������ (20 ��)
//�� P i��ʾ�� i �����������θ����������� M��N��10^4
//
//�����ʽ��
//������һ���и��� M �� N������Կո�ָ���
//
//�����ʽ��
//����� P ������������ÿ 10 ������ռ 1 �У�����Կո�ָ�������ĩ�����ж���ո�
//
//����������
// 5 27
//���������
// 11 13 17 19 23 29 31 37 41 43
// 47 53 59 61 67 71 73 79 83 89
// 97 101 103

#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int m, n, t = 2, cnt = 0;
    cin >> m >> n;
    while (true)
    {
        if (isprime(t))
        {
            cnt++;
            if (cnt >= m)
            {
                if (cnt == m || (cnt - m + 1) % 10 == 1)
                    cout << "";
                cout << t;
                if ((cnt - m + 1) % 10 == 0)
                    cout << '\n';
                else if (cnt != n)
                    cout << " ";
            }
            if (cnt >= n)
                break;
        }
        t++;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// bool isprime(int a)
// {
//     if(a<=1)    return false;
//     for(int i=2;i*i<=a;i++)//ע�⡤��i*i<=n������<
//     {
//         if(a%i==0)  return false;
//     }
//     return true;
// }
// int main()
// {
//     int m,n;
//     cin>>m>>n;
//     int cnt=0,num=0;
//     for(int i=2;;i++)
//     {
//         if(isprime(i))
//         {
//             cnt++;
//             if(cnt>=m&&cnt<=n)
//             {
//             	num++;
//                 if(num%10==0)   printf("\n");
//                 else if(num%10!=1)    printf(" ");
//                 printf("%d",i);
// //                 if(num%10==0)   printf("\n");
// //                 else    printf(" ");
//                 //���ں����������һ�ж�һ���ո�
//                 if(cnt==n)  break;
//             }
//         }
//     }
//     return 0;
// }
