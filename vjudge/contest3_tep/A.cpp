#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int fifteenHundred() {
  int count = 1;
  for (size_t i = 2; i < 200000; i++) {
    if ((i % 2 == 0) || (i % 3 == 0 ) || (i % 5 == 0)) {
      count++;
    }
    if (count == 1500) {
      return i;
    }
  }
  return 0;
}

int main () {
  ios_base::sync_with_stdio(false);

  int number = fifteenHundred();

  cout << "The 1500'th ugly number is "<< number << "." << endl;

  return 0;
}
