#include <bits/stdc++.h>

using namespace std;

const int N = 20, p = 360;
int dp[N][N * 150], ar[N], sum, n, f = 0;

void fn(int pos, int sm)
{
	if (pos > n)
		return;

	if (dp[pos][sm] != -1)
		return;

	// cout << pos << ' ' << sm << ' ' << sum - sm << '\n';
	if (( (sum - 2 * sm) % p == 0))
	{
		//cout << sm << '\n';
		dp[pos][sm] = 1;
		f = 1;
		return;
	}

	dp[pos][sm] = 0;
	fn(pos + 1, sm);
	fn(pos + 1, sm + ar[pos]);
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		sum += ar[i];
	}

	if (sum % p == 0)
	{
		cout << "Yes\n";
		return 0;
	}

	memset(dp, -1, sizeof dp);

	// cout << sum << '\n';
	fn(0, 0);

	cout << (f ? "Yes\n" : "No\n");

	return 0;
}