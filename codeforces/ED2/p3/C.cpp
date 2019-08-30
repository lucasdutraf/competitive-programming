#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAX{1000000};
bitset<MAX> visited;
vector<ll> reg[MAX];
ll dist[MAX];
priority_queue<ll> comp;

void bfs(int s) {

  int val = 0;
  queue<int> q;
  q.push(s);
  visited[s] = true;
  dist[s] = 0;
  while (not q.empty()) {
    auto u  = q.front();
    val++;
    q.pop();
    for (auto& v : reg[u]){
      if (visited[v]) {
        continue;
      }
      visited[v] = true;
      dist[v] = dist[u] + 1;
      q.push(v);
    }
  }

  comp.push(val);
}

int connected_comp(int N){
  visited.reset();
  ll ans = 0;
  for(ll u = 1; u <= N; ++u){
    if(not visited[u]){
      bfs(u);
    }
  }

  return ans;
}

int main () {
  ll n, m, c, aux1, aux2, cont = 0; cin >> n >> m >> c;

  for(size_t i = 1; i <= c; i++){
    cin >> aux1 >> aux2;
    reg[aux1].push_back(aux2);
    reg[aux2].push_back(aux1);
  }
  ll a = connected_comp(c);
  ll b = comp.top();
  while (!comp.empty()) {
    if (comp.top() >= m) {
      comp.pop();
      cont++;
    }
    else {
      comp.pop();
    }
  }
  if ( cont == 0) cout << "0" << endl;
  else {
    cout << cont << " "<< b << endl;
  }
  return 0;
}
