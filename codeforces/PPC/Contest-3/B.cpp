#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

struct aluno {
    int index;
    int qe;
    int tl;

    const bool operator<(const aluno &t) const{
        if (t.qe != qe) {
            return t.qe < qe;
        }
        if (t.tl != tl) {
            return t.tl > tl;
        }
        if (t.index != index) {
            return t.index > index;
        }
    }
};

int main () {

    int in, out; cin >> in >> out;
    vector<aluno> al;

    for (size_t i = 1; i <= in; i++)
    {
        int q, t; cin >> q >> t;
        al.push_back(aluno{i, q, t});
    }
    sort(al.begin(), al.end());

    for (size_t i = 0; i < out; i++)
    {
        cout << al[i].index << (i == out - 1 ? "\n" : " ");
    }
    return 0;
}
