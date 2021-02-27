#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, i, j, t, k, flag = 0;
    string a, b;

    cin >> x >> y;
    cin.ignore();

    cin >> a >> b;

    if(x > y + 1)
    {
        cout << "NO\n";//\t size boro\n";
        return 0;
    }

    for(i = 0; i < x; i++)
    {
        if(a[i] == '*')
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        if(a == b)
        {
            cout << "YES\n";//\t * nai, string soman\n";
            return 0;
        }
        else
        {
            cout << "NO\n";//\t * nai, string soman na\n";
            return 0;
        }
    }
    //now flag == 1
    for(j = 0; j < i; j++)
    {
        if(a[j] != b[j])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "NO\n";//\t * ache kintu er aag porjonto osoman\n";
        return 0;
    }
    //now flag == 1
    for(j = x - 1, k = y - 1; j > i; j--, k--)
    {
        if(a[j] != b[k])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 0)
        cout << "NO\n";//\t * ache kintu er pore osoman\n";
    else
        cout << "YES\n";//\n";

    return 0;

}
