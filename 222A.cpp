#include <bits/stdc++.h>

using namespace std;

#define close(x) {cout << x; return 0;}

int main()
{
	int n, k;

	cin >> n >> k;

	int a[n + 1];
	for(int i = 1; i <= n; i++)
		cin >> a[i];

	for(int i = k + 1; i <= n; i++)
		if(a[i] != a[k]) close(-1);

	int x = 0;
	for(int i = 1; i < k; i++)
		if(a[i] != a[k])
			x = i;

	close(x);
}
