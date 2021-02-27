#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		ll n, k;
		cin >> n >> k;

		string s, res(n, 49);
		cin >> s;

		ll i = 0, o = 0;
		while (s[i] == 48) res[i] = 48, i++;
		n--;
		while (s[n] == 49) n--;

		for (; i <= n; i++)
		{
			int j = i;
			for (; j < n; j++)
			{
				if (s[j] == 49)
					o++;
				else
					break;
			}

			if (o)
			{
				ll z = min(k, o);
				res[j - z] = 48;
				k -= z;
			}

			i = j;
		}

		cout << res << '\n';
	}
}