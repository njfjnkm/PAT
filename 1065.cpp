// 法一：使用set集合
// #include <iostream>
// #include <map>
// #include <set>
// using namespace std;
// int main()
// {
// 	int n,m;
// 	cin>>n;
// 	map<int,int>a;
// 	for(int i=0;i<n;i++)
// 	{
// 		int t1,t2;
// 		cin>>t1>>t2;
// 		a[t1]=t2;
//         a[t2]=t1;
// 	}
// 	scanf("\n%d",&m);
// 	set<int>s,p;
// 	for(int i=0;i<m;i++)
// 	{
// 		int t; 
// 		scanf("%d",&t);
// 		s.insert(t);
// 	}
// 	for(auto it=s.begin();it!=s.end();it++)
// 	{
// 		if(s.find(a[*it])!=s.end())
// 			s.erase(a[*it]);
// 		else
// 			p.insert(*it);
// 	}
// 	cout<<p.size()<<endl;
//     if(p.size()!=0)
//     {
//         printf("%05d",*p.begin());
//         for(auto it=++p.begin();it!=p.end();it++)
// 			printf(" %05d",*it);
//     }
// 	return 0;
// }

// 法二：使用vector
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	map<int,int>a;
	for(int i=0;i<n;i++)
	{
		int t1,t2;
		cin>>t1>>t2;
		a[t1]=t2;
        a[t2]=t1;
	}
	scanf("\n%d",&m);
	set<int>s;
	int t;
	for(int i=0;i<m;i++)
	{
		scanf("%d",&t);
		s.insert(t);
	}
	vector<int>p;
	for(auto it=s.begin();it!=s.end();it++)
	{
		if(s.find(a[*it])!=s.end())
			s.erase(a[*it]);
		else
			p.push_back(*it);
	}
	sort(p.begin(),p.end());
	cout<<p.size()<<endl;
    if(p.size()!=0)
    {
        printf("%05d",p[0]);
        for(int i=1;i<p.size();i++)
		printf(" %05d",p[i]);
    }
	return 0;
}

