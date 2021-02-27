#include <bits/stdc++.h>

using namespace std;
#define dl double

dl sqr(dl x)
{
	return x * x;
}

dl dis(dl x1, dl y1, dl x2, dl y2)
{
	return sqrt(sqr(x2 - x1) + sqr(y2 - y1));
}

int main(int argc, char const *argv[])
{
	int n, ans;
	dl vs, vb;
	cin >> n >> vb >> vs;

	dl a[n + 3] = {0};
	for (int i = 0; i < n; i++)
		cin >> a[i];

	dl ux, uy, qq = 1e7;
	cin >> ux >> uy;

	for (int i = 1; i < n; i++)
	{
		dl pp = (a[i] / vb) + (dis(a[i], 0.0, ux, uy) / vs);
		if (pp < qq)
		{
			qq = pp;
			ans = i;
		}
		else if (pp == qq)
		{
			if (dis(a[i], 0.0, ux, uy) <= dis(a[ans], 0.0, ux, uy))
				ans  = i;
		}

		// cout << i << ' ' << (a[i] / vb) + (dis(a[i], 0.0, ux, uy) / vs) << ' ' << dis(a[i], 0.0, ux, uy) << ' ' << ans << '\n';
	}

	cout << ++ans << '\n';

	return 0;
}