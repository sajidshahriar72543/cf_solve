#include<bits/stdc++.h>

using namespace std;

vector <long long> b[100005];

int main()
{
    long long t, n, inp, x;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);

        for(int i = 0; i < n; i++) {
            scanf("%lld", &x);
            for(int j = 0; j < x; j++) {
                scanf("%lld", &inp);
                b[i].push_back(inp);
            }
        }

        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(b[i][0] == b[j][0]) {
                    if(b[j][0] != NULL)
                        b[j].erase(b[j].begin());
                }
            }
        }
    }
}
