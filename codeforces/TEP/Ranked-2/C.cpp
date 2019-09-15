#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using msi = map<string, int>;

int main () {

  int n; cin >> n;
  int middle;
  bool side = false;
  string encoded; cin >> encoded;
  string ans(encoded);
  if (encoded.size() == 1) {
    middle = 0;
    cout << encoded << endl;
    return 0;
  }
  else {
    int next = 1;
    int h = 1;
    if (encoded.size() & 1) {
      middle = floor(encoded.size() / 2);
      ans[middle] = encoded[0];
      while (next <= encoded.size()) {
        if (h > floor(encoded.size()/2)) {
          break;
        }
        if (side == true) {
          ans[middle + h] = encoded[next];
          h++;
          side = false;
          next++;
        }
        else {
          ans[middle - h] = encoded[next];
          side = true;
          next++;
        }
      }
      cout << ans << endl;
    }
    else {
      middle = (encoded.size()/2) - 1;
      ans[middle] = encoded[0];
      int co = 0;
      side = true;
      while (next <= encoded.size()) {
        if (h > floor(encoded.size()/2)) {
          break;
        }
        if (side == true) {
          ans[middle + h] = encoded[next];
          side = false;
          next++;
        }
        else {
          if (co > middle) {
            side = true;
            continue;
          }
          ans[middle - h] = encoded[next];
          side = true;
          h++;
          next++;
          co++;
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}
