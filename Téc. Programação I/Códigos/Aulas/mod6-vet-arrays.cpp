//Conceito de Vetores e Arrays:

//Um vetor é uma estrutura de dados que permite armazenar múltiplos elementos do mesmo tipo em uma única variável. Em C++, vetores são implementados como arrays, que são coleções contínuas de elementos do mesmo tipo.

//-> Declarações e inicializações:
#include <iostream>
using namespace std;

int main()
{
  int idade[5] = {12, 17, 22, 28, 32}; //vetor de inteiros com 5 elementos.
  double altura[6] = {1.10, 1.14, 0.20, 0.9, 0.16, 0.22}; //Array de double com 3 elementos 

  int vetor[5] = {10,20,30,40,50};

  //os elementos começam sua contagem a partir do 0
  cout << vetor[0] << endl; //saida 10
  cout << vetor[2] << endl; //saida 30

  //Iteração:
  for (int i = 0; i < 5; i++)
  {
    cout << vetor[i] << ""; // Saída: 10 20 30 40 50
  }

 //tamanho:
 int tamanhoV = sizeof(vetor) / sizeof(vetor[0]);

 cout << "Tamanho do vetor: " << tamanhoV << endl; //saida: 5

  //alterando um elemento:
  vetor[2] = 35;

  //adicionando todos os elementos
  for (int i = 0; i < 5; ++i )
  {
    vetor[i] += 10;
  }
  return 0;
}

//VETORES DINAMICOS
int main()
{
  int tamanho;
  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;

  int *vetorDinamico = new int[tamanho]; //se eu não me engano esse * é para chamar ponteiro.

  //Lembre se de liberar a memória alocada quando não for mais necessário.
  delete[] vetorDinamico;

  return 0;
}

//BIBLIOTECA VECTOR

// A biblioteca padrão do C++ fornece a classe vector que é uma alternativa mais flexível de arrays tradicionais.

#include <vector>

int main()
{
  vector<int> vec;

  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);

  cout << "Tamanho do vetor: " << vec.size() << endl; //saida 3

  return 0;
}

