#include <bits/stdc++.h>
using namespace std;

int main () {

  string in; cin >> in;
  int total = in.size();
  size_t times = 0;
  for (size_t i = 0; i < in.size(); i++) {
    if (in[i] == 'a') {
      ++times;
    }
  }
  if (times > in.size()/2) {
    cout << in.size() << endl;
  }
  else {
    while (total/2 >= times) {
      total--;
    }
    // total = (in.size() - times) + 1;
    // total = in.size() - total;
    cout << total << endl;
  }


  return 0;
}
