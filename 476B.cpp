#include<bits/stdc++.h>

using namespace std;

long long facto(long long a)
{
    if(a <= 1)
        return 1;
    else return a * facto(a - 1);
}

int main()
{
    string s1, s2;
    long long pls1, mns1, pls2, mns2, qus;
    pls1 = mns1 = pls2 = mns2 = qus = 0;

    cin >> s1 >> s2;

    for(auto &z : s1)
    {
        pls1 += (z == '+');
        mns1 += (z == '-');
    }
    for(auto &z : s2)
    {
        pls2 += (z == '+');
        mns2 += (z == '-');
        qus += (z == '?');
    }

    if(pls1 == pls2 and mns1 == mns2 and !qus)
        cout << "1.000000000000" << endl;

    else if(pls1 < pls2 or mns1 < mns2)
        cout << "0.000000000000" << endl;

    else
    {
        long long s = 1 << qus;
        double d;

        d = (facto(qus) / (facto(pls1 - pls2) * facto(mns1 - mns2))) * 1.0;

        cout << fixed;
        cout << setprecision(10) << d / (s * 1.0) << '\n';
    }

    return 0;
}
