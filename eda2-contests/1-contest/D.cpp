//g++ -o prog -W -Wall -Wextra -std=c++17 -O2
#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
std::vector<int> v {1, 1, 2, 2, 3, 4, 4, 4, 5, 6};
int ans (int n) {
  if (n <= v.size()) {
    return v[n - 1];
  }
  else {
    v.push_back(ans(ans(n - 1)) + ans(n - ans(n - 1)));
  }
  return v[n - 1];
}

int main(){
    ios_base::sync_with_stdio(false);
    int in;
    cin >> in;
    cout << ans(in) << endl;
    return 0;
}
