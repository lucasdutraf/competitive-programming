//g++ -o prog -W -Wall -Wextra -std=c++17 -O2
#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using mi = deque<int>;
using vvi = vector<int>;
using vp = vector<pair<int, int>>;
using mii = map<int, int>; // posi, valor

int main(){
    ios_base::sync_with_stdio(false);
    int n, k, aux;
    vp gr;
    vvi v;
    cin >> n >> k;
    for (size_t i = 0; i < n; i++) {
      cin >> aux;
      gr.push_back(make_pair(aux, i));
    }
    sort(gr.begin(), gr.end());
    int i = 0;
    while (gr.size() - i >= 3) {
      if (((gr[i + 1].first - gr[i].first) <= k) && ((gr[i + 2].first - gr[i].first) <= k) ) {
        v.push_back(gr[i].second);
        v.push_back(gr[i + 1].second);
        v.push_back(gr[i + 2].second);
        i += 2;
      }
      i++;
    }
    cout << v.size()/3 << endl;
    for (i = 0; i < v.size(); i+= 3) {
      cout << v[i] + 1 << " " << v[i + 1] + 1 << " " << v[i+2] + 1 << endl;
    }

    return 0;
}
