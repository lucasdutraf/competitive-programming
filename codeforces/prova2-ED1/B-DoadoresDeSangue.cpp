#include <bits/stdc++.h>
using namespace std;
using pic = pair<int, string>;
using sp = set<pic>;

int main () {

  pic person;
  sp data;
  int qtd, a;
  string b;
  cin >> qtd;
  while (qtd--) {
    cin >> a >> b;
    person = make_pair(a, b);
    data.insert(person);
  }
  cout << data.size() << endl;

  return 0;
}
