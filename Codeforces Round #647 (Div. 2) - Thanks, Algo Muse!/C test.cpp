#include<bits/stdc++.h>

using namespace std;

int main()
{
    bitset <8> x(0);

    int sum = 0;

    cout << x << endl;

    for(int i = 1; i < 50; i++)
    {
        bitset <8> y(i);

        int c = 0;

        for(int i = 0; i < 8; i++)
            if(x[i] != y[i]) c++;

        sum += c;

        cout << y << " - " << c << " - " << sum << " - " << i << endl;

        x = y;
    }
}
