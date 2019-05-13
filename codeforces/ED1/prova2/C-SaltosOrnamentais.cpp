#include <bits/stdc++.h>
using namespace std;
using mid = map<double, int>;
using dd = deque<double>;
using vd = vector<double>;
int main () {

  int times, num = 1;
  double dif,sup, sum = 0;
  vd aux;
  mid athlete;
  dd notes;
  cin >> times;
  while (times--) {
    cin >> dif;
    for (size_t i = 0; i < 7; i++) {
      cin >> sup;
      aux.push_back(sup);
    }
    sort(aux.begin(), aux.end());
    for (size_t k = 0; k < aux.size(); k++) {
      notes.push_back(aux[k]);
    }
    notes.pop_front();
    notes.pop_front();
    notes.pop_back();
    notes.pop_back();
    for (size_t i = 0; i < notes.size(); i++) {
      sum += notes[i];
    }
    sum *= dif;
    cerr << "sum: " << sum << '\n';
    athlete[sum] = num;
    notes.clear();
    aux.clear();
    sum = 0;
    num++;
  }
  // for (auto elem : athlete) {
  //   printf("%d %.1lf\n", elem.second, elem.first);
  // }
  cout.precision(3);
  for (auto iter = athlete.rbegin(); iter != athlete.rend(); ++iter) {
    //printf("%d %.1lf\n", iter->second, iter->first);
    //cout << fixed;
    cout << iter->second << " " << iter->first << endl;
        //std::cout << iter->first << ": " << iter->second << std::endl;
  }
  return 0;
}
