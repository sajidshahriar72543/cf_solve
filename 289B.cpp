#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

typedef long long ll;

const int N = 1e4 + 4;

int main()
{
#ifndef ONLINE_JUDGE
	auto start = high_resolution_clock::now();
	freopen("/home/rifat/input.txt", "r", stdin);
	freopen("/home/rifat/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m, d;
	cin >> n >> m >> d;
	int nm = n * m;

	int a[nm], mv[N];

	for (int i = 0; i < nm; ++i)
		cin >> a[i];

	sort(a, a + nm);
	int ans;

	for (int i = 0; i < N; ++i)
		mv[i] = N * N;

	for (int i = 0; i < nm; i++)
	{
		int x = 0, z = a[i];
		for (int j = 0; j < nm; j++)
		{
			int p = abs(z - a[j]);
			if (p % d)
			{
				x = N * N;
				break;
			}

			x += p / d;
		}
		mv[z] = x;
	}

	ans = *min_element(mv, mv + N);

	cout << (ans != N * N ? ans : -1) << '\n';


#ifndef ONLINE_JUDGE
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cout << "\nTime: " << duration.count() << "ms" << endl;
#endif

	return 0;
}