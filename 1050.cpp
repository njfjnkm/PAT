//1050 �������� (25 ��)
//����Ҫ�󽫸����� N �����������ǵ�����˳�����롰�������󡱡�
//��ν���������󡱣���ָ�����Ͻǵ� 1 �����ӿ�ʼ����˳ʱ������������䡣
//Ҫ�����Ĺ�ģΪ m �� n �У�����������m��n ���� N��m��n���� m-n ȡ���п���ֵ�е���Сֵ��
//
//�����ʽ��
//�����ڵ� 1 ���и���һ�������� N���� 2 �и��� N �����������������������ֲ����� 10^4�����������Կո�ָ���
//
//�����ʽ��
//�����������ÿ�� n �����֣��� m �С����������� 1 ���ո�ָ�����ĩ�����ж���ո�
//
//����������
//12
//37 76 20 98 76 42 53 95 60 81 58 93
//���������
//98 95 93
//42 37 81
//53 20 76
//58 60 76

//��ϸ����
//    https://blog.csdn.net/liuchuo/article/details/52123209?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522164380345016780271969198%2522%252C%2522scm%2522%253A%252220140713.130102334.pc%255Fblog.%2522%257D&request_id=164380345016780271969198&biz_id=0&spm=1018.2226.3001.4450 
#include <iostream>
#include <algorithm>		//sort����
#include <cmath> 			//sqrt���� 
using namespace std;
bool cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++)
		scanf("%d",&a[i]);
	sort(a,a+N,cmp);	//a[]�Ӵ�С���У� ��Ϊcmp����������������˴Ӵ�С,sort Ĭ���Ǵ�?��?���е� 
	int n=(int)sqrt(N);				//��ƽ����sqrt������ԭ��Ϊ��double sqrt(double a) ,����a����sqrt�������Զ�ת��Ϊdouble 
	int m= N==n*n ?  n :n+1;
	int b[m][n];
	int level = m / 2 + m % 2;
	int t=0; 
	for (int i = 0; i < level; i++) 
	{
        for (int j = i; j <= n - 1 - i && t <= N - 1; j++)		//forѭ��1 
                b[i][j] = a[t++];
        for (int j = i + 1; j <= m - 2 - i && t <= N - 1; j++)	//forѭ��2 
                b[j][n - 1 - i] = a[t++];
        for (int j = n - i - 1; j >= i && t <= N - 1; j--)		//forѭ��3
                b[m - 1 - i][j] = a[t++];
        for (int j = m - 2 - i; j >= i + 1 && t <= N - 1; j--)	//forѭ��4 
                b[j][i] = a[t++];
    }
    for (int i = 0;i<m;i++) 
	{
        for (int j =0;j< n; j++) 
		{
            printf("%d", b[i][j]);
            if (j != n - 1)	 printf(" ");
        }
        printf("\n");
    }

	return 0;
}

