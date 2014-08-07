#include <iostream>
#include "01d.h"

int main (){
	int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
	int valor_busca = 1; 
	if (buscaBin(&vetor[0], valor_busca, 0, 7)) {
		std::cout << "Achou" << std::endl;
	} 
	else std::cout << "Não achou" << std::endl;
}

