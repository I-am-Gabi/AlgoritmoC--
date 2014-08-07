#include <iostream>

int menor(int *v, int i) {
	int a;  
	if (i == 0) {
		return *v;
	}
	//std::cout << *(v) << " " << *(v+1) << std::endl;
	if (*(v) < *(v+1)) {
		a = *(v+1);
		*(v+1) = *v;
		*v = *(v+1);  
	}   
	i--;
	return menor((v+1), i);
}

int main (){
	int vetor[] = { 4, 9, 2, 1, 9, 1, 9, 0, 9 }; 
	int a = menor(&vetor[0], 7);
	std::cout << a << std::endl;
}