#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using si = set<int>;

int main () {
  ios_base::sync_with_stdio(false);
  si shoes;
  for (size_t i = 0; i < 4; i++)
  {
    int temp; cin >> temp;
    shoes.insert(temp);
  }
  cout << 4-shoes.size() << endl;

  return 0;
}
