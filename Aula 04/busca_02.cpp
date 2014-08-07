#include <iostream>

bool busca(int *v, int i, int valor_busca) {
	int a;  
	if (i == 0) {
		return false;
	}
	if (*(v) == valor_busca) {
		return true;
	}   
	i--;
	return busca((v+1), i, valor_busca);
}