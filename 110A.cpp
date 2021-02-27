#include <bits/stdc++.h>

using namespace std;

int main()

{
    unsigned long long n, i, j, t, flag = 0, counter = 0;
    vector <int> num;
    //int lucky[] = {4, 7, 44, 47, 77};

    cin >> n;

    t = n;
    for(;;) {
        if(t < 1) break;
        num.push_back(t % 10);
        t /= 10;
    }

//    for(i = 0; i < num.size(); i++) {
//        if(num[i] == 4 || num[i] == 7)
//            continue;
//        else {
//            flag = 1;
//            break;
//        }
//    }
//
//    if(flag == 0) {
//        cout << "YES\n";
//    }
//
//    else {
        for(i = 0; i < num.size(); i++) {
            if(num[i] == 4 || num[i] == 7)
                counter++;
        }
        if(counter == 4 || counter == 7)
            cout << "YES\n";
        else
            cout << "NO\n";
   // }

    return 0;
}
