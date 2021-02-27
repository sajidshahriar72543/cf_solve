#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a, c[8] = {0};
	for(int i = 0; i < n; i++) cin >> a, c[a]++;

	for(int i = 1; i < 8; i++)
		if(c[i] > n / 3)
		{
			cout << -1 << endl;
			return 0;
		}

	int lst[n / 3][3], k = 0;
	memset(lst, -1, sizeof lst);
	

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < n / 3; j++)
		{
			for(int k = 1; k < 8; k++)
			{
				if(c[k] and !i)
				{
					lst[j][i] = k;
					c[k]--;
					break;
				}
				else if(c[k] and i and k % lst[j][i - 1] == 0)
				{
					lst[j][i] = k;
					c[k]--;
					break;
				}
			}
		}
	}

	for(int i = 0; i < n / 3; i++)
		for(int j = 1; j < 3; j++)
			if(lst[i][j] == -1)
			{
				cout << -1 << endl;
				return 0;
			}

	for(int i = 0; i < n / 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << lst[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}

