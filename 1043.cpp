//1043 ���PATest (20 ��)
//����һ�����Ȳ����� 10^4�ġ�����Ӣ����ĸ���ɵ��ַ������뽫�ַ����µ���˳�򣬰� PATestPATest.... ������˳�������
//�����������ַ�����Ȼ�������ַ��ĸ�����һ����һ����ģ���ĳ���ַ��Ѿ�����꣬
//�����µ��ַ��԰� PATest ��˳���ӡ��ֱ�������ַ����������
//
//�����ʽ��
//������һ���и���һ�����Ȳ����� 10^4�ġ�����Ӣ����ĸ���ɵķǿ��ַ�����
//
//�����ʽ��
//��һ���а���ĿҪ������������ַ�������Ŀ��֤����ǿա�
//
//����������
//redlesPayBestPATTopTeePHPereatitAPPT
//���������
//PATestPATestPTetPTePePee
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//		char a[10005];
//		scanf("%s",a) ;
//		
//		int len=strlen(a);
//		int count[6]={0};
//		for(int i=0;i<len;i++)
//		{
//			if(a[i]=='P') count[0]++;
//			if(a[i]=='A') count[1]++;
//			if(a[i]=='T') count[2]++;
//			if(a[i]=='e') count[3]++;
//			if(a[i]=='s') count[4]++;
//			if(a[i]=='t') count[5]++;
//		}
//		while(1)
//		{
//			if(count[0]>0)	
//			{
//				printf("P");		//��Ϊif(count[0]-->0) 		printf("P");
//				count[0]--;						
//			}				
//			if(count[1]>0)		
//			{
//				printf("A");
//				count[1]--;
//			}
//			if(count[2]>0)	
//			{
//				printf("T");
//				count[2]--;
//			}
//			if(count[3]>0)	
//			{
//				printf("e");
//				count[3]--;
//			}
//			if(count[4]>0)	
//			{
//				printf("s");
//				count[4]--;
//			}
//			if(count[5]>0)	
//			{
//				printf("t");
//				count[5]--;
//			}
//			if(count[0]==0&&count[1]==0&&count[2]==0&&count[3]==0&&count[4]==0&&count[5]==0)
//			break;
//		}
//
//	return 0;
//}


#include <iostream>
using namespace std;
int main() 
{
  int count[128] = {0};		//��Ӧ128��ASCII�����ȷ�����ַ� 
  int c;
  while ((c = getchar()) !='\n') 	
  		count[c]++;
  while (count['P'] > 0 || count['A'] > 0 || count['T'] > 0 || count['e'] > 0 || count['s'] > 0 || count['t'] > 0) 
  {
	    if (count['P']-- > 0) cout << 'P';
	    if (count['A']-- > 0) cout << 'A';
	    if (count['T']-- > 0) cout << 'T';
	    if (count['e']-- > 0) cout << 'e';
	    if (count['s']-- > 0) cout << 's';
	    if (count['t']-- > 0) cout << 't';
  }
  return 0;
}

