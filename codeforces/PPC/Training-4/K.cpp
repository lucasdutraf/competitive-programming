#include <bits/stdc++.h>
using namespace std;

int main () {
  int n, k, limit = 240, amount = 0, que = 1;
  cin >> n >> k;
  if (k == limit) {
    cout << "0" << endl;
  }
  else {
    amount += k;
    while (true) {
      amount += 5 * que;
      if (amount > limit || que > n) {
        que--;
        cout << que << endl;
        break;
      }
      que++;
    }
  }
}
