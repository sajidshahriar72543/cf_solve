#include<bits/stdc++.h>

#define fread freopen("A1 input.txt", "r", stdin)
#define fwrite freopen("A1 output.txt", "w", stdout)
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
//    fread;
//    fwrite;

    int n;

    cin >> n;

    long long a[n];

    for(int z = 0; z < n; z++) cin >> a[z];

    sort(a, a + n);

    for(int z = 0; z < n - 1; z++) cout << a[z] << " ";
    cout << a[n - 1] << endl;

    return 0;
}
