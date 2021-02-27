#include<bits/stdc++.h>

using namespace std;

int ask(int a, int b)
{
	cout << "? " << a << ' ' << b << endl;

	int z;
	cin >> z;

	return z;
}

int main()
{
	int n;
	int dq[n + 1];

	cin >> n;

	int x = ask(1, 2), y, z;

	for(int i = 3; i <= n; i++)
	{
		z = ask(1, i);

		if(i == 3) y = z;

		dq[i] = z - x;

		//cout << z << ' ' << x << ' ' << dq[i] << endl;
		x = z;
	}

	z = ask(2, 3);
	cout << z << ' ' << y << endl;
	dq[1] = abs(y - z);
	dq[2] = z - dq[3];

	cout << '!';
	for(int i = 1; i <= n; i++)
		cout << ' ' << dq[i];
	cout << endl;
}