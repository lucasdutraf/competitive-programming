#include <bits/stdc++.h>
using namespace std;

int main () {
  //ponteiro = head, next; unsigned = size; I = info
  //ponteiro = head, next, tail, prev; unsigned = size; I = info
  int p, s, t, n, sumsimf = 0, sumdupf = 0, totsim = 0, totdup = 0;
  double res;
  cin >> p >> s >> t >> n;
  sumsimf = p + s;
  sumdupf = (p * 2) + s;
  totsim = (n * (t + p)) + sumsimf;
  totdup = (n * (t + (2 * p))) + sumdupf;

  res = ((double) totsim * 100.0)/ (double) totdup;

  printf("%.2lf\n", 100.00 - res);
  return 0;
}
