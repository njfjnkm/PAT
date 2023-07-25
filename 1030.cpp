#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

	int n, p;
	cin >> n >> p;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + cnt; j < n; j++)
			if (a[j] <= a[i] * p)
			{
				if (cnt < j - i + 1)
					cnt = j - i + 1;
			}
			else
				break;
	}
	cout << cnt;
	return 0;
}