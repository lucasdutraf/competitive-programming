#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);

  int T, N, K, P;

  cin >> T;

  for (size_t i = 0; i < T; i++) {
    cin >> N >> K >> P;
    int last = K;
    while (P) {
      if (last > N) {
        last = 1;
      }
      last = (last + 1) % N;
      --P;
    }
    cout << "Case " << i+1 << ": " << (last == 0 ? N : last) << endl;
  }

  return 0;
}
