#include <bits/stdc++.h>
using namespace std;

int main () {

  int right = 0;
  double grade, sum = 0.0;
  int response;

  while (true) {
    cin >> grade;
    if (grade > 10.0 || grade < 0.0) {
      cout << "nota invalida" << endl;
    }
    else {
      sum += grade;
      right++;
    }
    if (right == 2) {
      printf("media = %.2lf\n", (sum/2.0));
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> response;
      while (true) {
        if (response == 1) {
          break;
        }
        else if (response == 2) {
          break;
        }
        else {
          cout << "novo calculo (1-sim 2-nao)" << endl;
        }
        cin >> response;
      }
      if (response == 2) {
        break;
      }
      else if (response == 1) {
        sum = 0;
        right = 0;
      }
    }
  }

  return 0;
}
