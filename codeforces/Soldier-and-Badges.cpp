#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;

int main () {

  int n;
  vec bdgs;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    int aux;
    cin >> aux;
    bdgs.push_back(aux);
  }

  sort(bdgs.begin(), bdgs.end());

  bool ok = false;
  int c = 0;
  while (ok == false) {
    for (size_t i = 0; i < bdgs.size(); i++) {
        if (i != bdgs.size() - 1) {
          (bdgs[i] == bdgs[i + 1]) ? bdgs[i+1]++ :
          c++;
        }
    }
  }

  return 0;
}
