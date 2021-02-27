#include <bits/stdc++.h>

using namespace std;

int removed(int a)
{
	vector <int> v;

	while (a)
	{
		int p = a % 10;
		if (p) v.push_back(p);
		a /= 10;
	}
	reverse(v.begin(), v.end());

	int i = -1;
	while (++i < v.size())
	{
		a *= 10;
		a += v[i];
	}

	return a;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << (removed(a) + removed(b) == removed(a + b) ? "YES" : "NO");

	return 0;
}