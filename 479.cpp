#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, m, n, o, p, q, r;
    set <int> res;
    set <int> :: iterator it;

    cin >> a >> b >> c;

    m = a + (b * c);
    n = a * (b + c);
    o = a * b * c;
    p = (a + b) * c;
    q = (a * b) + c;
    r = a + b + c;

    res.insert(m);
    res.insert(n);
    res.insert(o);
    res.insert(p);
    res.insert(q);
    res.insert(r);

    it = res.end();
    it--;

    cout << *it << endl;

    return 0;
}
