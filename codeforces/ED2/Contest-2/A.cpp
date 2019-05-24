//g++ -o prog -W -Wall -Wextra -std=c++17 -O2
#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    long long n, m;
    priority_queue<pair<long long, long long>> cheq;
    priority_queue<pair<long long, long long>> comer;
    vector<pair<long long, long long>> res;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        long long el;
        cin >> el;
        cheq.push(make_pair(-el, i + 1));
    }
    for (int i = 0; i < m; i++)
    {
        long long el;
        cin >> el;
        comer.push(make_pair(-el, i + 1));
    }

    while (n-- || cheq.size())
    {
        if (abs(cheq.top().first) >= abs(comer.top().first))
        {
            res.push_back(make_pair(cheq.top().second, comer.top().second));
            cheq.pop();
            comer.pop();
        }
        else if (abs(cheq.top().first) < abs(comer.top().first)) {
            cheq.pop();
        }
    }

    cout<<res.size()<<endl;

    for(auto el : res){
        cout<<el.first<<' '<<el.second<<endl;
    }

    return 0;
}
