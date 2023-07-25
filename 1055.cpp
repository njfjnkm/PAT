#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct node
{
	string name;
	int height;
};
int cmp(struct node a,struct node b)
{
	return a.height!=b.height ? a.height>b.height : a.name < b.name;
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<node>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i].name>>a[i].height;
	sort(a.begin(),a.end(),cmp);
	int m;
	for(int row=k,t=0;row>0;row--,t+=m)
	{
		if(row==k)		
			m=n-n/k*(k-1);
		else 			
			m=n/k;
		vector<string>ans(m);
		ans[m/2] = a[t].name;
		int j=m/2-1;
		for(int i=t+1;i<t+m;i+=2)
			ans[j--]=a[i].name;
		j=m/2+1;
		for(int i=t+2;i<t+m;i+=2)
			ans[j++]=a[i].name;
		for(int i=0;i<m-1;i++)
			cout<<ans[i]<<" ";
		cout<<ans[m-1]<<endl;
	} 
	return 0;
}

