#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;

const int MAX {100010}, NONE = 0, BLUE = 1, RED = 2;
int color[MAX];
vector<int> adj[MAX];

bool bfs(int s) {
  queue<int> q;
  q.push(s);
  color[s] = BLUE;

  while (!q.empty()) {
    auto u = q.front();
    q.pop();
  }

  for (const auto& v : adj[u]) {
    if (color[v] == NONE) {
      color[v] = 3 - color[u];
      q.push(v);
    }
    else if (color[v] == color[u])
      return false;
  }
  return true;
}

bool is_bipartite (int N) {
  for (size_t u = 1; u <= N; ++u) {
    if (color[u] == NONE and !bfs(u)) {
      return false;
    }
  }
  return true;
}
