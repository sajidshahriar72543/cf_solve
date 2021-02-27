#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll a, b, c, n, ans = 0;

	cin >> n;

	for(a = 1; a <= n; a++)
	{
		for(b = a; b <= n; b++)
		{
			c = (a * a) + (b * b);

			if(c > n * n)
				break;
			
			if(ceil(sqrt(c)) == sqrt(c))
				ans++;

			//cout << a  << ' ' << b << ' ' << sqrt(c) << ' ' << c << endl;
		}
	}

	cout << ans;

	return 0;
}