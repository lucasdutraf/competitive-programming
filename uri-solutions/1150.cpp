#include <bits/stdc++.h>
using namespace std;

int main () {

  int x, z, count = 0, temp = 0;
  cin >> x >> z;
  while (z <= x) {
    cin >> z;
  }
  temp = x ;
  while (x <= z) {
    if (x > z) {
      break;
    }
    x =  x + temp;
    temp++;
    count++;
  }
  cout << count + 1 << endl;

  return 0;
}
