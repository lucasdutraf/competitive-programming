#include <bits/stdc++.h>
using namespace std;
using vecs = vector<string>;
using vec = vector<int>;

int main () {

  //se for menor soma + 24h

  int cleComCicle, sumst = 0, sumwk = 0;
  vecs st, wk;
  vec sti, wki;
  string sleepTime, wakeUp;
  cin >> cleComCicle >> sleepTime >> wakeUp;

  st.push_back(sleepTime.substr(0,2));
  st.push_back(sleepTime.substr(3,5));
  st.push_back(sleepTime.substr(6,7));
  wk.push_back(wakeUp.substr(0,2));
  wk.push_back(wakeUp.substr(3,5));
  wk.push_back(wakeUp.substr(6,7));


  for (auto elem : st) {
    sti.push_back(stoi(elem));
  }

  for (auto elem : wk) {
    wki.push_back(stoi(elem));
  }

  sti[0] *= 3600;
  sti[1] *= 60;
  wki[0] *= 3600;
  wki[1] *= 60;

  for (auto elem : sti) {
    sumst += elem;
  }

  for (auto elem : wki) {
    sumwk += elem;
  }

  if (sumst > sumwk) {
    sumwk += 86400;
    cout << (sumwk - sumst)/cleComCicle << endl;
  }
  else if (sumst == sumwk) {
    sumwk += 86400;
    cout << (sumwk - sumst)/cleComCicle << endl;
  }
  else {
    cout << (sumwk - sumst)/cleComCicle << endl;
  }

  return 0;
}
