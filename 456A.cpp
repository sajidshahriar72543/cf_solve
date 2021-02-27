#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	pair <int, int> lptp[n];
	for (auto &z : lptp) cin >> z.first >> z.second;

	sort(lptp, lptp + n);
	for (int i = 0; i < n - 1; i ++)
	{
		if (lptp[i].second > lptp[i + 1].second)
		{
			cout << "Happy Alex";
			return 0;
		}
	}

	cout << "Poor Alex";
	return 0;
}