#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main () {

  int qtdAmigos, garrafas, mlDeDrinkCadaGarrafa, limaos, fatiasLimaosCortados;
  int gramasdesal, mldebebidapradrink, gramasdesalpradrink;

  cin >> qtdAmigos >> garrafas >> mlDeDrinkCadaGarrafa >> limaos >> fatiasLimaosCortados;
  cin >> gramasdesal >> mldebebidapradrink >> gramasdesalpradrink;

  int totaldebebidas = (mlDeDrinkCadaGarrafa * garrafas)/mldebebidapradrink;
  int totaldefatias = limaos * fatiasLimaosCortados;
  int totalsal = gramasdesal/gramasdesalpradrink;

  int minm = min(totalsal, totaldefatias);
  minm = min(minm, totaldebebidas);

  cout << (minm/qtdAmigos) << endl;

  return 0;
}
