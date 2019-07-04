#include <bits/stdc++.h>
using namespace std;
using vi = priority_queue<int>;

int main () {
  vi pos;
  int t, sx, sy, ex, ey, tt = 0; cin >> t >> sx >> sy >> ex >> ey;
  string dir; cin >> dir;
  bool isn = false;
  for (size_t i = 0; i < t; i++) {
    if (sx > ex && dir[i] == 'W') {
      sx--;
      pos.push(i);
    }
    else if (sx < ex && dir[i] == 'E') {
      sx++;
      pos.push(i);
    }

    if (sy > ey && dir[i] == 'S') {
      sy--;
      pos.push(i);
    }
    else if (sy < ey && dir[i] == 'N') {
      sy++;
      pos.push(i);
    }
  }
  if (sx == ex && sy == ey) {
    cout << pos.top() + 1 << endl;
  }
  else {
    cout << "-1" << endl;
  }

  return 0;
}
