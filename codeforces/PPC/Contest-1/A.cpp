#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string a, b;
    int d;
    cin >> a >> b >> d;
    if (a == "Fogo" && b == "Ar") {
      d *= 2;
    }
    else if (a == "Fogo" && b == "Agua"){
      d /= 2;
    }
    else if (a == "Fogo" && b == "Terra") {
      d = 0;
    }
    else {
      d = d;
    }

//----------------------- agua ---------------------------

    if (a == "Agua" && b == "Ar") {
      d = 0;
    }
    else if (a == "Agua" && b == "Terra"){
      d /= 2;
    }
    else if (a == "Agua" && b == "Fogo") {
      d *= 2;
    }
    else {
      d = d;
    }

//---------------------------ar-----------------------
  if (a == "Ar" && b == "Agua") {
    d = 0;
  }
  else if (a == "Ar" && b == "Terra"){
    d *= 2;
  }
  else if (a == "Ar" && b == "Fogo") {
    d /= 2;
  }
  else {
  d = d;
  }
//-------------------- terra --------------------

    if (a == "Terra" && b == "Ar") {
      d /= 2;
    }
    else if (a == "Terra" && b == "Agua"){
      d *= 2;
    }
    else if (a == "Terra" && b == "Fogo") {
      d = 0;
    }
    else {
      d = d;
    }

    cout << d << endl;
    return 0;
}
