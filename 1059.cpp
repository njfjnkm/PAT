//1059 C���Ծ��� (20 ��)
//C ���Ծ������㽭��ѧ�����ѧԺ���ֵ�һ�����ֵľ�������Ȼ������ּ��Ϊ�˺��棬�佱����Ҳ���ƶ��úܻ�����
//
//0���ھ���Ӯ��һ�ݡ����ش󽱡�������ܾ޴��һ��ѧ���о����ļ���������
//1������Ϊ������ѧ����Ӯ����õĽ�Ʒ ���� С������ż��
//2�������˽��õ��ɿ�����
//�������������������Լ�һϵ�в����ߵ� ID����Ҫ������Щ������Ӧ�û�õĽ�Ʒ��
//
//�����ʽ��
//�����һ�и���һ�������� N����10 
//4
// �����ǲ�������������� N �и�������������ÿ�а�����˳�����һλ�����ߵ� ID��4 λ������ɣ�������������һ�������� K �Լ� K ����Ҫ��ѯ�� ID��
//
//�����ʽ��
//��ÿ��Ҫ��ѯ�� ID����һ������� ID: ��Ʒ�����н�Ʒ������ Mystery Award�����ش󽱣��������� Minion��С���ˣ��������� Chocolate���ɿ�������������� ID ���������������ӡ Are you kidding?��ˣ���أ���������� ID �Ѿ�����ˣ�����Ʒ�Ѿ�����ˣ�����ӡ ID: Checked�����ܶ�Զ�ռ����
//
//����������
//6
//1111
//6666
//8888
//1234
//5555
//0001
//6
//8888
//0001
//1111
//2222
//8888
//2222
//���������
//8888: Minion
//0001: Chocolate
//1111: Mystery Award
//2222: Are you kidding?
//8888: Checked
//2222: Are you kidding?
#include <stdio.h>
int isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n) ;
	int id[10001]={0};
	int flag[10001]={0};
	for(int i=1;i<=n;i++)
	{
		int t;
		scanf("%d",&t);		//0001����t��1�� 
		id[t]=i;
	}
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		int t;
		scanf("%d",&t);
		if(id[t]==0)
		{
			printf("%04d: Are you kidding?\n",t);
			flag[t]=1;
			continue;
		}
		if(flag[t]==1)
		{
			printf("%04d: Checked\n",t);
			flag[t]=1;
			continue;
		}
		if(id[t]==1)
		{
			printf("%04d: Mystery Award\n",t);
			flag[t]=1;
			continue; 
		}
		if(isprime(id[t])==1&&id[t]>=2)		
		{
			printf("%04d: Minion\n",t);
			flag[t]=1;
			continue;
		}
			printf("%04d: Chocolate\n",t);
			flag[t]=1;
	}
	
	return 0;
}

