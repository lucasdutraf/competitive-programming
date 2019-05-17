#include <bits/stdc++.h>
using namespace std;

int main () {
  //atualizar at
  string in;
  int ans = 0;
  cin >> in;
  auto it = find(in.begin(), in.end(), 'A');
  // auto at = rfind(in.rbegin(), in.rend(), 'Z');
  // in.rfind('Z');

  auto ati = in.rfind('Z');
  auto iti = it - in.begin();
  while (iti != ati) {
    ++iti;
    ans++;
  }
  cout << ans + 1 << endl;
  return 0;
}
