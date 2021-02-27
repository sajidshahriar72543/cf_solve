#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int n, k;

	cin >> s >> k;
	n = s.size();

	for(int i = 0; i < n and k; i++)
	{
		char p = s[i];
		int q = i;
		for(int j = i + 1; j < n; j++)
		{
			if(s[j] > p and j - i <= k)
			{
				p = s[j];
				q = j;
			}
		}
		
		for(int j = q; j > i; j--)
		{
			swap(s[j], s[j - 1]);
			k--;
		}
	}

	cout << s;
}
