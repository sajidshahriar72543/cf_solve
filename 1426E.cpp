#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n, a[3], b[3], mx, mn;

	cin >>  n;

	for (int i = 0; i < 3; i++)
		cin >> a[i];
	for (int i = 0; i < 3; i++)
		cin >> b[i];

	mx = min(a[0], b[1]) + min(a[1], b[2]) + min(a[2], b[0]);

	mn = max(0LL, a[0] - (b[2] + b[0]));
	mn += max(0LL, a[1] - (b[0] + b[1]));
	mn += max(0LL, a[2] - (b[1] + b[2]));

	cout << mn << ' ' << mx;

	return 0;
}