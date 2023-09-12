// Situação Problema 1
// Imagine que você é um professor e deseja automatizar o processo de verificação de notas dos alunos para determinar se eles passaram ou não na disciplina.
// O professor deve inserir o número total de alunos da turma.
// Em seguida, deve inserir as notas dos alunos, uma de cada vez.
// A nota mínima para passar é 6.
// O programa deve calcular e exibir a porcentagem de alunos que passaram e a porcentagem de alunos que reprovaram na disciplina.
// Requisitos:
// Use apenas variáveis, entrada e saída de dados, if-else e while ou for.

#include <iostream>
using namespace std;

int main()
{
  int numAlunos;
  int reprovaAlunos = 0;
  int aprovAlunos = 0;
  int i = 1;

  cout << "Digite o numero do total de alunos da turma: ";
  cin >> numAlunos;
  cout << " " << endl;

  while (i <= numAlunos)
  {
    double notaAluno;

    cout << "Digite a nota do aluno " << i << ": ";
    cout << " ";
    cin >> notaAluno;

    if (notaAluno <= 6)
    {
      reprovaAlunos++;
    }
    else {
      aprovAlunos++;
    }
    i++;
  }

  double resultAprova = (static_cast<double>(aprovAlunos) / numAlunos) * 100;
  double resultReprova = (static_cast<double>(reprovaAlunos) / numAlunos) * 100;
  // tem que usar esse static_cast, pq sem ele não tem como fazer a conversão para os números quebrados (ponto flutuante q é o double e float)
  cout << " " << endl;
  cout << "O total de alunos da turma e de: " << numAlunos << " alunos." << endl;
  cout << " " << endl;
  cout << "Alunos Aprovados:" << endl;
  cout << "De " << numAlunos << " alunos, " << aprovAlunos << " foram aprovados, representando uma porcentagem de " << resultAprova << "%" << " de aprovacoes na turma." << endl;
  cout << " " << endl;
  cout << "Alunos Reprovados:" << endl;
  cout << "De " << numAlunos << " alunos, " << reprovaAlunos << " foram reprovados, representando uma porcentagem de " << resultReprova << "%" << " de reprovacoes na turma.";
  cout << " " << endl;
  cout << " " << endl;

  return 0;
}
