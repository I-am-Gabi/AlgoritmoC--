#include <iostream>
#include <string>
#include <sstream>

#include "06_2.h"

using namespace std;

string buscaValorDeNovo(int list[], int busca, int n) { 
	stringstream s;
	if ((list[0] > busca) || (list[n] < busca)) { return "está fora do intervalo"; };
	for (int i = 0; i < n; ++i)
	{
		if ((list[i] < busca) & (list[i+1] > busca)) {
			s << i << " " << i+1;
			return s.str(); 
		}
		if (list[i] == busca) {
			return "vc digitou um número da lista";
		}
	}
	return "não achou";
}

 