// 1023 �����С�� (20 ��)
//�������� 0-9 �����ɸ��������������˳��������Щ���֣�������ȫ��ʹ�á�
//Ŀ����ʹ�����õ�����������С��ע�� 0 ��������λ����
//���磺�������� 0������ 1������ 5��һ�� 8�����ǵõ�����С�������� 10015558��
//
//�ָ������֣����д��������ܹ���ɵ���С������
//
//�����ʽ��
//������һ���и��� 10 ���Ǹ�������˳���ʾ����ӵ������ 0������ 1���������� 9 �ĸ�����
//��������һ���ո�ָ���10 �����ֵ��ܸ��������� 50��������ӵ�� 1 ���� 0 �����֡�
//
//�����ʽ��
//��һ��������ܹ���ɵ���С������
//
//����������
// 2 2 0 0 0 3 0 0 1 0
//���������
// 10015558

//������������0������1����������9�ĸ����ֱ𱣴�������a[i]�У�
//��Ϊ0��������λ���������Ƚ�i��1��9�����һ��a[i]��Ϊ0������i������a[i]--;
//��� i �� 0 �� 9 ��� a[i] �� i ��
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (int i = 1;; i++)
	{
		if (a[i] != 0)
		{
			printf("%d", i);
			a[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] != 0)
		{
			for (int j = 0; j < a[i]; j++)
			{
				printf("%d", i);
			}
		}
	}

	return 0;
}