//Funções e Parâmetros:

//Funções:
//uma função é um conjunto de instruções que realizam uma tarefa específica. Elas permitem que você divida um programa em partes menores e mais gerenciáveis, o que torna o código mais organizado e reutilizável.

//As funções podem ser comparadas a pequenas "caixas" que aceitam informações de entrada, processam essas informações e, em alguns casos, produzem um resultado. 

//Elas também podem ser projetadas para não produzir nenhum resultado visível, apenas realizar uma ação específica.

//Parâmetros: 
//são valores que você fornece a uma função para que ela possa realizar seu trabalho. Eles são como dados de entrada para a função.

#include <iostream>
using namespace std;

//função para somar dois números
int somar(int a, int b) 
{
  int resultado = a + b;
  return resultado;
}

int main()
{
  int num1 = 5, num2 = 7;
  int resultado = somar(num1,num2);
  cout << "A soma é: " << resultado <<endl;

  return 0;
}

//Função que verifica se um numero é par
 bool ePar(int numero)
 {
  return numero % 2 == 0;
 }

int main()
{
  int num = 10;
  if (ePar(num)) {
    cout << num << " é par." << endl;
  } else {
    cout << num << " não é par." << endl;
  }

  return 0;
}