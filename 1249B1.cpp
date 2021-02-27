#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, n, res, i, j;
    vector <int> book;

    cin >> q;

    while(q--)
    {
        cin >> n;

        book.push_back(0);
        for(i = 0; i < n; i++)
        {
            cin >> res;
            book.push_back(res);
        }

        for(i = 1; i <= n; i++)
        {
            res = 1;
            j = book[i];
            while(j != i) {
                j = book[j];
                res++;
            }

            cout << res << " ";
        }

        cout << '\n';
        book.clear();
    }

    return 0;
}
