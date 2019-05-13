#include <bits/stdc++.h>
#define debug(x) cerr << #x << ": " << x << endl;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string inic, fim, dura;
    cin >> inic >> fim >> dura;
    if (inic == "-") {
      string aux = "";
      aux.push_back(fim[0]);
      aux.push_back(fim[1]);
      int hrfim = stoi(aux);
      aux.clear();
      aux.push_back(fim[3]);
      aux.push_back(fim[4]);
      int minfim = stoi(aux);
      aux.clear();
      aux.push_back(fim[6]);
      aux.push_back(fim[7]);
      int segfim = stoi(aux);
      aux.clear();

      aux.push_back(dura[0]);
      aux.push_back(dura[1]);
      int hrdura = stoi(aux);
      aux.clear();
      aux.push_back(dura[3]);
      aux.push_back(dura[4]);
      int mindura = stoi(aux);
      aux.clear();
      aux.push_back(dura[6]);
      aux.push_back(dura[7]);
      int segdura = stoi(aux);
      aux.clear();

      long long totalfim = (3600 * hrfim) + (60 * minfim) + segfim;
      long long totaldura = (3600 * hrdura) + (60 * mindura) + segdura;
      if (totaldura > totalfim) {
        totalfim += (24 * 3600);
      }
      else {
        totalfim = totalfim;
      }
      long long totalinic = totalfim - totaldura;
      long long hrinic = totalinic/3600;
      long long mininic = (totalinic%3600)/60;
      long long seginic = (totalinic%3600)%60;
      cout << "Inicio: " << (hrinic >= 10 ? "" : ("0")) << hrinic << ":" << (mininic >= 10 ? "" : "0") << mininic << ":" << (seginic >= 10 ? "" : "0" ) << seginic << endl;
    }
    else if (fim == "-") {
      string aux = "";
      aux.push_back(inic[0]);
      aux.push_back(inic[1]);
      int hrinic = stoi(aux);
      aux.clear();
      aux.push_back(inic[3]);
      aux.push_back(inic[4]);
      int mininic = stoi(aux);
      aux.clear();
      aux.push_back(inic[6]);
      aux.push_back(inic[7]);
      int seginic = stoi(aux);
      aux.clear();

      aux.push_back(dura[0]);
      aux.push_back(dura[1]);
      int hrdura = stoi(aux);
      aux.clear();
      aux.push_back(dura[3]);
      aux.push_back(dura[4]);
      int mindura = stoi(aux);
      aux.clear();
      aux.push_back(dura[6]);
      aux.push_back(dura[7]);
      int segdura = stoi(aux);
      aux.clear();

      long long totalini = (3600 * hrinic) + (60 * mininic) + seginic;
      long long totaldura = (3600 * hrdura) + (60 * mindura) + segdura;
      long long totalfim = totalini + totaldura;
      if (totalfim >= (24*3600)) {
        totalfim -= (24 * 3600);
      }
      long long hrfim = totalfim/3600;
      long long minfim = (totalfim%3600)/60;
      long long segfim = (totalfim%3600)%60;
      cout << "Fim: " << (hrfim >= 10 ? "" : ("0")) << hrfim << ":" << (minfim >= 10 ? "" : "0") << minfim << ":" << (segfim >= 10 ? "" : "0" ) << segfim << endl;
    }
    else if (dura == "-") {
      string aux = "";
      aux.push_back(inic[0]);
      aux.push_back(inic[1]);
      int hrinic = stoi(aux);
      aux.clear();
      aux.push_back(inic[3]);
      aux.push_back(inic[4]);
      int mininic = stoi(aux);
      aux.clear();
      aux.push_back(inic[6]);
      aux.push_back(inic[7]);
      int seginic = stoi(aux);
      aux.clear();

      aux.push_back(fim[0]);
      aux.push_back(fim[1]);
      int hrfim = stoi(aux);
      aux.clear();
      aux.push_back(fim[3]);
      aux.push_back(fim[4]);
      int minfim = stoi(aux);
      aux.clear();
      aux.push_back(fim[6]);
      aux.push_back(fim[7]);
      int segfim = stoi(aux);
      aux.clear();

      long long totalini = (3600 * hrinic) + (60 * mininic) + seginic;
      long long totalfim = (3600 * hrfim) + (60 * minfim) + segfim;
      if (totalfim < totalini) {
        totalfim += (3600 * 24);
      }
      long long totaldura = totalfim - totalini;
      long long hrdura = totaldura/3600;
      long long mindura = (totaldura%3600)/60;
      long long segdura = (totaldura%3600)%60;
      cout << "Duracao: " << (hrdura >= 10 ? "" : ("0")) << hrdura << ":" << (mindura >= 10 ? "" : "0") << mindura << ":" << (segdura >= 10 ? "" : "0" ) << segdura << endl;
    }
    return 0;
}
