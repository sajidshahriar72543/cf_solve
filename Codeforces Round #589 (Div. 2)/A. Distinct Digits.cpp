#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, l, r, x, flag;
    vector <int> m;

    cin >> l >> r;
    for(i = 0; i <= r - l; i++)
    {
        int a = l + i;

        while(a > 9) {
            int p = a % 10;
            m.push_back(p);
            a = a / 10;
           // cout << a << endl;
        }
        m.push_back(a);
        flag = 1;
        sort(m.begin(), m.end());
//cout << "num: " << endl;
//        for(j = 0; j < m.size(); j++)
//            cout << m.at(j) << endl;

        for(j = 0; j < m.size() - 1; j++)
        {
            if(m.at(j) == m.at(j + 1)) {
                flag = 0;
                break;
            }
        }
        m.clear();
        if(flag == 1) {
            cout << l + i << endl;
            break;
        }
    }
    if(flag == 0)
        cout << -1 << endl;

    return 0;
}
