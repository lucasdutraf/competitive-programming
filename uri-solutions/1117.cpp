#include <bits/stdc++.h>
using namespace std;

int main () {

  int right = 0;
  double grade, sum = 0.0;

  while (right < 2) {
    cin >> grade;
    if (grade > 10.0 || grade < 0.0) {
      cout << "nota invalida" << endl;
    }
    else {
      sum += grade;
      right++;
    }
  }
  printf("media = %.2lf\n", (sum/2.0));

  return 0;
}
