#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std;

int n;
ll v[500100], p[500100], sum;
int main(){
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> v[i];
    sum += v[i];
    if(!i) p[i] = v[i];
    else p[i] = v[i] + p[i-1];
  }

  ll ans = 0;
  ll c1 = 0, c2=0;
  if(sum){
    for (int i = 1; i < n; i++) {
      if((ll)3*p[i] == sum){
        c1++;
        ans += c2;
      }
      else if((ll)3*p[i] == (ll)2*sum){
        c2++;
        ans += c1;
      }
    }
  }else{
    for (int i = 0; i < n-1; i++) {
      if((ll)3*p[i] == sum){
        ans +=c1;
        c1++;
      }
    }
    cout << ans << endl;
    return 0;
  }

  cout << ans << endl;


  return 0;
}
