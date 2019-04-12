#include <bits/stdc++.h>
using namespace std;
using vi = vector <int>;
 int main () {
   int stps, total = 0, amo = 0;
   vi ans;
   cin >> stps;
   while (stps--) {
     total = 0;
     int in, out;
     cin >> out >> in;
     amo += in;
     total = amo - out;
     cerr << "total: " << total << endl;
     ans.push_back(total);
   }
   sort(ans.begin(), ans.end());
   cout << ans[ans.size() - 1] << endl;
   return 0;
 }
