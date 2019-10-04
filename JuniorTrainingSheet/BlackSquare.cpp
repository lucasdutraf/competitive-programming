#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main () {

  int f, s, t, fr;
  cin >> f >> s >> t >> fr;
  string in; cin >> in;
  ll total = 0;

  for (size_t i = 0; i < in.size(); i++) {
    if (in[i] == '1') {
      total += f;
    }
    else if (in[i] == '2') {
      total += s;
    }
    else if (in[i] == '3') {
      total += t;
    }
    else {
      total += fr;
    }
  }

  cout << total << endl;
  
  return 0;
}
