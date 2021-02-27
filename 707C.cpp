#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll a;
	cin >> a;

	if (a <= 2)
	{
		cout << -1 << '\n';
		return 0;
	}

	if (a & 1)
	{
		ll b = ((a * a) - 1) / 2;
		ll x = ((a * a) + 1) / 2;

		cout << b << ' ' << x << '\n';
	}
	else
	{
		ll b = ((a * a) / 4) - 1;
		ll x = ((a * a) / 4) + 1;

		cout << b << ' ' << x << '\n';
	}
}