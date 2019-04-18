//g++ -o prog -W -Wall -Wextra -std=c++17 -O2
#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using mi = deque<int>;
using vvi = vector<int>;
using mii = map<int, int>; // posi, valor

int main(){
    ios_base::sync_with_stdio(false);
    int n, k, aux;
    mi gr;
    mii ans;
    vvi v;
    cin >> n >> k;
    for (size_t i = 0; i < n; i++) {
      cin >> aux;
      gr.push_back(aux);
      ans[i] = aux;
    }
    sort(gr.begin(), gr.end());
    int i = 0;
    while (gr.size() - i >= 3) {
      if (((gr[i + 1] - gr[i]) <= k) && ((gr[i + 2] - gr[i]) <= k) ) {
        for (auto elem : ans) {
          if (elem.second == gr[i]) {
            v.push_back(elem.first);
          }
          else if(elem.second == gr[i + 1]) {
            v.push_back(elem.first);
          }
          else if(elem.second == gr[i + 2]) {
            v.push_back(elem.first);
          }
        }
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
