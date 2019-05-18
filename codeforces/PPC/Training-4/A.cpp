#include <bits/stdc++.h>
using namespace std;

bool isNotA (char b) {
  return b != 'a';
}

int main () {

  string in, ans = "";
  cin >> in;
  int as = count(in.begin(), in.end(), 'a');
  if (as > (in.size()/2)) {
    cout << in.size() << endl;
  }
  else {
    int size = in.size();
    while (as <= size/2) {
      --size;
    }
    cout << size << endl;
  }
  return 0;
}
