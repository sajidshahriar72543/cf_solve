#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string s, t, r = "YES";
	int c[125] = {0};

	getline(cin, s);
	getline(cin, t);

	for(int i = 0; i < s.size(); i++)
		c[s[i]]++;
	for(int i = 0; i < t.size(); i++)
		c[t[i]]--;
	for(int i = 60; i < 125; i++) 
		if(c[i] < 0)
			r = "NO";

	cout << r << endl;

	return 0;
}