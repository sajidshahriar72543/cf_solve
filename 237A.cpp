#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, a, b;
	map <pair<int, int>, int> mp;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a >> b;
		mp[{a, b}]++;
	}

	int c = 0;
	for(auto it = mp.begin(); it != mp.end(); it++)
		c = max(c, it -> second);
	
	cout << c << endl;
	return 0;
}
