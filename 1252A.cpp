#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i;
    vector <int> v;

    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> n;
        v.push_back(n);
    }

    //int x = v[0];

    for(i = 1; i < t; i++) {
        cout << v[i] << " ";
    }

    cout << v[0] << endl;

    return 0;
}
