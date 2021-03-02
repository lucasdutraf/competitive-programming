#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using msi = set<int>;

int f(int lastPos){
  return (lastPos & 1 ? ((3 * lastPos) + 1) : (lastPos/2));
}

int main () {
  ios_base::sync_with_stdio(false);
  int s; cin >> s; msi sup;
  int i = 1;
  while(true) {
    if (sup.count(s) == 1) {
      cout << i << endl;
      break;
    }
    sup.insert(s);
    s = f(s);
    ++i;
  }
  return 0;
}
