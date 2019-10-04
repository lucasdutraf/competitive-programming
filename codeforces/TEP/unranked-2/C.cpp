#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, m;
int main(){
  cin >> n >> m;

  ll ma = n-(m-1);
  ll ans2 = ma*(ma-1)/2;

  ll k = n/m;
  ll mo = n%m;
  ll ans1 = (mo)*(k*(k+1)/2);
  ans1 += (m-mo)*(k*(k-1)/2);


  cout << ans1 << " " << ans2 << endl;



  return 0;
}
