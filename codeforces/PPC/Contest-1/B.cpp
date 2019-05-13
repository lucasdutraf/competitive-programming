#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;
using namespace std;
using vi = vector<int>;
using pic = pair<int, char>;
using ds = queue<pic>;

int main(){
    int sum = 0;
    ds ac;
    vi ans;
    string card;
    ios_base::sync_with_stdio(false);
    for (size_t i = 0; i < 52; i++) {
      cin >> card;
      if (card[0] == 'A') {
        ac.push(make_pair(1, card[1]));
      }
      else if ((card[0] == 'T') || (card[0] == 'J') ||( card[0] == 'Q') || (card[0] == 'K')) {
        ac.push(make_pair(10, card[1]));
      }
      else {
        int ai = card[0] - '0';
        ac.push(make_pair(ai, card[1]));
      }
    }
    for (size_t j = 0; j < ac.size(); j++) {
      if ((ac.front().first + sum) > 21) {
        ans.push_back(sum);
        break;
      }
      sum += ac.front().first;
      ac.pop();
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - 1] << endl;
    return 0;
}
