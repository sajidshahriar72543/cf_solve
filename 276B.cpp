#include<bits/stdc++.h>

using namespace std;

#define ff cout << "First\n"
#define ss cout << "Second\n"

const int N = 26;
int cnt[N];

int main()
{
    string s;

    cin >> s;

    int n = s.size();

    for(int i = 0; i < n; i++)
        cnt[s[i] - 'a']++;

    int odd = 0, ev = 0;

    for(int i = 0; i < N; i++)
    {
        if(cnt[i] & 1)
            odd++;

        else if(cnt[i])
            ev++;
    }

    if((odd & 1) or !odd)
        ff;
    else
        ss;

    return 0;
}
