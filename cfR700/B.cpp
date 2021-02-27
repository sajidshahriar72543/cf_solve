#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ff              first
#define ss              second

struct mons
{
	ll h, d, tt, cnt;

	bool operator < (const mons &b) const
	{
		if (d == b.d)
			return cnt > b.cnt;
		return d < b.d;
	}
};

void solve();

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//freopen("input.txt", "r", stdin)

	int test = 1;

	cin >> test;

	while (test--)
	{
		solve();
	}

	return 0;
}

void solve()
{
	ll A, B, n;

	cin >> A >> B >> n;

	mons mnt[n];
	lop(n) cin >> mnt[i].d;
	lop(n)
	{
		cin >> mnt[i].h;
		ll x = (mnt[i].h + A - 1) / A;
		mnt[i].tt = x * mnt[i].d;
		mnt[i].cnt = x;
	}

	sort(mnt, mnt + n);

	// lop(n) cout << mnt[i].h << ' ' << mnt[i].d << ' ' << mnt[i].cnt << ' ' << mnt[i].tt << '\n';

	lop(n)
	{
		B -= mnt[i].tt;

		if (B <= 0)
		{
			if (i == n - 1 and B > -mnt[i].d)
				yes;
			else
			{
				// cout << B << ' ' << i << ' ' << mnt[i].d << ' ';
				no;
			}
			return;
		}
	}

	yes;
	return;
}