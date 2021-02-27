#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

typedef long long ll;

int main()
{
#ifndef ONLINE_JUDGE
	auto start = high_resolution_clock::now();
	freopen("/home/rifat/input.txt", "r", stdin);
	freopen("/home/rifat/output.txt", "w", stdout);
#endif

	ll tt, n, m;

	cin >> tt;

	while (tt--)
	{
		cin >> n >> m;

		int a, c = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> a;
			c += a;
		}

		cout << (c == m ? "YES" : "NO") << '\n';
	}


#ifndef ONLINE_JUDGE
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cout << "\nTime: " << duration.count() << "ms" << endl;
#endif

	return 0;
}