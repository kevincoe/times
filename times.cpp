#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int main() {
    // Semente para geração de números aleatórios
    random_device rd;
    mt19937 gen(rd());

    // Vetor para armazenar os nomes dos jogadores
    vector<string> jogadores;

    // Número de jogadores
    int numJogadores;

    cout << "Digite o número de jogadores: ";
    cin >> numJogadores;

    // Solicita e armazena os nomes dos jogadores
    for (int i = 0; i < numJogadores; i++) {
        string nome;
        cout << "Digite o nome do jogador " << i + 1 << ": ";
        cin >> nome;
        jogadores.push_back(nome);
    }

    // Embaralha os jogadores aleatoriamente
    shuffle(jogadores.begin(), jogadores.end(), gen);

    // Divide os jogadores em dois times iguais
    int meio = numJogadores / 2;
    vector<string> time1(jogadores.begin(), jogadores.begin() + meio);
    vector<string> time2(jogadores.begin() + meio, jogadores.end());

    // Imprime os times
    cout << "\nTime 1:" << endl;
    for (const string &nome : time1) {
        cout << nome << endl;
    }

    cout << "\nTime 2:" << endl;
    for (const string &nome : time2) {
        cout << nome << endl;
    }

    return 0;
}
