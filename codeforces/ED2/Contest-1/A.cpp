//g++ -o prog -W -Wall -Wextra -std=c++17 -O2
#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using msi = map<string, int>;

int main(){
    ios_base::sync_with_stdio(false);
    int numfab, auxqtd, numdem, ans = 0;
    string auxindi;
    msi oferta, demanda;
    cin >> numfab;
    while (numfab--) {
      cin >> auxindi >> auxqtd;
      oferta[auxindi] += auxqtd;
    }
    cin >> numdem;
    while (numdem--) {
      cin >> auxindi >> auxqtd;
      demanda[auxindi] += auxqtd;
    }
    for (auto elem : demanda) {
      if (demanda[elem.first] <= oferta[elem.first]) {
        ans++;
      }
    }
    if (ans == demanda.size()) {
      cout << "Sim" << endl;
    }
    else {
      cout << "Nao" << endl;
    }


    return 0;
}
