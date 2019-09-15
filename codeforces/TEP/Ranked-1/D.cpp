#include <bits/stdc++.h>
using namespace std;
using sc = set<char>;

int main () {

  int a; cin >> a;
  string b; cin >> b;
  sc pangram;
  for (auto elem : b){
    pangram.insert(tolower(elem));
  }
  cout << (pangram.size() == 26 ? "YES" : "NO") << endl;
  return 0;
}
