#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define deb(x)          cout << #x << "=" << x << endl
#define deb2(x, y)      cout << #x << "=" << x << " , " << #y << "=" << y << endl
#define ld              long double

ld k;

ld f(ld d, ld e, ld f)
{
	ld s = (d + e + f) / 2.0;
	ld area = s * (s - d) * (s - e) * (s - f);
	return area;
}

ld ternary_search(ld a, ld b, ld c)
{
	ld l = a, r = a + k;

	for (int i = 0; i < 80; ++i)
	{
		ld m1 = ((2 * l) + r) / 3;
		ld m2 = (l + (2  * r)) / 3;

		ld f1 = f(m1, b, c);
		ld f2 = f(m2, b, c);

		// deb2(m1, m2); deb2(f1, f2); cout << '\n';

		if (f1 > f2)
			r = m2;
		else
			l = m1;
	}

	return f(l, b, c);
}

void solve()
{
	ld a, b, c;

	cin >> a >> b >> c >> k;

	ld res = max(f(a, b, c), ternary_search(a, b, c));
	res = max(res, ternary_search(b, a, c));
	res = max(res, ternary_search(c, b, a));

	cout << fixed << setprecision(12) << sqrt(res) << '\n';
}


int main()
{
	// freopen("sticks.in", "r", stdin);
	int t = 1;

	scanf("%d", &t);

	while (t--)
	{
		solve();
	}

	return 0;
}