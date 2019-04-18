#include <bits/stdc++.h>
using namespace std;

int main () {

  int con, aux, ans = 0, sum = 0;
  cin >> con;
  while (con--) {
    for (size_t i = 0; i < 3; i++) {
      cin >> aux;
      sum += aux;
    }
    if (sum >= 2) {
      ans++;
    }
    sum = 0;
  }
  cout << ans << endl;
  return 0;
}
