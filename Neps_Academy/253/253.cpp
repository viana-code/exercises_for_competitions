// #include <bits/stdc++.h>

// using namespace std;

// typedef long long int ll;

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     ll n, t, h;
//     string nome;
//     map<int, string>Map;
//     list<int> l;
//     list<string> alunos;
//     list<string> timeOrdenado;
//     vector<string> v;
//     stack<string> pilha;

//     cin >> n >> t;

//     for(int i = 0; i < n; i++) {
//         cin >> nome >> h;

//         Map[h] = nome;
//         l.push_back(h);
//     }

//     l.sort();
//     l.reverse();


//     for(auto it = l.begin(); it != l.end(); ++it) {
//         string jogador;
//         auto itMap = Map.find(*it);
//         jogador = itMap->second;
//         alunos.push_back(jogador);
//     }

//     for(int i = 0; i < t; i++) {
//         int j = 0;
//         string posicao = "Time " + to_string(i + 1);
//         timeOrdenado.push_back(posicao);
//         for(auto it = alunos.begin(); it != alunos.end(); ++it) {
//         vector<string> temp;
//         temp.push_back(*next(it, j));
//         j+=3;
//     }
    

//     for(auto it = alunos.begin(); it != alunos.end(); ++it) {
//         cout << *it << " ";
//     }

//     // for(const auto& i : v) cout << i << " ";
    
    
//     return 0;
// }