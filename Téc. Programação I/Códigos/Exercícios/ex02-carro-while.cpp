//Exercício 2: 
//O programa de cadastro de carro deve simular o carro andando e aumentado a sua quilometragem, quando a quilometragem for maior que 100, o programa deve apresentar a seguinte mensagem: “Levar carro para a revisão”
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string marca = "BMW";
    string modelo = "X1";
    int ano = 2023;
    string cor = "Prata";
    bool alugado = true;
    double tabelaFip = 2568.32;
    float quilometragem = 50.00f;

    cout << "-----------------------------------------" << endl;
    cout << "--------------BEM-VINDO!-----------------" << endl;
    cout << "--------LOCADORA---DE---CARROS-----------" << endl;
    cout << "-----------------------------------------" << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "---MOSTRAR QUILOMETRAGEM---: " << quilometragem << "\n ";
    // Simula que o carro tá andando

    while (quilometragem <= 100.00f)
    {
        cout << "Carro pode circular: " << quilometragem << " ";
        quilometragem++;
    }
    cout << "Levar o carro para a revisao periodica\n";
    cout << "--------------------------------------\n";

    return 0;
}

