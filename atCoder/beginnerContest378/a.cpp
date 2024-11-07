#include <bits/stdc++.h>
using namespace std;
using mii = map<int, int>;

int main () {
    mii hist; int rep = 0;
    for (size_t i = 0; i < 4; i++)
    {
        int var; cin >> var;
        hist[var]++;

        if (hist[var] == 2) {
            rep++;
            hist[var] = 0;
        }
    }

    cout << rep << endl;
}