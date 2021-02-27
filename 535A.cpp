#include <bits/stdc++.h>

using namespace std;

string one[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string eleven[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string two[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

string solve()
{
	int n;
	cin >> n;

	if (n < 10)
		return one[n];

	if (n < 20)
		return eleven[n - 10];

	if (!(n % 10))
		return two[n / 10];

	string res;
	res += two[n / 10];
	res += "-";
	res += one[n % 10];

	return res;
}

int main()
{
	cout << solve();
}