#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
	ll n, k;
	cin >> n >> k;

	ll a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];

	ll mx[n], mn[n];
	mx[0] = a[0] + k, mn[0] = a[0];

	for (int i = 1; i < n; i++)
	{
		if (i < n - 1)
		{
			mn[i] = max(a[i], mn[i - 1] - k + 1);
			mn[i] = min(mn[i], a[i] + k - 1);

			mx[i] = min(mx[i - 1] + k - 1, a[i] + k - 1 + k);
		}
		else
		{
			mn[i] = a[i];
			mx[i] = a[i] + k;
		}

		if (mx[i] <= mn[i - 1] or mn[i] >= mx[i - 1])
		{
			no;
			return;
		}
		// cout << a[i] << ' ' << mn << ' ' << mx << endl;
	}

	yes;
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