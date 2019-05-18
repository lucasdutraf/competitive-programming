#include <bits/stdc++.h>
using namespace std;
using msc = multiset<char>;

int main () {
  int n; string s; msc ans;
  cin >> n >> s;
  for (size_t i = 0; i < s.size(); i++) {ans.insert(s[i]);}
  if (ans.count('D') > ans.count('A')) cout << "Danik" << endl;
  else if (ans.count('D') < ans.count('A')) cout << "Anton" << endl;
  else cout << "Friendship" << endl;
  return 0;
}
