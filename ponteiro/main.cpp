#include <iostream>
#include <fstream>  // Inclui a biblioteca de arquivos

using namespace std;

int main() {
    ofstream arquivoSaida("meuarquivo.txt");  // Cria e abre o arquivo para escrita

    if (arquivoSaida.is_open()) {  // Verifica se o arquivo foi aberto com sucesso
        arquivoSaida << "Olá, arquivo!" << endl;  // Escreve uma linha no arquivo
        arquivoSaida << "Essa é outra linha de texto." << endl;
        arquivoSaida.close();  // Fecha o arquivo depois de terminar
    } else {
        cout << "Erro ao abrir o arquivo para escrita." << endl;
    }

    return 0;
}
