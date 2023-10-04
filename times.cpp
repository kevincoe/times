#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    // Semente para geração de números aleatórios
    srand(static_cast<unsigned>(time(0)));

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
    random_shuffle(jogadores.begin(), jogadores.end());

    // Divide os jogadores em três times iguais
    int terco = numJogadores / 3;
    vector<string> time1(jogadores.begin(), jogadores.begin() + terco);
    vector<string> time2(jogadores.begin() + terco, jogadores.begin() + 2 * terco);
    vector<string> time3(jogadores.begin() + 2 * terco, jogadores.end());

    // Imprime os times
    cout << "\nTime 1:" << endl;
    for (const string &nome : time1) {
        cout << nome << endl;
    }

    cout << "\nTime 2:" << endl;
    for (const string &nome : time2) {
        cout << nome << endl;
    }

    cout << "\nTime 3:" << endl;
    for (const string &nome : time3) {
        cout << nome << endl;
    }

    return 0;
}
