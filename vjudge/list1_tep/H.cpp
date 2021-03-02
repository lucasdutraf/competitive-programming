#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using sc = set<char>;

int main () {
  ios_base::sync_with_stdio(false);
  string l; cin >> l; sc text;
  for (auto elem : l){
    text.insert(elem);
  }
  cout << (text.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;

  return 0;
}
