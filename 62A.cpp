#include<bits/stdc++.h>

using namespace std;

int main()
{
    int bl, br, gl, gr;

    cin >> gl >> gr >> bl >> br;

    if(br == gl || bl == gr)
        cout << "YES\n";
    else if((bl < gr && bl == gr - 1) || (br < gl && br == gl - 1))
        cout << "YES\n";
    else if((bl > gr && bl <= 2 * gr + 2) || (br > gl && br <= 2 * gl + 2))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
