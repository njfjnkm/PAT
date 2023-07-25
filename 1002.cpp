// 1010 一元多项式求导 (25 分)
#include <stdio.h>
int main()
{
	char c;
	int a[1000];
	int n = 0;
	do
	{
		scanf("%d", &a[n++]);
	} while ((c = getchar()) != '\n');
	for (int i = 0; i < n; i += 2)
	{
		a[i] = a[i] * a[i + 1];
		a[i + 1] = a[i + 1] - 1;
	}
	for (int i = 2; i < n; i += 2)
	{
		if (a[i] == 0 && a[i + 1] == -1)
			break;
		else
			printf("%d %d ", a[i], a[i + 1]);
	}

	return 0;
}
