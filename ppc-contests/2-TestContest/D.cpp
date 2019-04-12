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
  sort(aux.begin(), aux.end());
  gr = aux[aux.size() - 1];
  les = aux[0];

  for (size_t j = 0; j < s.size(); j++) {
    if (s[j] == gr) {
      posgr = j;
      break;
    }
  }
  while (s[0] != gr) {
    cerr << "greater - s[" << posgr << "]: "<< s[posgr] << endl;
    cerr << "comeco greater - num: " << nums << endl;
    if (gr == s[0]) {
      cerr << "greater dentro - s[" << posgr << "]: "<< s[posgr] << endl;
      cerr << "entrou memo: " << endl;
      break;
    }
    swap(s[posgr - 1], s[posgr]);
    cerr << "swap" << endl;
    nums++;
    posgr--;
    cerr << "final greater - num: " << nums << endl;
  }
  mds = s;
  reverse(mds.begin(), mds.end());
  for (size_t i = 0; i < mds.size(); i++) {
    if (mds[i] == les) {
      posles = i;
      break;
    }
  }
  posles = s.size() - (posles + 1);
  while (s[s.size() - 1] != les) {
    cerr << "lesser - /s[" << posles << "]: "<< s[posles] << endl;
    cerr << "comeco lesser - num: " << nums << endl;
    if (les == s[s.size() - 1]) {
      break;
    }
    swap(s[posles], s[posles + 1]);
    nums++;
    posles++;
    cerr << "final lesser - num: " << nums << endl;
  }
  cout << nums << endl;
  return 0;
}
