#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {

  int pages, aux, ans = 0, res;
  vi week;
  cin >> pages;
  for (size_t i = 0; i < 7; i++) {
    cin >> aux;
    week.push_back(aux);
  }
  int i = 0;
  while (true) {
    if (ans >= pages) {
      res = i;
      break;
    }
    if (i == 7) {
      i = 0;
    }
    ans += week[i];
    i++;
  }
  cout << res << endl;

  return 0;
}
