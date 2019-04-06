#include <bits/stdc++.h>
using namespace std;
using mid = map<int, double>;
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
    athlete[num] = sum;
    notes.clear();
    aux.clear();
    sum = 0;
    num++;
  }
  //sort(athlete.begin(), athlete.end());

  for (auto elem : athlete) {
    cout << elem.first << " " << elem.second << endl;
  }
  return 0;
}
