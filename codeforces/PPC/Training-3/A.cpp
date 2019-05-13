#include <bits/stdc++.h>
using namespace std;

int main () {

  string in;
  int times = 0;
  cin >> in;
  for (size_t i = 0; i < in.size(); i++) {
    if (in[i] == 'H' || in[i] == 'Q' || in[i] == '9') {
      times++;
      break;
    }
  }
  if (times == 0) {
    cout << "NO" << endl;
  }
  else {
    cout << "YES" << endl;
  }
  return 0;
}
