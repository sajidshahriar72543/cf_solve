#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a > b) swap(a, b);
	vector <int> div;

	for (int i = 1; i * i <= a; i++)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
				div.push_back(i);
			if (i != a / i and b % (a / i) == 0)
				div.push_back(a / i);
		}
	}
	sort(div.begin(), div.end());

	int q;
	cin >> q;
	while (q--)
	{
		cin >> a >> b;

		int i = upper_bound(div.begin(), div.end(), b) - div.begin();
		i--;

		if (div[i] < a) cout << -1 << '\n';
		else cout << div[i] << '\n';
	}

	return 0;
}