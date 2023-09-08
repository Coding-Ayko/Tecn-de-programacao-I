//Operadores de Comparação
#include <iostream>
#include <string>
#include <windows.h>

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  // Declaração de variáveis
  int x = 10;
  int y = 20;

  // Operadores de comparação
  bool igual = (x == y);            // Verifica se x é igual a y
  bool diferente = (x != y);        // Verifica se x é diferente de y
  bool maiorQue = (x > y);          // Verifica se x é maior que y
  bool menorQue = (x < y);          // Verifica se x é menor que y
  bool maiorOuIgual = (x >= y);     // Verifica se x é maior ou igual a y
  bool menorOuIgual = (x <= y);     // Verifica se x é menor ou igual a y

  // Saída dos resultados
  std::cout << "x é igual a y: " << igual << std::endl;
  std::cout << "x é diferente de y: " << diferente << std::endl;
  std::cout << "x é maior que y: " << maiorQue << std::endl;
  std::cout << "x é menor que y: " << menorQue << std::endl;
  std::cout << "x é maior ou igual a y: " << maiorOuIgual << std::endl;
  std::cout << "x é menor ou igual a y: " << menorOuIgual << std::endl;

  return 0;

  //Operadores Matemáticos
 
  int a = 10;
  int b = 5;

   // Operações matemáticas
  int soma = a + b;         // Soma de a e b
  int diferenca = a - b;    // Subtração de a por b
  int produto = a * b;      // Multiplicação de a por b
  int quociente = a / b;    // Divisão de a por b

   // Operadores de atribuição composta
  a += 2;  // Equivalente a: a = a + 2;
  b *= 3;  // Equivalente a: b = b * 3;

  // Saída dos resultados
  std::cout << "Soma: " << soma << std::endl;
  std::cout << "Diferença: " << diferenca << std::endl;
  std::cout << "Produto: " << produto << std::endl;
  std::cout << "Quociente: " << quociente << std::endl;

  // Saída dos valores atualizados de 'a' e 'b'
  std::cout << "a atualizado: " << a << std::endl;
  std::cout << "b atualizado: " << b << std::endl;

  return 0;
}
