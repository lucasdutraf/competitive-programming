#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--)
  {
    int n; cin >> n;
    if (n < 3) {
      cout << "0" << endl;
    }
    else {
      if (n & 1 ^ 1){
        cout << (n/2) - 1 << endl; 
      }
      else {
        cout << ((n + 1)/2) - 1 << endl;
      }
    }
  }
  return 0;
}