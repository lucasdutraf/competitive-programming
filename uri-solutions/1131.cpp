#include <bits/stdc++.h>
using namespace std;

int main () {

  int interg, gremiog, option, intert = 0, gremiot = 0, total = 1, empates = 0, vitint = 0, vitgrem = 0;

  while (true) {
    cin >> interg >> gremiog;
    if (interg == gremiog) {
      empates++;
    }
    else if (interg > gremiog) {
      vitint++;
    }
    else {
      vitgrem++;
    }
    intert += interg;
    gremiot += gremiog;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> option;
    if (option != 1) {
      cout << total << " grenais" << endl;
      cout << "Inter:" << vitint << endl;
      cout << "Gremio:" << vitgrem << endl;
      cout << "Empates:" << empates << endl;
      if (intert == gremiot) {
        cout << "Nao houve vencedor" << endl;
      }
      else if (intert > gremiot) {
        cout << "Inter venceu mais" << endl;
      }
      else {
        cout << "Gremio venceu mais" << endl;
      }
      break;
    }
    else {
      total++;
    }
  }

  return 0;
}
