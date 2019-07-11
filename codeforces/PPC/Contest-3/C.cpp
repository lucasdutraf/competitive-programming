#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

const int MAX {100010}, NONE = 0, BLUE = 1, RED = 2;
int color[MAX];
vector<int> adj[MAX];

bool bfs(int s, const vector<int> paintedblue, const vector<int> paintedred) {
    queue<int> q;
    q.push(s);
    color[s] = NONE;
    for (auto elem : paintedblue) {
        color[elem] = BLUE;
        cerr << "blue: " << elem << endl;
    }
    for (auto elem : paintedred) {
        color[elem] = RED;
        cerr << "red: " << elem << endl;        
    }
    
    while (!q.empty())
    {
        auto u = q.front();
        q.pop();

        for (const auto& v : adj[u]) {
            if (color[v] == NONE) {
                color[v] = 3 - color[u];
                q.push(v);
            }
            else if (color[v] == color[u])
                return false;
        }
    }
    return true;
}
bool is_bipartite(int N, const vector<int> paintedblue, const vector<int> paintedred) {
    for (int u = 1; u <= N; ++u)
    {
        if (color[u] == NONE and not bfs(u, paintedblue, paintedred))
            return false;
    }
    return true;
    
}

int main () {

    int n, m; cin >> n >> m;
    vector<int> blue;
    vector<int> red;
    int is = m;
    while (is--)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int p;
    cin >> p;
    while (p--)
    {
        int aux; cin >> aux;
        blue.push_back(aux);
    }
    int s;
    cin >> s;
    while (s--)
    {
        int aux; cin >> aux;
        red.push_back(aux);
    }
    
    cout << (is_bipartite(m, blue, red) ? "YES" : "NO") << endl;

    return 0;
}