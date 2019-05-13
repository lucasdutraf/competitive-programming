#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main () {

  ll n, k;
  cin >> n >> k;
  if (n % 2 == 0) {
    if (k >n/2) {//o numero da posição vai ser par
      cout<<(k-(n/2))*2 << endl;
    }
    else {//o numero da posição vai ser ímpar
      cout<<k*2-1 << endl;
    }
  }
  else {
    if (k>n/2+1) {//o numero da posição vai ser par
      cout<<(k-((n/2)+1))*2 << endl;
    }
    else {//o numero da posição vai ser ímpar
      cout<<k*2-1 << endl;
    }
  }

  return 0;
}
