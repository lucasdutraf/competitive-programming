#include <bits/stdc++.h>
using namespace std;

int main () {
  int i = 1, j = 7;
  int counter = 0;

  while ((i != 9) || (j != 5)) {
    if (j == 5) {
      cout << "I=" << i << " J=5" << endl;
      j = 7;
      i += 2;
    }
    cout << "I=" << i << " J=" << j << endl;
    // if ((i == 9) && (j == 5)) {
    //   cout << "I=9 J=5 oi" << endl;
    // }
    j--;
  }
  cout << "I=9" << " J=5"<< endl;

  return 0;
}
