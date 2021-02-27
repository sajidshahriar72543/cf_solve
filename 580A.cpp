#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, m = 0, l, inp, k;
    vector <int> a, sm;

    cin >> l;

    for(i = 0; i < l; i++) {
        cin >> inp;
        a.push_back(inp);
        //cout << a[i] << endl;
    }

    if(l == 1) {
        cout << 1 << endl;
        return 0;
    }
    if(l == 2) {
        if(a[0] > a[1])
            cout << 0 << endl;
        else
            cout << 2 << endl;
        return 0;
    }


    for(i = 1; i < l; i++) {
        if(a.at(i) < a.at(i - 1) ) {
            if(m == 0)
                sm.push_back(0);
            else
                sm.push_back(m + 1);
            m = 0;
           // cout << sm.at(j) << endl;
        }
        else
            m++;
        sm.push_back(m + 1);
    }

    sort(sm.begin(), sm.end(), greater <int> ());
    //k = sm.size();

    cout << sm.at(0) << endl;
//main();
    return 0;
}
