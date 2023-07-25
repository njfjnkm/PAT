#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
// 	long cnt=0;
//     运行超时
// 	for(int i=0;i<a.length();i++)
// 	{
// 		if(a[i]=='P')
// 		{
// 			for(int j=i+1;j<a.length();j++)
// 			{
// 				int cnt1=0;
// 				if(a[j]=='A')
// 				for(int k=j+1;k<a.length();k++)
// 				{
// 					if(a[k]=='T')   cnt1++;
// 				}
// 				cnt+=cnt1;
// 			}
// 		}
// 	}
    
//     优化代码
    long cnt[3]={0};
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='T')    cnt[2]++;
    }
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='P')   cnt[1]++;
        else if(a[i]=='T')  cnt[2]--;
        else    cnt[0] += cnt[1] * cnt[2]  ;
    }
	printf("%d",cnt[0]%1000000007);
	return 0;
}

