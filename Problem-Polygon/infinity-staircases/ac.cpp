#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		n--;
		int ans = (n / 5) * 2;
		n %= 5;

		if (n)
			ans += n <= 3 ? 1 : 2;

		cout << ans << '\n';
	}

	return 0;
}