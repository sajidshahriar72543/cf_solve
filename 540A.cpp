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

	int n, s = 0, x, z, p;
	string a, b;

	cin >> n >> a >> b;

	for (int i = 0; i < n; ++i)
	{
		x = a[i] - '0';
		z = b[i] - '0';
		p = abs(x - z);
		s += min(p, 10 - p);
	}

	cout << s << endl;

#ifndef ONLINE_JUDGE
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cout << "\nTime: " << duration.count() << "ms" << endl;
#endif

	return 0;
}