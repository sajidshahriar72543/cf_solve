#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define lop(a, b) for(int i = a; i < b; i++)
#define lopj(a, b) for(int j = a; j < b; j++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //freopen("input.txt", "r", stdin)

    int x, test, n, k;
    string s;

    cin >> test;

    while(test--)
    {
        cin >> n >> k >> s;
        x = s.size();

        int z = 0, o = 0, pre = k, post = 0;


        lop(0, x)
        {
            if(s[i] == '0')
            {
                if(pre == k)
                {
                    post = 0;
                    lopj(i + 1, i + k + 2)
                    {
                        if(j == x) {
                            post = k;
                            break;
                        }
                        if(s[j] == '1') break;
                        post++;
                        if(post == k) break;
                    }
                    if(post == k)
                    {
                        s[i] = '1';
                        pre = post;
                        z++;
                        //cout << post << " " << pre << " " << i << '\n';
                    }
                    else pre = 0;
                    i += post;
                }

                else pre++;
            }

            else {
                pre = 0;
                o++;
            }
        }

        cout << z << '\n';
    }

    return 0;
}

