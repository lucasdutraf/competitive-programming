#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {
  int n; cin >> n;
  vi line;
  while (n--) {
    int a; cin >> a;
    line.push_back(a);
  }
  vi aux = line;
  sort(aux.begin(), aux.end());
  int bigger = aux[aux.size() - 1];
  int lower = aux[0];
  int positionb = 100000;
  int positionl = 100000;

  for (size_t i = 0; i < line.size(); i++) {
    if (positionb == 100000 && line[i] == bigger) {
      positionb = i;
    }
  }
  for (int i = (int)line.size() - 1; i >= 0; i--) {
    if (positionl == 100000 && line[i] == lower) {
      positionl = i;
    }
  }

  auto total = positionb + line.size()-positionl-1;
  if (positionl < positionb) {
    total--;
  }

  cout << total << endl;

}
