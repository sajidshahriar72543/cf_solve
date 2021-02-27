#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, temp, t, flag = 0;
    vector <int> v;
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};

    cin >> n;

    t = n;

    for(; ;)
    {
        if(t < 1) break;
        temp = t % 10;
        v.push_back(temp);
        t = t / 10;
    }
    //v.push_back(t);

//    for(i = 0; i < v.size(); i++)
//        cout << v.at(i) << endl;

    for(i = 0; i < 10; i++) {
        if(n % lucky[i] == 0 ) {
            printf("YES\n");
            return 0;
        }
    }
    for(i = 0; i < v.size(); i++) {
        if(v.at(i) != 4 && v.at(i) != 7) {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("YES\n");
    else
        printf("NO\n");

//    main();
    return 0;
}
