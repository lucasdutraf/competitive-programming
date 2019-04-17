#include <bits/stdc++.h>
using namespace std;
using mii = map<int, int>;
using vi = vector <int>;

int main () {
  mii first, sec, th;
  int qtd, aux;
  vi hel;
  cin >> qtd;
  int low = qtd - 1, rl = qtd - 2;
  while (qtd--) {
    cin >> aux;
    first[aux]++;
  }
  while (low--) {
    cin >> aux;
    sec[aux]++;
  }
  while (rl--) {
    cin >> aux;
    th[aux]++;
  }
  for (auto elem : first) {
    if (first[elem.first] != sec[elem.first]) {
      hel.push_back(elem.first);
    }
  }
  for (auto elem : sec) {
    if (sec[elem.first] != th[elem.first]) {
      hel.push_back(elem.first);
    }
  }
  for (auto m : hel) {
    cout << m << endl;
  }
}
