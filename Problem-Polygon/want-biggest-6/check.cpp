#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

const int N = 1e9;

int main(int argc, char* argv[]) {
	registerTestlibCmd(argc, argv);

	int t = inf.readInt(1, 100);
	for (int z = 1; z <= t; z++)
	{
		int n = inf.readInt(1, 3000);
		vector <int> inb(n), inc(n), outa(n), an(n);

		int res = ans.readInt(-1, n);
		int ou = ouf.readInt(-1, n);

		if (res != -1 && ou == -1)
			quitf(_wa, "Jury has the answer but participant has not at case %d.", z);
		if (res == -1 && ou != -1)
			quitf(_wa, "Participant has the answer but there are no possible heights at case %d.", z);


		for (int i = 0; i < n; ++i)
			inb[i] = inf.readInt(0, N);
		for (int i = 0; i < n; ++i)
			inc[i] = inf.readInt(0, N);
		if (res == -1 && ou == -1)
			continue;

		for (int i = 0; i < n; ++i)
			outa[i] = ouf.readInt(0, N);
		for (int i = 0; i < n; ++i)
			an[i] = ans.readInt(0, N);

		set<int>st(outa.begin(), outa.end());
		if (st.size() != n)
			quitf(_wa, "Heights are not distinct at case %d", z);

		int mn = inc[0], mx = inb[0];
		for (int i = 0; i < n; ++i)
		{
			mn = min(mn, outa[i]);
			mx = max(mx, outa[i]);

			if (mn != inc[i])
				quitf(_wa, "Prefix Minimum array doesn't match at case %d. Expected %d but found %d.", z, inc[i], mn);
			if (mx != inb[i])
				quitf(_wa, "Prefix Maximum array doesn't match at case %d. Expected %d but found %d.", z, inb[i], mx);
		}
	}

	quitf(_ok, "All okka. Great job!");
}

