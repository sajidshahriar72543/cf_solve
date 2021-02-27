#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

void send(char x) {
	cout << x << endl;
	fflush(stdout);
}

int main(int argc, char* argv[]) {
	registerInteraction(argc, argv);

	int t = inf.readInt();
	cout << t << endl << flush;

	setTestCase(t);
	while (t--)
	{
		int x = inf.readInt();
		int n = inf.readInt();
		cout << n << endl << flush;

		int queries = 0;
		while (true)
		{
			bool is_answer = false;
			char cur = ouf.readChar();
			int p;

			if (cur == '?')
			{
				int a = ouf.readInt(1, n);
				int b = ouf.readInt(1, n);

				p = a * b;

				queries++;
			}
			else if (cur == '=')
			{
				is_answer = true;
				p = ouf.readInt();
			}
			else
				quitf(_wa, "printed symbol is neither ? or =");

			if (p < 1 || p > n * n)
				quitf(_wa, "number %d from stdin is out of range [%d, %d]", p, 1, n * n);

			if (queries > 20)
				quitf(_wa, "query limit exceeded.");

			if (is_answer)
			{
				if (p == x)
					quitf(_ok, "number is guessed.");

				else
					quitf(_wa, "guessed number is incorrect.");
			}

			if (p < x)
				send('<');
			else if (p > x)
				send('>');
			else
				send('=');
		}
	}
}

