#include <bits/stdc++.h>
using namespace std;
using di = deque<int>;
using ll = long long;

int main () {

  int n; cin >> n; di cards; ll s = 0, d = 0; bool flag = true;
  while (n--) {
    int a; cin >> a;
    cards.push_back(a);
  }
  while (!cards.empty()) {
    if (cards.size() == 1) {
      if (flag == true) {
        s += cards.front();
        cards.pop_front();
        break;
      }
      else {
        d += cards.front();
        cards.pop_front();
        break;
      }
    }
    if (flag == true && cards.front() > cards.back()) {
      s += cards.front();
      cards.pop_front();
      flag = false;
    }
    else if (flag == true && cards.front() < cards.back()) {
      s += cards.back();
      cards.pop_back();
      flag = false;
    }
    else if (flag == false && cards.front() > cards.back()) {
      d += cards.front();
      cards.pop_front();
      flag = true;
    }
    else if (flag == false && cards.front() < cards.back()) {
      d += cards.back();
      cards.pop_back();
      flag = true;
    }
  }
  cout << s << " " << d << endl;
  return 0;
}
