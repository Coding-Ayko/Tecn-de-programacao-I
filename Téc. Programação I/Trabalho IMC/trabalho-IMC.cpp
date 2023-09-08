#include <iostream> 
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

void limparTela()
{
#ifdef _WIN32
    system("cls");
#endif
}

struct  Pessoa
{
  string nome;
  int idade;
  double peso;
  double altura;
  float IMC;
  string resultado = "";
};

double calcularIMC(double peso, double altura)
{
  return peso / (altura * altura);
}

vector<Pessoa> listaDePessoas;

void cadastrarPessoa()
{
  Pessoa cad_pessoas;
  cout << "== INFORME OS SEGUINTES DADOS: ==" << endl;
  cout << "Nome Completo: ";
  cin.ignore();
  getline(cin, cad_pessoas.nome);
  cout << "Idade: ";
  cin >> cad_pessoas.idade;
  cout << "Seu peso em quilogramas: ";
  cin >> cad_pessoas.peso;
  cout << "Sua altura em metros: ";
  cin >> cad_pessoas.altura;

  cad_pessoas.IMC = calcularIMC(cad_pessoas.peso, cad_pessoas.altura);

  listaDePessoas.push_back(cad_pessoas);
}

void listar()
{
  if (listaDePessoas.empty())
    {
       cout << "Nenhuma pessoa cadastrada no sistema!" << endl;
    }
  else {
    cout << "=====LISTA==DE==CADASTROS====" << endl;
    for (const auto& pessoa : listaDePessoas)
    {
      cout << "Nome: " << pessoa.nome << endl;
      cout << "Idade: " << pessoa.idade << " anos" << endl;
      cout << "Peso: " << pessoa.peso << " Kg" << endl;
      cout << "Altura: " << pessoa.altura <<  endl;
      cout << "Calculo do IMC: " << pessoa.IMC << endl;
     if (pessoa.IMC <= 18.5)
      {
        cout << "De acordo com o calculo de Massa corporal, voce esta abaixo do peso indicado. "<< endl;
      }
      else if (pessoa.IMC >= 18.6 && pessoa.IMC <= 24.9)
      {
        cout << "De acordo com o calculo de Massa corporal, voce esta dentro do peso ideal!. "<< endl;
      }
      else if(pessoa.IMC >= 25)
      {
        cout << "De acordo com o calculo de Massa corporal, voce esta acima do peso indicado. "<< endl;
      }
       cout << "==============================" << endl;
   }
  }
}

void pesquisarPessoa()
{
  string pesq_pessoa;
  if (listaDePessoas.empty())
    {
       cout << "Nenhuma pessoa cadastrada no sistema!" << endl;
    }
   else {
    cout << "Digite o nome da pessoa cadastrada: " << endl;
    cin >> pesq_pessoa;
    for (const auto& pessoa : listaDePessoas)
    {
      if (pessoa.nome == pesq_pessoa)
      {
       cout << "==============================" << endl;
       cout << "Nome: " << pessoa.nome << endl;
       cout << "Idade: " << pessoa.idade << " anos." << endl;
       cout << "Peso: " << pessoa.peso << "Kg" << endl;
       cout << "Altura: " << pessoa.altura << endl;
       cout << "Calculo do IMC: " << pessoa.IMC << endl;
      if (pessoa.IMC <= 18.5)
      {
        cout << "De acordo com o calculo de Massa corporal, voce esta abaixo do peso indicado. "<< endl;
      }
      else if (pessoa.IMC >= 18.6 && pessoa.IMC <= 24.9)
      {
        cout << "De acordo com o calculo de Massa corporal, voce esta dentro do peso ideal!. "<< endl;
      }
      else if(pessoa.IMC >= 25)
      {
        cout << "De acordo com o calculo de Massa corporal, voce esta acima do peso indicado. "<< endl;
      }
       cout << "==============================" << endl;
      } else {
        cout << "A pessoa " << pesq_pessoa << " não foi encontrada no sistema." << endl;
     }
   }
  }
}

int main() {
  int opcao;
    do {
      cout << "=========== Menu ===========" << endl;
      cout << "1 - Novo Cadastro" << endl;
      cout << "2 - Exibir Lista de Cadastro" << endl;
      cout << "3 - Procurar um Cadastro" << endl;
      cout << "0 - Sair" << endl;
      cout << "============================" << endl;
      cout << "Escolha uma opcao: ";
      cin >> opcao;

      limparTela();

      switch (opcao) {
        case 1:
        cadastrarPessoa();
          cout << "Cadastro realizado com sucesso!" << endl;
          break;
        case 2:
            listar();
            break; 
        case 3:
            pesquisarPessoa();
            break;
        case 0:
            cout << "Saindo. Nos encontramos em breve!" << endl;
            break;
        default:
            cout << "Opcaoo Invalida! Digite um numero correspondente: " << endl;
            break;
        }
    } while (opcao != 0);
  return 0;
}

//FINALIZADO!!!
