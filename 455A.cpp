#include<bits/stdc++.h>

using namespace std;

#define ll long long

const ll N = 1e5+5;
ll dp[N], cnt[N], n, ara;

ll f(int k)
{
	if(k >= N)
		return 0;

	if(dp[k] != -1)
		return dp[k];

	dp[k] = max(f(k + 1), (k * cnt[k]) + f(k + 2));

	//cout << k << ' ' << dp[k] << '\n'; 

	return dp[k];
}

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> ara;
		cnt[ara]++;
	}

	memset(dp, -1, sizeof dp);

	cout << f(0);

	return 0;
}