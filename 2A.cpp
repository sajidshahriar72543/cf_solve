#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll N = 2e4, mod = 17389, base = 27;
ll pt[N];
string ret[N];

ll Hash(string s)
{
	ll n = (ll) s.size(), x = 0LL;

	for (ll i = 0; i < n; i++)
		x = ((x * base) + (s[i] - 96)) % mod;

	return x;
}

int main()
{
	ll n, k, mx = 0;
	string nm, ans;
	vector <pair<ll, ll>> v;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> nm >> k;
		ll x = Hash(nm);
		ret[x] = nm;
		pt[x] += k;

		v.push_back({x, pt[x]});
	}

	for (int i = 0; i < N; i++)
		mx = max(mx, pt[i]);

	for (auto &z : v)
	{
		if (mx <= z.second and pt[z.first] == mx)
		{
			ans = ret[z.first];
			break;
		}
	}

	cout << ans << '\n';

	return 0;
}