//1026 ��������ʱ�� (15 ��)
//Ҫ���һ�� C ���Գ��������ʱ�䣬���õķ����ǵ���ͷ�ļ� time.h�������ṩ�� clock() ������
//���Բ�׽�ӳ���ʼ���е� clock() ������ʱ���ķѵ�ʱ�䡣���ʱ�䵥λ�� clock tick������ʱ�Ӵ�㡱��
//ͬʱ����һ������ CLK_TCK�������˻���ʱ��ÿ�����ߵ�ʱ�Ӵ����������Ϊ�˻��һ������ f ������ʱ�䣬
//����ֻҪ�ڵ��� f ֮ǰ�ȵ��� clock()�����һ��ʱ�Ӵ���� C1��
//�� f ִ����ɺ��ٵ��� clock()�������һ��ʱ�Ӵ���� C2��
//���λ�õ�ʱ�Ӵ����֮�� (C2-C1) ���� f ���������ĵ�ʱ�Ӵ�������ٳ��Գ��� CLK_TCK���͵õ�������Ϊ��λ������ʱ�䡣
//
//���ﲻ���򵥼��賣�� CLK_TCK Ϊ 100���ָ������⺯��ǰ�����λ�õ�ʱ�Ӵ����������������⺯�����е�ʱ�䡣
//
//�����ʽ��
//������һ����˳����� 2 ������ C1 �� C2��ע�����λ�õ�ʱ�Ӵ�����϶�����ͬ���� C1 < C2������ȡֵ�� [0,10^7]��
//
//�����ʽ��
//��һ����������⺯�����е�ʱ�䡣����ʱ����밴�� hh:mm:ss����2λ�� ʱ:��:�룩��ʽ��������� 1 ���ʱ���������뵽�롣
//
//����������
//123 4577973
//���������
//12:42:59

#include <stdio.h>
int main()
{
	int c1,c2;
	scanf("%d %d",&c1,&c2);
	int t=(int) ((c2-c1)/100.0+0.5);
	int h=t/3600;
	t%=3600;
	int m=t/60;
	int s=t%60;
	printf("%02d:%02d:%02d",h,m,s);
	
	
	
	return 0;
}