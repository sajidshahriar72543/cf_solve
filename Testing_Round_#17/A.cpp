#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, c[3] = {0};

	cin >> n;

	int a;

	for(int i = 0; i < n; i++)
		cin >> a, c[--a]++;

	sort(c, c + 3);

	cout << n - c[2] << '\n';
}