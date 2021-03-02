#include <bits/stdc++.h>

using namespace std;

int regular(string& s) {
 stack<char> st;
    for (auto c : s) {
      if (c == '(') {
        st.push(c);
      } else {
        if (st.empty()) {
         if (c == ')') {
          return 0;
         }
          if (c == '(' || c == ')') {
            st.push(c);
          }
        } else if (c == ')') {
          st.pop();
        }
      }
    }
    return st.empty() ? 1 : 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
   string s;
   cin >> s;
   if (s.back() == s[0]) {
    cout << "NO" << '\n';
    continue;
   }
   bool ok = false;
   for (int i = 0; i < (int) s.size(); i++) {
    char c = s[0];
    string res = "";
    string two = "";
    string three = "";
    string four = "";
    for (int j = 0; j < (int) s.size(); j++) {
     if (c == 'A') {
       if (s[j] == 'A') { res += '('; }
       else if (s[j] == 'B') { res += ')'; }
       else if (s[j] == 'C') { res += ')'; }
       if (s[j] == 'A') { two += '('; }
       else if (s[j] == 'B') { two += '('; }
       else if (s[j] == 'C') { two += ')'; }
       if (s[j] == 'A') { three += '('; }
       else if (s[j] == 'B') { three += ')'; }
       else if (s[j] == 'C') { three += '('; }
       if (s[j] == 'A') { four += '('; }
       else if (s[j] == 'B') { four += '('; }
       else if (s[j] == 'C') { four += '('; }
     } else if (c == 'B') {
       if (s[j] == 'B') { res += '('; }
       else if (s[j] == 'A') { res += ')'; }
       else if (s[j] == 'C') { res += ')'; }
       if (s[j] == 'B') { two += '('; }
       else if (s[j] == 'A') { two += '('; }
       else if (s[j] == 'C') { two += ')'; }
       if (s[j] == 'B') { three += '('; }
       else if (s[j] == 'A') { three += ')'; }
       else if (s[j] == 'C') { three += '('; }
       if (s[j] == 'B') { four += '('; }
       else if (s[j] == 'A') { four += '('; }
       else if (s[j] == 'C') { four += '('; }
     } else if (c == 'C') {
       if (s[j] == 'C') { res += '('; }
       else if (s[j] == 'B') { res += ')'; }
       else if (s[j] == 'A') { res += ')'; }
       if (s[j] == 'C') { two += '('; }
       else if (s[j] == 'B') { two += '('; }
       else if (s[j] == 'A') { two += ')'; }
       if (s[j] == 'C') { three += '('; }
       else if (s[j] == 'B') { three += ')'; }
       else if (s[j] == 'A') { three += '('; }
       if (s[j] == 'C') { four += '('; }
       else if (s[j] == 'B') { four += '('; }
       else if (s[j] == 'A') { four += '('; }
     }
    }
    // cout << "res == " << res << '\n';
    // cout << "two == " << two << '\n';
    // cout << "three == " << three << '\n';
    // cout << regular(res) << " " << regular(two) << " " << regular(three) << '\n';
    if (regular(res) || regular(two) || regular(three) || regular(four)) {
     ok = true;
     break;
    }
   }
   cout << (ok ? "YES" : "NO") << '\n';
  }
    return 0;
  }
