#include <bits/stdc++.h>
using namespace std;
using dc = deque<char>;

int main () {

  string in;
  int qtdp;
  dc as;
  //getline(cin, in, '+');
  cin >> in;
  sort(in.begin(), in.end());
  for (size_t i = 0; i < in.size(); i++) {
    as.push_back(in[i]);
  }
  while (as.front() == '+') {
    as.pop_front();
  }
  for (size_t j = 0; j < as.size(); j++) {
    cout << as[j] << ((j == as.size() - 1) ? "\n" : "+");
  }
  return 0;
}
