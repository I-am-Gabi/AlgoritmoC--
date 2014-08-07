#include <iostream>
#include <string>
#include <sstream>

#include "06.h"

using namespace std;

string buscaValor(int list[], int busca, int l, int r) {
	int m = 0;  
	stringstream s;
	if ((list[l] > busca) || (list[r] < busca)) { return "está fora do intervalo"; };
	while (r >= l){ 
		m = (l+r)/2; 
		if(r == (l + 1)) {
			if ((list[l] < busca) && (list[r] > busca)) { 
				s << l << " " << r;
				return s.str(); 
			} 
		}
		if (list[m] == busca) {
			return "vc digitou um número da lista";
		}
		else if(list[m] > busca)  r = m; 
		else l = m;
	} 
	return "não achou";
}

 