#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

int main () {

    float n, p;

    cin >> n >> p;

    for(int i=0; i<=n; i++){
        cout << p/i << " ";
    }

    cout << endl;

    return 0;
}