#include<bits/stdc++.h>

using namespace std;

#define no {cout << "NO\n"; return 0;}
#define yes {cout << "YES\n"; return 0;}

int main()
{
	int n, m;
	string a, b;

	cin >> a >> b;

	n = a.size(), m = b.size();

	if(n != m) no;

	int ca[26] = {0}, cb[26] = {0};

	for(int i = 0; i < n; i++)
	{
		ca[a[i] - 'a']++;
		cb[b[i] - 'a']++;
	}

	for(int i = 0; i < 26; i++)
		if(ca[i] != cb[i])
			no;

	int x = 0;
	for(int i = 0; i < n; i++)
		if(a[i] != b[i])
			x++;

	if(x != 2)
		no;

	yes;
}