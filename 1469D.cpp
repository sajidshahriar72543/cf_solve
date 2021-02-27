#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
	int n;
	cin >> n;

	vector <pair<int, int>> ans;
	if (n <= 12)
	{
		for (int i = 3; i < n; i++)
			ans.push_back({i, n});
		int m = n;
		while (m > 1)
			ans.push_back({n, 2}), m = (m + 1) / 2;
	}
	else
	{
		for (int i = 3; i < n; i++)
		{
			if (i == 12)
				continue;
			ans.push_back({i, n});
		}

		int m = n;
		while (m > 1)
			ans.push_back({n, 12}), m = (m + 11) / 12;
		m = 12;
		while (m > 1)
			ans.push_back({12, 2}), m = (m + 1) / 2;
	}

	cout << ans.size() << '\n';
	for (auto &z : ans)
		cout << z.first << ' ' << z.second << '\n';
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}