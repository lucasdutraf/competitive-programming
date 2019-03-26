#include <bits/stdc++.h>
using namespace std;

int main () {

  int kind, al = 0, gas = 0, dis = 0;

  while (cin >> kind, kind != 4) {
    if (kind == 1) {
      al++;
    }
    else if (kind == 2) {
      gas++;
    }
    else if (kind == 3) {
      dis++;
    }
  }
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " <<  al << endl;
  cout << "Gasolina: " <<  gas << endl;
  cout << "Diesel: " <<  dis << endl;

  return 0;
}
