#ifndef _05_
#define _05_
#include <string>

using namespace std;

typedef struct aluno
{
	string nome;
	int numero;
} Aluno;

string buscaAluno(Aluno s[], int busca, int l, int r);

#endif 