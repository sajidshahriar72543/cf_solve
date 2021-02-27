#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main(int argc, char const *argv[])
{
	int n, q;
	cin >> n >> q;

	ll a[n], b[n + 3] = {0};
	lop(n) cin >> a[i];

	lop(q)
	{
		int l, r;
		cin >> l >> r;

		b[l - 1]++;
		b[r]--;
	}
	loop(i, 1, n) b[i] += b[i - 1];

	sort(b, b + n, greater <ll> ());
	sort(a, a + n, greater <ll> ());

	ll ans = 0;
	lop(n) ans += a[i] * b[i];

	cout << ans << '\n';

	return 0;
}