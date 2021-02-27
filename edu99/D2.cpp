#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int solve();

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//freopen("input.txt", "r", stdin)

	int test;

	cin >> test;

	while (test--)
	{
		cout << solve() << '\n';
	}

	return 0;
}

int solve()
{
	int n, x;
	cin >> n >> x;

	int a[n + 3];
	lop(n) cin >> a[i];

	if (n == 1 or is_sorted(a, a + n))
		return 0;

	int ans = 0;
	lop(n)
	{
		if (a[i] > x)
			swap(a[i], x), ans++;

		if (is_sorted(a, a + n))
			return ans;
	}

	return -1;
}