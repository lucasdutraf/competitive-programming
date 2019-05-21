#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  int m[10011];
  cin >> n;
  int indice = 1;
  for (size_t i = 1; i <= 10800100; i++) {
    int sum = 0;
    int aux = i;
    while (aux != 0) {
      sum += aux % 10;
      aux /= 10;
    }
    if (sum == 10) {
      m[indice] = i;
      indice++;
    }
  }
  cout << m[n] << endl;
}
