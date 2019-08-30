#include <bits/stdc++.h>
using namespace std;
using mii = map<int, int>;
int main () {
  int N, R, aux1, aux2, aux3; mii pe; int ans = 0;


  cin >> N >> R;
  for(int i = 1; i <= R; i++){
    cin >> aux1 >> aux2;
    pe[aux1]++;
    pe[aux2]++;
  }
  for (auto elem : pe) {
    if (elem.second == N -1) {
      ans++;
    }
  }
  // cout << ans - 1 << endl;
  if (ans == N) {
    cout << "0" << endl;
  }
  else {
    cout << R - ans << endl;
  }
  return 0;
}
