#include <bits/stdc++.h>
using namespace std;
using vd = vector<double>;
typedef numeric_limits<double> dbl;

int main () {

  int n, aux;
  vd dr;
  double sum = 0, res;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    double a = (double) aux;
    sum += a/100.00;
  }
  res = (sum/(double)n) * 100.0;
  //cout.precision(dbl::max_digits10);
  printf("%.12lf\n", res);
  //cout << res << endl;
  return 0;
}
