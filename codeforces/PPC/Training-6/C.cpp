#include <bits/stdc++.h>
using namespace std;

int main () {
  string in, res = "hello"; cin >> in; int p = 0, sol = 0;
  for (size_t i = 0; i < in.size(); i++) {
    if (in[i] == res[p]) {
      p++;
      sol++;
    }
  }
  cout << (sol >= 5 ? "YES" : "NO") << endl;
}
