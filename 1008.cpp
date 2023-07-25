//1007 素数对猜想 (20 分)

#include <iostream>
#include <vector>
using namespace std;
bool isprime(int n)
{
    if(n<=1)    return false;
    for(int i=2;i*i<n;i++)
        if(n%i==0)  return false;
    return true;
}
int main()
{
	int n;
    cin>>n;
    vector<int> a;
    for(int i=2;i<n;i++)
        if(isprime(i))  a.push_back(i);
    int cnt=0;
    for(int i=1;i<a.size();i++)
        if(a[i]-a[i-1]==2)      cnt++;
    cout<<cnt;
	return 0;
}

