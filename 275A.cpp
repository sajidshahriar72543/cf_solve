#include<bits/stdc++.h>

using namespace std;

#define lop(n) for(int i = 0; i < n; i++)
#define lopj(n) for(int j = 0; j < n; j++)
#define lopr(a, n) for(int i = 0; i < n; i++)

int main()
{
    int switches[3][3];

    bool state[3][3];

    lop(3) lopj(3) {
            cin >> switches[i][j];
            state[i][j] = 1;
            switches[i][j] %= 2;
        }

    lop(3)
    {
        lopj(3)
        {
            if(switches[i][j] == 0) continue;

            state[i][j] ^= 1;

            if(i - 1 >= 0) state[i - 1][j] ^= 1;
            if(i + 1 <= 2) state[i + 1][j] ^= 1;
            if(j - 1 >= 0) state[i][j - 1] ^= 1;
            if(j + 1 <= 2) state[i][j + 1] ^= 1;

//            if(i - 1 >= 0 and j - 1 >= 0) state[i - 1][j - 1] ^= 1;
//            if(i - 1 >= 0 and j + 1 <= 2) state[i - 1][j + 1] ^= 1;
//            if(i + 1 <= 2 and j - 1 >= 0) state[i + 1][j - 1] ^= 1;
//            if(i + 1 <= 2 and j + 1 <= 2) state[i + 1][j + 1] ^= 1;
        }
    }

    lop(3)
    {
        lopj(3) cout << state[i][j];

        cout << endl;
    }

    return 0;

}
