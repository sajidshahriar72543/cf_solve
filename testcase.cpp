#include <bits/stdc++.h>
using namespace std;

const int X = 1e3+1, Y = 1e8+1;

int main()
{
	freopen("input.txt", "w", stdout);

	int t = 1000;
	cout << t << '\n';

	while (t--)
	{
		int n = 1000;
		cout << n << '\n';
		int a[n], b[n], c[n];

		for (int i = 0; i < n; i++)
		{
			int x = rand() % Y;
			a[i] = x;
		}

		b[0] = c[0] = a[0];

		for(int i = 1; i < n; i++)
		{
			b[i] = max(b[i - 1], a[i]);
			c[i] = min(c[i - 1], a[i]);
		}

		for (int i = 0; i < n; i++)
			cout << b[i] << (i < n - 1 ? ' ' : '\n');
		for (int i = 0; i < n; i++)
			cout << c[i] << (i < n - 1 ? ' ' : '\n');
		
	}

	return 0;
}