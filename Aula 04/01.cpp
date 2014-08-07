#include <iostream>
#include "01.h"

int main (){ 
	int vetor[] = {4, 7, 10, 18, 23, 66}; 
	int valor_busca = 19; 
	if (busca(&vetor[0], 5, valor_busca)) {
		std::cout << "Achou" << std::endl;
	} 
	else std::cout << "Não achou" << std::endl;
}