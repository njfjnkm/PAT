#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long double t,sum=0.0;
	for(int i=0;i<n;i++)
	{
        cin>>t;
		sum+=t*(i+1)*(n-i);
	}
	printf("%.2llf",sum); 
  	return 0;
}

