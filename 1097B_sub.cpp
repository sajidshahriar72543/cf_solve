#include <bits/stdc++.h>

using namespace std;

const int N = 20, p = 360;
int ar[N], sum, n;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		sum += ar[i];
	}

	if (sum % p == 0)
	{
		cout << "Yes\n";
		return 0;
	}

	for (int i = 0; i < (1 << n); i++)
	{
		int x = 0;
		for (int j = 0; j < n; j++)
			if (i & (1 << j))
				x += ar[j];

		if (x == sum - x)
		{
			cout << "Yes\n";
			return 0;
		}
	}

	cout << "No\n";

	return 0;
}