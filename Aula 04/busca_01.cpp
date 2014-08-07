#include <iostream>

bool busca(int *v, int i, int valor_busca) {
	 
	for (int a = 0; a <= i; a++) {
		if (*(v+a) == valor_busca)
			{ return true; }
	}
	return false;
}
