#include <bits/stdc++.h>
using namespace std;
using si = set<int>;

int main () {

  int a, b, c, d, resp;
  si ans;

  cin >> a >> b >> c >> d;
  ans.insert(a);
  ans.insert(b);
  ans.insert(c);
  ans.insert(d);
  resp = ans.size();
  cout << 4 - resp << endl;

  return 0;
}
