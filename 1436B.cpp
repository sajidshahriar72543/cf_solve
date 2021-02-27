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

	int tt, n, m;

	cin >> tt;

	while (tt--)
	{
		cin >> n;

		deque <int> v;
		v.push_back(1);
		v. push_back(1);

		for (int i = 0; i < n - 2; i++)
			v.push_back(0);

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cout << v[j] << ' ';
			cout << endl;

			int z = v.back();
			v.pop_back();
			v.push_front(z);
		}
	}


#ifndef ONLINE_JUDGE
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cout << "\nTime: " << duration.count() << "ms" << endl;
#endif

	return 0;
}