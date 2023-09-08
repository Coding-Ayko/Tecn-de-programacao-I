#include <iostream>
//biblioteca usada para entrada e saida de dados
#include <string>
// #include <Windows.h>
using namespace std;

 int main()
 {
//  SetConsoleOutputCP(CP_UTF8);

  cout << " Meu primeiro programa em C++! " << endl;
  string nome = "João";
  string nomeCompleto = "Tauane Caroline Miranda";
  int idade = 19; //Representa números inteiros, como -1, 0, 42, etc.
  float altura = 1.75f; //Representa números com casas decimais de precisão simples.
  char maiorIdade = 'S'; //Representa um único caractere, envolto por aspas simples.
  double saldo_bancario = 2568.32; //Representa números com casas decimais de precisão dupla.
  
  cout << "Digite seu nome: " << endl; // exibe  uma mensagem na tela
  cin >> nome; //Lê o valor digitado pelo usuário e armazena na váriavel

  //limpar o buffer de entrada
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

  cout << "Digite o nome completo: " << endl ;
  getline(cin, nomeCompleto); //cin -> em seguida uma variável que já tenha declarado antes 

  cout << "Digite a sua idade: " << endl;
  cin >> idade;
  
  cout << "Digite a sua altura: " << endl;
  cin >> altura;

  cout << "Você já atingiu sua maioridade?: " << endl;
  cin >> maiorIdade;

  cout << "Qual seu saldo bancário? ";
  cin >> saldo_bancario;

   cout << "SEU CADASTRO FOI EFETUADO COM SUCESSO CONFIRME OS SEUS DADOS \n";
  cout << "--------------------------------------\n";
  cout << "Seu nome é: " << nome << endl;
  cout << "Seu nome completo é: " << nomeCompleto << endl;
  cout << "Sua idade é: " << idade << endl; 
  cout << "Sua altura é " << altura << endl;
  cout << "Você já é de maior?" << maiorIdade << endl;
  cout << " Meu salário é: " << saldo_bancario << endl;
  cout << "--------------------------------------\n";




  return 0;

  
 }
