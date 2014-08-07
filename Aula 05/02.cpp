#include <iostream>

bool buscaR(int *v, int i, int valor_busca) {
	int a;  
	if (i == 0) {
		return false;
	}
	if (*(v) == valor_busca) {
		return true;
	}   
	i--;
	return buscaR((v+1), i, valor_busca);
}

bool buscaI(int *v, int i, int valor_busca) {
	 
	for (int a = 0; a <= i; a++) {
		if (*(v+a) == valor_busca)
			{ return true; }
	}
	return false;
}


int main (){
	int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
	int valor_busca = 1; 
	if (buscaI(&vetor[0], 9, valor_busca)) {
		std::cout << "Achou" << std::endl;
	} 
	else std::cout << "Não achou" << std::endl;

	if (buscaR(&vetor[0], 9, valor_busca)) {
		std::cout << "Achou" << std::endl;
	} 
	else std::cout << "Não achou" << std::endl;

}