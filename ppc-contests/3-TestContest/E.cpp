#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using ll = long long;
using mii = map<int, ll>;

int main () {
  int n, m, aux;
  ll vasya = 0, petya = 0;
  mii ansv, ansp;
  vi qr;
  cin >> n;
  for (size_t i = 1, j = n; i <= n, j >= 1; i++, j--) {
    cin >> aux;
    ansv[aux] = i;
    ansp[aux] = j;
  }
  cin >> m;
  while (m--) {
    cin >> aux;
    qr.push_back(aux);
  }
  for (size_t i = 0; i < qr.size(); i++) {
    vasya += ansv[qr[i]];
    petya += ansp[qr[i]];
  }
  cout << vasya << " " << petya << endl;
  return 0;
}
