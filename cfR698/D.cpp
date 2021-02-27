#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(b) for(int i = 0; i < b; i++)
#define loop(j, a, b) for(int j = a; j < b; j++)
#define yes cout << "yes\n"
#define no cout << "no\n"

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ll n, k;
		cin >> n >> k;

		ll a[n];
		lop(n) cin >> a[i];

		ll m = *min_element(a, a + n), gcd = 0;
		lop(n) gcd = a[i] == m ? gcd : __gcd(gcd, a[i] - m);

		(k - m) % gcd ? no : yes;
	}
}