#include<bits/stdc++.h>

#define scan(a) scanf("%d", &a)
#define scan2(a, b) scanf("%d %d", &a, &b)
#define lop(n) for(int i = 0; i < n; i++)
#define lopr(a, n) for(int i = a; i < n; i++)
#define ff first
#define ss second

using namespace std;

int n;

int main()
{
    int m, k, in, in2;

    scan2(n, m);

    int post[n + 1];
    pair <int, int> lh[n + 1];
    int index[n + 1];

    lop(n + 1)
    {
        post[i] = lh[i].ff = lh[i].ss = index[i] = i;
        //printf("%d %d %d %d\n", post[i], lh[i].ff, lh[i].ss, index[i]);
    }

    lopr(1, m + 1)
    {
        scan(k);

        if(k == post[1]) continue;

        in = index[k];

        in2 = in - 1;

        //cout << "in = " << in << " post no = " << post[in] << " k = " << k << endl;

        swap(post[in], post[in2]);
        index[k]--;
        index[post[in]]++;

        lh[k].ff = min(lh[k].ff, in2);
        lh[post[in]].ss = max(lh[post[in]].ss, in);

//        lopr(1, n + 1)
//            printf("%d %d %d\n", post[i], lh[i].ff, lh[i].ss);
    }

    lopr(1, n + 1)
    {
        printf("%d %d\n", lh[i].ff, lh[i].ss);
    }

    return 0;
}
