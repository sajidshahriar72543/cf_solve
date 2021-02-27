#include<bits/stdc++.h>

using namespace std;

#define int long long

int n;

char ask(int x)
{
	char ch;
	// cout << x << '-';
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

void solve()
{
	cin >> n;

	vector <int> valid;
	set <int> st;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j++)
			st.insert(i * j);

	for (auto &z : st)
		valid.push_back(z);

	int lo = 0, hi = ((int) valid.size()) - 1, m;

	while (lo <= hi)
	{
		m = (lo + hi) / 2;

		char ch = ask(valid[m]);
		if (ch == '>')
			hi = m - 1;
		else if (ch == '<')
			lo = m + 1;
		else
		{
			cout << ch << " " << valid[m] << endl;
			return;
		}
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}
