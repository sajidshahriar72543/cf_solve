#include <bits/stdc++.h>

using namespace std;

#define lop(a, n) for(int i = a; i < n; i++)
typedef long long ll;

vector <int> factor;

void factorise(ll n)
{
	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			factor.push_back(i);
			if (i != n / i)
				factor.push_back(n / i);;
		}
	}

	factor.push_back(n);
}

int main()
{
	int t; cin >> t;

	while (t--)
	{
		ll p, q;

		cin >> p >> q;

		ll ans;

		if (p % q) ans = p;
		else
		{
			factorise(q);
			ans = 1;

			for (auto &z : factor)
			{
				ll x = p;

				while (x % z == 0) {
					x /= z;
					if (x % q) {
						ans = max(ans, x);
						break;
					}
				}
			}
		}

		cout <<  ans << '\n';
		factor.clear();
	}

	return 0;
}