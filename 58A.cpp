#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, e, l, o = 0, i, j;

    string hello;

    cin >> hello;

    for(i = 0; i < hello.size(); i++) {
        if(hello[i] == 'h') {
            h = i;
            break;
        }
    }
    for(i = h; i < hello.size(); i++) {
        if(hello[i] == 'e') {
            e = i;
            //j = i;
            break;
        }
    }
    for(i = e; i < hello.size(); i++) {
        if(hello[i] == 'l') {
           // l = i;
            for(j = i + 1; j < hello.size(); j++) {
                if(hello[j] == 'l') {
                    l = j;
                    break;
                }
                else
                    l = 1002;
            }
           // j = i;
            break;
        }
    }
    for(i = j; i < hello.size(); i++) {
        if(hello[i] == 'o') {
            o = i;
            //j = i;
            break;
        }
    }

   // printf("%d %d %d %d\n", h, e, l, o);

    if(h < e && e < l && l < o)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

