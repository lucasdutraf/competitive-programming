#include <bits/stdc++.h>
using namespace std;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;

const int MAX {210}, oo {1000000010};
int dist[MAX][MAX], pred[MAX][MAX];
vector<int> adj[MAX];

void fw (int N) {
  for (size_t u = 1; u <= N; u++) {
    for (size_t v = 1; v <= N; v++) {
      dist[u][v] = oo;
    }
  }

  for (size_t u = 1; u <= N; u++) {
    dist[u][u] = 0;
    pred[u][u] = u;
  }
  for (size_t u = 1; u <= N; u++) {
    for (const auto& [v, w] : adj[u]) {
      dist[u][v] = w;
      pred[u][v] = u;
    }
  }

  for (size_t k = 1; k <= N; k++) {
    for (size_t u = 1; u <= N; i++) {
      for (size_t v = 1; v <= N; v++) {
        dist[u][v] = dist[u][k] + dist[k][v];
        pred[u][v] = pred[k][v];
      }
    }
  }
}

void dfs(int u){
  if(visited[u]) return;

  visited[u] = true;

  for(const auto& v: reg[u])
    dfs(v);
}

int connected_comp(int N){
  visited.reset();
  int ans = 0;
  for(int u = 1; u <= N; ++u){
    if(not visited[u]){
      dfs(u);
      ans++;
    }
  }

  return ans;
}

int main () {
  int N, R, aux1, aux2, aux3;


  cin >> N >> R;
  for(int i = 1; i <= R; i++){
    cin >> aux1 >> aux2;
    reg[aux1].push_back(aux2);
    reg[aux2].push_back(aux1);
  }
  aux3 = connected_comp(R);
  cout << N - aux3 << endl;
  return 0;
}
