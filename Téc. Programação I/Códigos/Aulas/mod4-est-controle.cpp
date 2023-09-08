#include <iostream>
#include <string>
using namespace std;


//Estrutura de condição
int main()
{
  int idade;
  cout<<"Digite sua idade: ";
  cin>>idade;

  if (idade >= 18)
  {
    cout << "Você é maior de idade." << endl;
  }else{
    cout << "Voce e menor de idade" << endl;
  }

  //Estruturas de repetição
  // while - repete um bloco de código enquanto uma condição for verdadeira

  int contador = 1;
  while (contador <= 5)
  {
    cout << contador << "";
    contador++;
  }

  //for -> estrutura mais compacta para repetições controladas

  for(int i = 0; i < 5; i++)
  {
    cout << i << " ";
  }

  return 0;
}