#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

int main () {
    int c;
    char op;
    string livro;
    stack<string> livros;

    cin >> c;

    while(c--){
        cin >> op;
        getline(cin, livro);
        if(op== '?'){
            if(livros.empty()) cout << "Backlog vazio" << endl;
            else {
                string aux = livros.top();
                reverse(aux.begin(), aux.end());
                aux.pop_back();
                reverse(aux.begin(), aux.end());
                cout << aux << endl;
                livros.pop();
            }
        } 
        else livros.push(livro);
    }


    return 0;
}
