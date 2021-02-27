#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ff first
#define ss second

int main()
{
	int n;

	cin >> n;

	map <ll, ll> mp;

	for(int i = 0; i < n; i++)
	{
		int b, d;

		cin >> b >> d;

		mp[b]++;
		mp[d]--;
	}

	ll x, y;

	auto it = mp.begin();
	y = it -> ss, x = it -> ff;
	it++;

	for(; it != mp.end(); it++)
	{
		auto it2 = it;
		it2--;

		it -> ss += it2 -> ss;
	}

	for(auto it = mp.begin(); it != mp.end(); it++)
	{
		if(it -> ss > y)
			y = it -> ss, x = it -> ff;
	}

	cout << x << ' ' << y << endl;

	return 0;
}