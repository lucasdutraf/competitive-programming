#include <bits/stdc++.h>
using namespace std;

int main () {

  int cases;
  string aux;
  cin >> cases;
  for (size_t i = 0; i < cases; i++) {
    cin >> aux;
    if (aux.size() > 10) {
      int a = aux.size() - 2;
      cout << aux[0] << a << aux[aux.size() - 1] << endl;
    }
    else {
      cout << aux << endl;
    }
  }

  return 0;
}
