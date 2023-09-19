// Situação Problema 2

// Você é um desenvolvedor de software em uma empresa que gerencia estacionamentos de carros. Seu desafio é criar um programa em C++ para gerenciar o estacionamento. O estacionamento tem um número limitado de vagas para carros e motos.
// No início do programa, o usuário deve inserir o número total de vagas para carros e o número total de vagas para motos.
// O programa deve então exibir um menu com as seguintes opções:
// Entrada de veículo (carro ou moto)
// Saída de veículo (carro ou moto)
// Mostrar número de vagas disponíveis
// Sair

// Se um veículo entra, o programa deve deduzir uma vaga do tipo correspondente e verificar se há espaço disponível. Se não houver, informar que o estacionamento para esse tipo de veículo está cheio.
// Se um veículo sai, uma vaga deve ser liberada do tipo correspondente.
// O programa deve continuar rodando até que o usuário escolha a opção de sair.

// Requisitos:

// Use apenas variáveis, entrada e saída de dados, if-else e loops (while ou for) 

#include <iostream> 
#include <string>
using namespace std;

int main() {

  string automovel;
  int numVagasMoto;
  int vagaM;
  int numVagasCarro;
  int vagaC;
  int carrosEst = 0;
  int motosEst = 0;
  int opcao;

  cout << endl;
  cout << "===Bem Vindo ao Gerenciamento de Vagas do Nosso estacionamento!===" << endl;

  cout << "Por favor, digite o numero total de vagas para carros: ";
  cin >> numVagasCarro;
  vagaC = numVagasCarro;
  cout << " " << endl;

  cout << "Por favor, digite o numero total de vagas para motos; ";
  cin >> numVagasMoto;
  vagaM = numVagasMoto;
  cout << " " << endl;

  while (true)
  {
  cout << "=========== Menu Estacionamento ===========" << endl;
  cout << "1 - Entrada de veiculos." << endl;
  cout << "2 - Saida de veiculos." << endl;
  cout << "3 - Exibir numero de vagas disponiveis." << endl;
  cout << "0 - Sair" << endl;
  cout << "==============================================" << endl;
  cout << "Escolha uma opcao do menu!: ";

  int opcao;
  cin >> opcao;

    switch (opcao)
    {
      case 1:
      {
        cout << "Digite o tipo do veiculo (carro ou moto): ";
        cin >> automovel;

        if( automovel == "carro")
        {
          if (carrosEst < numVagasCarro){
            carrosEst++;
            vagaC--;
            cout << "Carro estacionado!" << endl << endl;
          } else {
            cout << "O numero total de vagas de carros disponíveis, já foi preenchido!" << endl<< endl;
          }
        }
         else if( automovel == "moto")
        {
        if(motosEst < numVagasMoto)
        {
          motosEst++;
          vagaM--;
          cout << "Moto estacionada!";
        }else
        {
          cout << "O numero total de vagas de motos disponíveis, já foi preenchido!" << endl<< endl;
        }} else 
        {
        cout << "Veiculo inválido!";
        }
      }
      break;

      case 2:
     {
     cout << "Digite o tipo do veiculo (carro ou moto): ";
      cin >> automovel;

      if( automovel == "carro")
      {
        if (carrosEst < numVagasCarro){
        carrosEst--;
        vagaC++;
        cout << "Carro foi embora!" << endl<< endl;
        } else {
        cout << "Nao ha mais carros estacionados" << endl<< endl;
        }
      }
      else if( automovel == "moto")
        {
        if(motosEst < numVagasMoto)
        {
          motosEst--;
          vagaM++;
          cout << "Moto foi embora!"<< endl<< endl;
        }else {
        cout << "Nao ha mais mots estacionadas!" << endl<< endl;;
       }} else {
        cout << "Veiculo inválido!";
      }
      case 3:
      {
        cout << "Numero de vagas de motos disponiveis: " << vagaM << endl;
        cout << "Numero de vagas de carros disponiveis: " << vagaC << endl;
        cout << endl;
        break;
      }

      case 0:
      {
      cout << "Finalizando o Programa";
      cout << endl;
      return 0;
      }
    }
    }
  }
  return 0;
}

//FINALIZADO!!!
