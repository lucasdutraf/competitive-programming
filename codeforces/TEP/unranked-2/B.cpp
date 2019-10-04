#include<bits/stdc++.h>

using namespace std;

int c[101];
int main(){
  int n, h[101], a[101];
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> h[i] >> a[i];
    c[h[i]]++;
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans+=c[a[i]];
  }

  cout << ans << endl;

  return 0;
}
