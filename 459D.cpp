#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

const int N = 1e6 + 5;
int n, a[N], pre[N], suf[N], bit[N];

void edit(int pos)
{
	while (pos <= n)
	{
		bit[pos] += 1;
		pos += pos & -pos;
	}
}

ll sum(int pos)
{
	ll s = 0;
	while (pos)
	{
		s += bit[pos];
		pos -= pos & -pos;
	}

	return s;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	lop(n) cin >> a[i];

	map <int, int> cnt;
	lop(n) pre[i + 1] = ++cnt[a[i]];
	cnt.clear();
	for (int i = n; i; i--)
		suf[i] = ++cnt[a[i - 1]];

	ll ans = 0;
	for (int i = n; i; i--)
	{
		ans += sum(pre[i] - 1);
		edit(suf[i]);
	}

	cout << ans << '\n';

	return 0;
}