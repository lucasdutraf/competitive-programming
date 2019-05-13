#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {

  int probqtd, kindsofdrink, probp, newsec;
  vi sectosolve {0};
  vi secaux {0};
  cin >> probqtd;
  while (probqtd--) {
    int aux;
    cin >> aux;
    sectosolve.push_back(aux);
  }
  cin >> kindsofdrink;
  while (kindsofdrink--) {
    secaux = sectosolve;
    cin >> probp >> newsec;
    secaux[probp] = newsec;
    cout << std::accumulate(secaux.begin(), secaux.end(), 0) << endl;
    secaux.clear();
  }

  return 0;
}
