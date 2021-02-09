#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);

  int V, T, S, D;
  cin >> V >> T >> S >> D;

  int initRange, FinalRange;
  initRange = V * T; FinalRange = V * S;
  
  cout << ((D < initRange || D > FinalRange) ? "Yes" : "No") << endl;

  return 0;
}
