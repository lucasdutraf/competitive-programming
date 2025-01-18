#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    int numberOfSnakes, multiplier; cin >> numberOfSnakes >> multiplier;
    vector<int> weight;

    for (size_t i = 0; i < numberOfSnakes; i++)
    {
        int thickness, length; cin >> thickness >> length;
        int snakeWeight = thickness * length;
        weight.push_back(snakeWeight);
    }
    

    return 0;
}
