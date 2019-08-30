#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {

  int n, c, v; cin >> n >> c >> v; int app = 0;
  vi notas;
  for (size_t i = 0; i < n; i++) {
    int a; cin >> a;
    notas.push_back(a);
  }
  sort(notas.rbegin(), notas.rend());
  for (auto elem : notas){
    if (elem >= c) {
      app++;
    }
  }
  cout << app << " "<< notas[v - 1] << endl;

  return 0;
}
