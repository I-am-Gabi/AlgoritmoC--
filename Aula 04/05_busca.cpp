#include <iostream>
#include <string>
#include "05.h"

using namespace std;

string buscaAluno(Aluno s[], int busca, int l, int r) {
	int m = 0;
	//if (s[l].compare(busca) < 0 & s[r].compare(busca) > 0) {
		while (r >= l){ 
			m = (l+r)/2; 
			if(s[m].numero == busca)
				return s[m].nome; 
			else if(s[m].numero > busca)  
				r = m - 1; 
			else
				l = m + 1;
		}
	//}
	return "";
}

 