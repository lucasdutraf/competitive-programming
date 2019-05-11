#include <bits/stdc++.h>
using namespace std;

int main () {

  int a, b;
  char c;
  scanf("%d %c %d", &a, &c, &b);
  cout << (c == '+' ? (a + b) : (a - b)) << endl;
  return 0;
}
