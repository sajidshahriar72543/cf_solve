#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

typedef long long ll;

void print(int n)
{
	for (int i = 0; i < n; ++i)
		printf("0");

	printf("\n");
}

int main()
{
#ifndef ONLINE_JUDGE
	auto start = high_resolution_clock::now();
	freopen("/home/rifat/input.txt", "r", stdin);
	freopen("/home/rifat/output.txt", "w", stdout);
#endif

	int a, b, n;
	scanf("%d %d %d", &a, &b, & n);

	if (a % b == 0)
	{
		printf("%d", a);
		print(n);
	}

	else
	{
		a *= 10;
		int ans = -1;
		for (int i = 0; i < 10; i++)
			if ((a + i) % b == 0)
				ans = a + i;
		printf("%d", ans);
		if (ans != -1) print(n - 1);
	}


#ifndef ONLINE_JUDGE
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(stop - start);
	cout << "\nTime: " << duration.count() << "ms" << endl;
#endif

	return 0;
}