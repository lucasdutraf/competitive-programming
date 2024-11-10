#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);

    int n, k; cin >> n >> k;
    string teeth; cin >> teeth;

    int healthy = 0, straw = 0;

    for (size_t i = 0; i < n; i++) {
        if (teeth[i] == "0") {
            healthy++;
            if (healthy == k) {
                straw++;
                healthy = 0;
            }
        }
        else {
            healthy = 0;
        }
    }

    cout << straw << endl;

    return 0;
}
