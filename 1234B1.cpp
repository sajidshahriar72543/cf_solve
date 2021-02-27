#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, msg, saiz;

    cin >> n >> k;

    deque <int> convo;
    map <int, int> situation;

    for(int i = 0; i < n; i++)
    {
        cin >> msg;
        int p = situation[msg];

        if(!situation[msg]) {
            convo.push_front(msg);
            situation[msg]++;
        }

        saiz = convo.size();

        if(saiz > k)
            situation[convo[k]] = 0;
    }

    saiz = convo.size();
    int p = min(saiz, min(n, k));

    cout << p << '\n';
    for(int i = 0; i < p; i++) cout << convo[i] << " ";

    return 0;
}
