#include <bits/stdc++.h>
using namespace std;
using edge = pair<int, int>;
using vi = vector<int>;

const int MAX {100010};
bitset<MAX> visited;
vector<int> adj[MAX];
int parent[MAX];

bool dfs(int u) {
  if (visited[u]) return false;

  visited[u] = true;

  for (const auto& v: adj[u]) {
    parent[v] = parent[v] ? parent[v] : u;

    if (visited[v] && v != parent[u]) {
      return true;
    }
    else
      if (dfs(v)) return true;
  }
}

bool has_cycle(int N) {
  visited.reset();
  memset(parent, 0, sizeof parent);

  for (size_t u = 1; u <= N; u++) {
    if (!visited[u] && dfs(u))
      return true;
  }
  return false;
}


int main () {
  int n;  cin >> n;
  vector<edge> edges;
  vector <vi> ma;
  for (size_t i = 1; i <= n; i++) {
    int conw; cin >> conw;
    edges.push_back(make_pair(i, conw));
  }

  for (auto& [u, v] : edges) {
    adj[u].push_back(v);
  }

  cout << (has_cycle(n) ? "YES" : "NO") << endl;

  return 0;
}
