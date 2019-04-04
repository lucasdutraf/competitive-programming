#include <bits/stdc++.h>
using namespace std;
using si = stack<int>;
using ll = long long;

int main () {

  //p preco atual, n numero de reunioes
  //if 1 - aumento de x reais
  //if 2 - revoga as ultimas y reunioes
  //stack
  si mon;
  ll sum = 0;
  int p, n, kind, x;
  cin >> p >> n;
  mon.push(p);
  while (n--) {
    cin >> kind >> x;
    if (kind == 1) {
      mon.push(x);
    }
    else if (kind == 2) {
      for (size_t i = 0; i < x; i++) {
        mon.pop();
      }
    }
  }
  while (!mon.empty()) {
    sum += mon.top();
    mon.pop();
  }

  cout << sum << endl;

  return 0;
}
