#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using mii = map<int, int>;

bool comp (int a, int b) {
    return a <= b;
}

int main () {

    int n; cin >> n; vi salario;
    while (n--)
    {
        int a; cin >> a;
        salario.push_back(a);
    }
    int m; cin >> m;
    sort(salario.begin(), salario.end());
    while (m--)
    {
      int c, f; cin >> c >> f;
      auto it = lower_bound(salario.begin(), salario.end(), c);
      if (*it > f) cout << "0" << endl;
      else {
          auto ft = lower_bound(salario.begin(), salario.end(), f, comp);
          cout << ft - it << endl;
      }
    }
    return 0;
}
