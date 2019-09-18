#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using msc = multiset<char>;

int main () {

  int a; cin >> a;
  string b; cin >> b; string aux(b, 1, a - 1);
  msc ans;
  for (auto elem : b) {
    ans.insert(elem);
  }
  if (ans.count('0') != ans.count('1')) {
    cout << "1" << endl;
    cout << b << endl;
    return 0;
  }
  cout << "2" << endl;
  cout << b[0] << " " << aux << endl;

  return 0;
}
