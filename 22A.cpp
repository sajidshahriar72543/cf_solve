#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, inp;
    set <int> num;
    set <int> :: iterator it;

    cin >> n;

    while(n--)
    {
        cin >> inp;
        num.insert(inp);
    }

    it = num.begin();

    if(num.size() == 1)
        cout << "NO\n";
    else
        cout << *++it << endl;

    return 0;
}
