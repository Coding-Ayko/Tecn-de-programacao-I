// Exercícios:
// Pergunta: Escreva um programa em C++ que solicita ao usuário dois números inteiros 
// e verifica se o primeiro número é maior do que o segundo. Imprima o resultado.
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main() 
{
  SetConsoleOutputCP(CP_UTF8);

  // int num1;
  // int num2;

  // cout << "Digite o primeiro número: ";
  // cin >> num1;

  // cout << "Digite o segundo número: ";
  // cin >> num2;

  // if (num1 > num2)
  // {
  //   cout << "O número " << num1 << " é maior que o número " << num2 << endl;
  // } else {
  //   cout << "O número " << num1 << " é menor que o número " << num2 << endl; 
  // }

  //Exercícios: Pergunta: Escreva um programa em C++ 
  // que solicita ao usuário dois números inteiros e realiza as 
  // seguintes operações: soma, subtração, multiplicação e divisão dos 
  // números. Imprima os resultados.

  // vamos tentar usar switch case nesse exercicio
  // -> passo a passo
  
  //1. Os dois números inteiros são lidos do usuário.
  //2. O usuário escolhe uma operação de soma (+), subtração (-), multiplicação (*) ou divisão (/).
  //3. A estrutura switch verifica o valor da variável operacao e, com base nesse valor, executa o bloco de código associado ao caso correspondente.
  //4. Para cada caso, o resultado da operação escolhida é exibido. Para a divisão, é feita uma verificação extra para evitar a divisão por zero.
  //5. Se a operação não for válida (ou seja, se o usuário digitar algo diferente de +, -, * ou /), o bloco default é executado e uma mensagem de "Operação inválida" é exibida.
  //6. Lembre-se de que o código acima é um exemplo simplificado e não lida com todas as situações possíveis (como erros de entrada, por exemplo). Em um ambiente de produção, você deve considerar adicionar tratamento de erros e validações adicionais.

 


  int num1, num2;
  char operacao;

  cout << "Digite o primeiro número: ";
    cin >> num1;

  cout << "Digite o segundo número: ";
  cin >> num2;

  cout << "Escolha uma operação: " << endl;
  cout << "soma (+)" << endl;
  cout << "subtração(-)" << endl;
  cout << "multiplicação (*)" << endl;
  cout << "divisão (/)" << endl;
  cin >> operacao;

  switch (operacao) {
   case '+':
     cout << "Soma: " << num1 + num2 << endl;
   break;

    case '-':
     cout << "Subtração: " << num1 - num2 << endl;
    break;

    case '*':
       cout << "Multiplicação: " << num1 * num2 << endl;
    break;

    case '/':
      if (num2 != 0) {
        cout << "Divisão: " << static_cast<double>(num1) / num2 << endl;
      } else {
        cout << "Não é possível dividir por zero." << endl;
      }
      break;

      default:
        cout << "Operação inválida." << endl;
      break;
    }

    return 0;
}

