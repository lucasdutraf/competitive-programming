#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {

  int n, aux, sec = 0;
  vi ordement, sor;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    ordement.push_back(aux);
  }
  sor = ordement;
  sort(sor.begin(), sor.end());
  if (sor[n - 1] != ordement[0]) {
    int a = sor[n - 1];
    auto it = find(ordement.begin(), ordement.end(), a);
    int dis = distance(ordement.begin(), it);
    dis -= 1;
    while (ordement[0] != a) {
      swap(ordement[dis - 1], ordement[dis]);
      dis--;
      sec++;
    }
  }

  if (sor[0] != ordement[n - 1]) {
    int a = sor[0];
    auto it = find(ordement.begin(), ordement.end(), a);
    int dis = distance(ordement.begin(), it);
    dis -= 1;
    while (ordement[n - 1] != a) {
      swap(ordement[dis + 1], ordement[dis]);
      dis++;
      sec++;
    }
  }

  cout << sec << endl;

  return 0;
}
