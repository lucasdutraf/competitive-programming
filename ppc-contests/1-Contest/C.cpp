#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int vis, aux;
    set<int> s;
    cin >> vis;
    while (vis--) {
      cin >> aux;
      s.insert(aux);
    }
    cout << s.size() << endl;
    return 0;
}
