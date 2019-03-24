#include <bits/stdc++.h>
using namespace std;

int main () {

  int auni = 0, adec = 0, buni = 1, bdec = 0;
  int counter = 0;
  for (size_t i = 0; i < 33; i++) {
    if (counter == 3) {
      adec += 2;
      buni -= 3;
      bdec += 2;
      counter = 0;
    }
    if (adec == 10) {
      adec = 0;
      auni += 1;
    }
    if (bdec == 10) {
      bdec = 0;
      buni +=1;
    }

    if ((adec == 0) && bdec != 0) {
      cout << "I=" << auni << " J=" << buni << "." << bdec << endl;
    }
    else if (bdec == 0 && adec != 0) {
      cout << "I=" << auni << "." << adec << " J=" << buni << endl;
    }
    else if (adec == 0 && bdec == 0) {
      cout << "I=" << auni << " J=" << buni << endl;
    }
    else {
      cout << "I=" << auni << "." << adec << " J=" << buni << "." << bdec << endl;
    }
    ++buni;
    ++counter;
  }

  return 0;
}
