#include <bits/stdc++.h>
using namespace std;
using vec = vector <int>;

double media(vec a) {
  double sum = 0;
  for (size_t i = 0; i < a.size(); i++) {
    sum += (double) a[i];
  }
  double s = (double) a.size();
  return (sum/s);
}

int main () {
  int b;
  vec a;
  while (cin >> b, b > 0) {
    a.push_back(b);
  }
  printf("%.2lf\n", media(a));
  return 0;
}
