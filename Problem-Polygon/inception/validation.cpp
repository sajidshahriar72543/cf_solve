#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int t = inf.readInt(1, 100, "t");
    inf.readEoln();
    for (int i = 0; i < t; i++) {
        int n = inf.readInt(1, 1000, "n");
        inf.readEoln();
        for (int j = 0; j < n; j++) {
            inf.readInt(0, 1000000000, "a");
            if (j < n - 1)
                inf.readSpace();
        }
        inf.readEoln();
        for (int j = 0; j < n; j++) {
            inf.readInt(0, 1000000000, "a");
            if (j < n - 1)
                inf.readSpace();
        }
        inf.readEoln();
    }
    inf.readEof();
}
