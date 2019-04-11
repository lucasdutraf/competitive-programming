#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main () {

  int gr, les, nso, us, nums = 0, posles, posgr;
  vi aux, s, mds;
  cin >> nso;
  while (nso--) {
    cin >> us;
    aux.push_back(us);
    s.push_back(us);
  }
  mds = s;
  sort(aux.begin(), aux.end());
  gr = aux[aux.size() - 1];
  les = aux[0];
  reverse(mds.begin(), mds.end());
  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] == les) {
      posles = i;
    }
  }
  posles = s.size() - (posles + 1);
  for (size_t j = 0; j < s.size(); j++) {
    if (s[j] == gr) {
      posgr = j;
    }
  }
  while (s[0] != gr) {
    if (posgr == s[0]) {
      break;
    }
    swap(s[posgr - 1], s[posgr]);
    nums++;
    posgr -= 1;
  }
  cerr << "aqui" << endl;
  // while (s[s.size() - 1] != les) {
  //   if (posles == s[s.size() - 1]) {
  //     break;
  //   }
  //   swap(s[posles], s[posles + 1]);
  //   nums++;
  //   posles -= 1;
  // }
  cout << nums << endl;
  return 0;
}
