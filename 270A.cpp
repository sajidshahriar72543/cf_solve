#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string res = "NO\n";

		int a;
		cin >> a;

		for (int n = 3; n <= 360; n++)
			if ((180 * (double) (n - 2)) / n == (double) a)
			{
				res = "YES\n";
				break;
			}

		cout << res;
	}

	return 0;
}