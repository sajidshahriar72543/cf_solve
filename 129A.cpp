#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a, od, ev;
	od = ev = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		a % 2 ? od++ : ev++;
	}

	cout << (od % 2 ? od : ev) << '\n';

	return 0;
}