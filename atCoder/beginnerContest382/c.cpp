// #include <bits/stdc++.h>
#include <vector>
#include <iostream>

 
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll> vll;
typedef vector<ll> vl;
 
const int MAX = 2e5;
 
auto solve()
{
    int n, m;
    cin >> n >> m;
 
    vi ans(MAX + 1, -1);
    int curr = MAX;
    for(int i = 1; i <= n; i++) 
    {
        int t;
        cin >> t;
 
        while(curr >= t)
        {
            ans[curr--] = i;
        }
    }
 
    while(m--)
    {
        int t;
        cin >> t;
 
        cout << ans[t] << "\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll t = 1;
    // cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}