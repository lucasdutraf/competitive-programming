#include <bits/stdc++.h>
using namespace std;
using ss = pair<string, string>;

int main () {
  int size; cin >> size;
  ss target, inicial;
  int ax, ay, bx, by, cx, cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;
  if (((ax - bx) * (ax - cx) < 0) || ((ay - by) * (ay - cy) < 0)) {
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
  }
}
