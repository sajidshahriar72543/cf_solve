#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, i, l;
    string s;

    cin >> n >> t >> s;

    for(int j = 0; j < t; j++)
    {
        for(i = 0; i < n - 1; i++) {
            if(s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++;
                //cout << "t = " << t << " line = " << s << endl;
            }
        }
    }

    cout << s << endl;

    return 0;
}
