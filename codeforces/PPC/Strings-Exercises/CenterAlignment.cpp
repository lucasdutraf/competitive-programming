#include <bits/stdc++.h>
using namespace std;
using vs = vector<string>;
using vi = vector<int>;

string solve(vs a) {
  vi aux;
  string res;
  for (size_t i = 0; i < a.size(); i++) {
    aux.push_back(a[i].size());
  }
  sort(aux.begin(), aux.end());
  for (size_t i = 1; i <= aux[aux.size() - 1] + 2; i++) {
    res.push_back('*');
  }
}

int main () {

  vs lines;
  string line;
  while (getline(cin, line)) {
    lines.push_back(line);
  }
  return 0;
}
