//Exercício 1: 
//Crie um programa de cadastro de um carro com os seguintes dados:
//Marca, Modelo, cor, alugado, TabelaFip e  Quilometragem;
//Use a estrutura de decisão que verifica a quilometragem do carro se for maior que 100 ele deve ser levado até a revisão periódica.
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string marca;
  string modelo;
  string cor;
  int ano;
  double tbfip;
  bool alugado;
  float km;

  cout << "-----------------------------------------" << endl;
  cout << "--------------BEM-VINDO!-----------------" << endl;
  cout << "--------LOCADORA---DE---CARROS-----------" << endl;
  cout << "-----------------------------------------" << endl;

  cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
  
  cout << "Cadastro do automovel: " << endl;
  cout << "Digite  a marca do automovel: " << endl;
  getline(cin, marca);
  cout << "Digite o modelo do automovel: " << endl;
  getline(cin, modelo);
  cout << "Digite  a cor do automovel: " << endl;
  getline(cin, cor);
  cout << "Digite  o ano do automovel: " << endl;
  cin >> ano;
  cout << "Informe o valor da Tabela Fip do modelo: " << endl;
  cin >> tbfip;
  cout << "Informe a quantidade de km rodado do veiculo: " << endl;
  cin >> km;



  cout << "SEU CADASTRO DO AUTOMOVEL REALIZADO COM SUCESSO! \n";
  cout << " Verifique se existe a necessidade de levar para uma consulta periodica. \n";
  cout << "--------------------------------------\n";
  cout << "marca : " << marca << endl;
  cout << "Modelo : " << modelo << endl;
  cout << "Cor : " << cor << endl; 
  cout << "Ano: " << ano << endl;
  cout << "Valor Tabela Fip: " << tbfip << endl;

  if (km < 100)
  {
    cout << " De acordo com a quilometragem, seu veiculo ja percorreu " << km << " Km, logo seu carro ainda nao precisa de revisão periodica." << endl;
  }else{
     cout << " De acordo com a quilometragem, seu veiculo ja percorreu " << km << " Km, logo voce precisa levar o seu veiculo para fazr uma consulta periodica" << endl;
  }
  cout << "--------------------------------------\n";

  return 0;
}
