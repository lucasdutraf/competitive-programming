#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q; cin >> N >> Q;
    vector <vector<int>> adj (N + 1);
    for (size_t i = 1; i <= N; i++) {
      int a; cin >> a;
      adj[a].push_back(i);
    }
    while (Q--) {
      int oc, num; cin >> oc >> num;
      if (adj[num].size() < oc) {
        cout << "0" << endl;
      }
      else {
        cout << adj[num][oc - 1] << endl;
      }
    }
    return 0;
}
