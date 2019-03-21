#include <bits/stdc++.h>
using namespace std;
using vec = vector<int>;
using ll = long long;

// int same[sum];
vec same;

void clean(int sum) {
  same.resize(sum);
  for (size_t i = 0; i < sum; i++) {
    same[i] = 0;
  }
}


int main () {

  ios::sync_with_stdio(false);

  int placesA, placesB, placesC;
  cin >> placesA >> placesB >> placesC;
  int sum = placesA + placesB + placesC;
  vec result;
  clean(sum);
  for (size_t i = 0; i < placesA; i++) {
    int genplaces;
    cin >> genplaces;
    same[genplaces]++;
  }
  for (size_t j = 0; j < placesB; j++) {
    int genplaces;
    cin >> genplaces;
    same[genplaces]++;
  }
  for (size_t k = 0; k < placesC; k++) {
    int genplaces;
    cin >> genplaces;
    same[genplaces]++;
  }

  for (size_t l = 0; l < same.size(); l++) {
    if (same[l] >= 3) {
      result.push_back(l);
    }
  }

  for (size_t z = 0; z < result.size(); z++) {
    cout << result[z] << ((z == result.size() - 1) ? "\n" : " ");
  }

  return 0;
}
