#include <bits/stdc++.h>

using namespace std;

#define lop(a, n) for(int i = a; i < n; i++)

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int a, b, c, d;

		cin >> a >> b >> c >> d;

		cout <<  max(a + b, c + d) << '\n';
	}

	return 0;
}