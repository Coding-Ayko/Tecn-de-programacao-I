#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// // Introdução
// //Primeiro código em C++
// int main() {
//     cout << "Hello, World!" << endl; //código do programa
//     return 0; //indica que o programa foi executado com sucesso
// }

//----------------------------------------------------------------------------------------------//

 // Função Count e vetor
// int main(){
//   vector<int> numeros = {1,2,2,3,2,4,2,5};

//   int valor_a_contar = 2;
//   int quantidade = count(numeros.begin(), numeros.end(), valor_a_contar);

//   cout << "O valor " << valor_a_contar << " aparece " << quantidade << " vezes no vetor." << endl;

//   return 0;
// }

 // Função Cin , Cout e váriáveis 
 int main()
 {
  cout << " Meu primeiro programa em C++! " << endl;
  int idade = 19; //Representa números inteiros, como -1, 0, 42, etc.
  float altura = 1.75f; //Representa números com casas decimais de precisão simples.
  char letra = 'a'; //Representa um único caractere, envolto por aspas simples.
  bool estaChovendo = true; //Representa valores verdadeiro ou falso (true ou false).
  double saldo_bancario = 2568.32; //Representa números com casas decimais de precisão dupla.
  
  cout << "Digite sua idade: "; // exibe  uma mensagem na tela
  cin >> idade; //Lê o valor digitado pelo usuário e armazena na váriavel
  cout << " Sua idade é: " << idade << endl; //Exibe a idade informada pelo usuário

  return 0;

  
 }

