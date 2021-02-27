#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int saiz, k, alpha[26] = {0};

    cin >> s >> k;

    saiz = s.size();

    if(saiz < k) {
        cout << "impossible\n";
        return 0;
    }

    for(auto &c : s)
    {
        alpha[c - 'a']++;
    }

    int nai = count(alpha, alpha + 26, 0);

    int ache = 26 - nai;

    cout << (ache >= k ? 0 : k - ache) << endl;

    return 0;
}
