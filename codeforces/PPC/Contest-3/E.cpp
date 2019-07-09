#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;

int main () {

    int n; cin >> n; vi ans; ll a = 0;
    for (int i = 2; i <= n; i++)
    {
        ans.push_back(i);
    }
    do {
        if(ans[0]!=2 && ans[ans.size()-1]!=2) a++;
    }
    while (next_permutation(ans.begin(), ans.end()));

    cout << a << endl;
    return 0;
}
