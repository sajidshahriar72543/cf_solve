#include <bits/stdc++.h>

using namespace std;

int sq(int n)
{
	return n * n;
}

int main()
{
	int n; cin >> n;
	int b = sq(n);
	bool taken[b + 1] = {0};

	int c = (n * (b + 1)) / 2;
	int p = 1, q = b;

	for (int i = 1; i <= n; i++)
	{
		for (int i = 1; i <= n / 2; i++)
			cout << p++ << ' ' << q-- << ' ';
		cout << '\n';
	}

	return 0;
}