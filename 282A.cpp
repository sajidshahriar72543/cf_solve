#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, value = 0;
    char a, b, c;
    cin >> n;

    for(i = 0; i < n; i++) {
        cin >> a >> b >> c;

        if(a == '-')
            value--;
        else if(a == '+')
            value++;
        else if(c == '-')
            value--;
        else
            value++;
    }

    cout << value << endl;

    return 0;
}

