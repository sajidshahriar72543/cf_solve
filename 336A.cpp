#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ll x, y, a, b, p, m, n;
	a = b = m = n = 0;

	cin >> x >> y;
	p = abs(x) + abs(y);

	if (x > 0 and y > 0)
		m = b = p;
	else if (x < 0 and y > 0)
		a = -p, n = p;
	else if (x > 0 and y < 0)
		m = p, b = -p;
	else
		a = n = -p;

	printf("%lld %lld %lld %lld\n", a, b, m, n);

	return 0;
}