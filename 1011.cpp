//1011 A+B �� C
//�������� [-2^31,2^31] �ڵ� 3 ������ A��B �� C�����ж� A+B �Ƿ���� C��
//
//�����ʽ��
//����� 1 �и��������� T (��10)���ǲ��������ĸ����������� T �����������ÿ��ռһ�У�˳����� A��B �� C��
//�������Կո�ָ���
//
//�����ʽ��
//��ÿ�������������һ������� Case #X: true ��� A+B>C��������� Case #X: false��
//���� X �ǲ��������ı�ţ��� 1 ��ʼ����
//
//����������
//4
//1 2 3
//2 3 4
//2147483647 0 2147483646
//0 -2147483648 -2147483647
//���������
//Case #1: false
//Case #2: true
//Case #3: true
//Case #4: false
#include <stdio.h>  
int main(){
	int T;
	scanf("%d", &T);
	long long A[T],B[T],C[T];
	for (int i=0; i<T; i++)
	{
		scanf("%lld %lld %lld", &A[i], &B[i], &C[i]);
	}
	for(int i=0;i<T;i++)
	{
		if (A[i]+B[i]>C[i])
			printf("Case #%d: true\n", i+1);
		else 
			printf("Case #%d: false\n", i+1);
	} 
	return 0;
}
