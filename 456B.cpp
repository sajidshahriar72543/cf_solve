#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	if (s.back() % 2)
		cout << 0;
	else
	{
		int n = s.size();
		int x = s.back();
		if (n > 1) x += s[n - 2];

		if (x % 2)
		{
			if ((s.back() / 2) % 2)
				cout << 4;
			else
				cout << 0;
		}
		else
		{
			if ((s.back() / 2) % 2)
				cout << 0;
			else
				cout << 4;
		}
	}

	return 0;
}