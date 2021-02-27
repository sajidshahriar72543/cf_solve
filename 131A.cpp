#include<bits/stdc++.h>

using namespace std;

int main()
{
    string p;

    int flag = 0;

    cin >> p;

    if(p[0] >= 'A' && p[0] <= 'Z')
    {
        if(p.size() == 1)
            flag = 1;
        for(int i = 1; i < p.size(); i++)
        {
            if(p[i] >= 'A' && p[i] <= 'Z')
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
    }

    else
    {
        if(p.size() == 1)
            flag = 1;
        for(int i = 1; i < p.size(); i++)
        {
            if(p[i] >= 'A' && p[i] <= 'Z')
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        for(int i = 0; i < p.size(); i++)
        {
            if(p[i] >= 'A' && p[i] <= 'Z')
                p[i] += 32;
            else
                p[i] -= 32;
        }
    }

    cout << p << endl;

    return 0;
}
