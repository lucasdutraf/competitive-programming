#include <bits/stdc++.h>
using namespace std;

int main () {

  int a = 1, b = 7;
  int counter = 0;
  for (size_t i = 0; i < 15; i++) {
    if (counter == 3) {
      a += 2;
      b += 5;
      counter = 0;
    }
    cout << "I=" << a << " J=" << b << endl;
    --b;
    ++counter;
  }

  return 0;
}
