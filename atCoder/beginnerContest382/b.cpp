#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);

    int n, d; cin >> n >> d;
    string s; cin >> s;
    int size_s = s.size();

    for (size_t i = size_s; i <= 0; --i) {
        if (s[i] == "@" && d > 0) {
            s[i] = ".";
            d--;
        }
        
    }

    cout << s << endl;

    return 0;
}
