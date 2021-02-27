#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int n = s.size();

	int p = 0;
	for (auto &z : s)
	{
		if (z > '1')
			break;
		p++;
	}
	for (int i = p; i < n; i++)
		s[i] = '1';

	long long ans = 0, k = 1;
	while (n--)
	{
		ans += k * (s[n] - '0');
		k *= 2;
	}

	cout << ans << '\n';

	return 0;
}