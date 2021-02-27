#include<bits/stdc++.h>

using namespace std;

int n;

char ask(int x)
{
	char ch;
	cout << x << '-';
	for (int i = 1; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			int j = x / i;
			if (i <= n and j <= n)
			{
				cout << "? " << i << ' ' << j << endl;

				cin >> ch;
				break;
			}
		}
	}

	return ch;
}

char ask2(int x, int y)
{
	cout << "? " << x << ' ' << y << '\n';

	char ch;
	cin >> ch;
	return ch;
}

bool valid(int x)
{
	for (int i = 1; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			int j = x / i;
			if (i <= n and j <= n)
				return 1;
		}
	}
	return 0;
}

void solve()
{
	cin >> n;

	int lo = 1, hi = n, m;
	while (hi - lo > 1)
	{
		m = (lo + hi) / 2;

		char ch = ask2(m, n);
		if (ch == '=')
		{
			cout << ch << " " << m * n << endl;
			return;
		}

		if (ch == '<')
			lo = m;
		else
			hi = m;
	}

	vector <int> val;

	for (int i = lo * n; i <= hi * n; i++)
		if (valid(i))
			val.push_back(i);

	lo = 0, hi = ((int) val.size()) - 1, m;

	while (lo <= hi)
	{
		m = (lo + hi) / 2;

		char ch = ask(val[m]);
		if (ch == '>')
			hi = m - 1;
		else if (ch == '<')
			lo = m + 1;
		else
		{
			cout << ch << " " << val[m] << endl;
			return;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}
