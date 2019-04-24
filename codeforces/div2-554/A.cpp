#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD {1000000007};
using dll = deque<ll>;
using vll = vector<ll>;

int main () {

  int n, m, ans = 0;
  dll key;
  vll chest;
  ll aux;
  cin >> n >> m;
  while (n--) {
    cin >> aux;
    chest.push_back(aux);
  }
  while (m--) {
    cin >> aux;
    key.push_back(aux);
  }
  ll i = 0;
  while (!key.empty() || !chest.empty()) {
    if (((key.front() + chest[i]) % 2) != 0) {
      cerr << "aqui" << endl;
      cerr << "aqui" << i << endl;
      ans++;
      chest.erase(chest.begin() + i);
      chest.resize(chest.size());
      key.pop_front();
      i = 0;
    }
    if (i == chest[chest.size() - 1]) {
      i = 0;
      key.pop_front();
    }
    i++;
  }
  cout << ans << endl;

  return 0;
}
