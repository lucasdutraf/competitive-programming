#include <bits/stdc++.h>
using namespace std;
using ss = set<char>;
int main () {
  int n; string s; ss ans;
  cin >> n >> s;
  for (size_t i = 0; i < s.size(); i++) {
    char a = toupper(s[i]);
    ans.insert(a);
  }
  cout << (ans.size() == 26 ? "YES" : "NO") << endl;
  return 0;
}
