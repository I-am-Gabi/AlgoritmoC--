#include <iostream>
#include "01b.h"

int main (){
	int vetor[] = { 4, 1, 2, 1, 1, 1, 1, 0, 9 }; 
	int valor_busca = 9; 
	if (busca(&vetor[0], 9, valor_busca)) {
		std::cout << "Achou" << std::endl;
	} 
	else std::cout << "Não achou" << std::endl;
}