#include <bits/stdc++.h>

using namespace std;

#define lop(a, n) for(int i = a; i < n; i++)

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;

		int a[n], b[n];

		lop(0, n) cin >> a[i];
		lop(0, n) cin >> b[i];

		sort(a, a + n);
		sort(b, b + n, greater <int> ());

		string res = "YES";

		lop(0, n) if (a[i] + b[i] > k) {
			res = "NO";
			break;
		}

		cout <<  res << '\n';
	}

	return 0;
}