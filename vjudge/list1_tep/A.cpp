#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using vi = vector<int>;

int main () {
  ios_base::sync_with_stdio(false);

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vi coordinates{a, b, c};

  sort(coordinates.begin(), coordinates.end());

  if (abs(a - c) <= d){
    cout << "Yes" << endl;
  }
  else {
    if ((abs(coordinates[1] - coordinates[0]) <= d) && ((abs(coordinates[2] - coordinates[1]) <= d))) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }

  return 0;
}
