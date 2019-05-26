//g++ -o prog -W -Wall -Wextra -std=c++17 -O2
#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;
using si = set<int>;
using vi = vector<int>;

int main()
{
    ios_base::sync_with_stdio(false);
    int dia, mes, ano;
    long long a = 0;
    si ans;
    vi res;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    res.push_back(dia/10);
    res.push_back(dia%10);
    res.push_back(mes/10);
    res.push_back(mes%10);
    res.push_back(ano/10);
    res.push_back(ano%10);
    sort(res.begin(), res.end());
    do {
      a++;
    }
    while (next_permutation(res.begin(), res.end()));
    cout << a << endl;
    return 0;
}
