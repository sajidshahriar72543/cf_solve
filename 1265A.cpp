#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, j;
    char l[100000];
    cin >> n;
    cin.ignore();
    while(n--)
    {
        cin >> l;
        int flag = 0;
        for(i = 0; i < l[i] != '\0'; i++) {
            if(l[i] == '?') {
                if(l[i - 1] == 'a' && l [i + 1] == 'c')
                    l[i] = 'b';
                else if(l[i - 1] == 'a' && l [i + 1] == 'b')
                    l[i] = 'c';
                else if(l[i - 1] == 'b' && l [i + 1] == 'c')
                    l[i] = 'a';
                else if(l[i - 1] == 'b' && l [i + 1] == 'a')
                    l[i] = 'c';
                else if(l[i - 1] == 'c' && l [i + 1] == 'a')
                    l[i] = 'b';
                else if(l[i - 1] == 'c' && l [i + 1] == 'b')
                    l[i] = 'a';
                else if(l[i - 1] == 'a' && l [i + 1] == '?')
                    l[i] = 'b';
                else if(l[i - 1] == 'b' && l [i + 1] == '?')
                    l[i] = 'c';
                else if(l[i - 1] == 'c' && l [i + 1] == '?')
                    l[i] = 'a';
                else if(l[i - 1] == 'a' && l [i + 1] == 'a')
                    l[i] = 'b';
                else if(l[i - 1] == 'b' && l [i + 1] == 'b')
                    l[i] = 'c';
                else if(l[i - 1] == 'c' && l [i + 1] == 'c')
                    l[i] = 'a';
            }
            for(i = 0; l[i] != '\0'; i++) {
                if(l[i] == l[i + 1]) {
                    cout << -1 << endl;
                    flag = 0;
                    break;
                }
                else
                    flag = 1;
            }
            if(flag == 1)
                cout << l << endl;
//            l.clear();
        }
    }
}
