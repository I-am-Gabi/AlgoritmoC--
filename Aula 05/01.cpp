#include <iostream>

bool buscaBinR( int A[], int x, int l, int r ) { 
	int m = 0;
    if (l > r) {
    	return false; 
    }
	else {
    	m = (l + r)/2; 
    }
    if ( x == A[m] ) {
		 return true;
	}
    else if (x < A[m]) 
    { 
    	return buscaBinR( A, x, l, m-1 ); 
    }
	else 
	{ 
		return buscaBinR( A, x, m+1, r ); 
	}
}
 
bool buscaBinI( int A[], int x, int l, int r ) { 
	int m = 0;
	while (r >= l){ 
		m = (l+r)/2; 
		if (x == A[m]) 
			return true;
		
    	else if (x < A[m]) 
        	r = m - 1; 
	    
	    else
			l = m+1;
	}
}

int main (){
	int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }; 
	int valor_busca = 1; 
	if (buscaBinI(&vetor[0], valor_busca, 0, 8)) {
		std::cout << "Achou" << std::endl;
	} 
	else std::cout << "Não achou" << std::endl;

	if (buscaBinR(&vetor[0], valor_busca, 0, 8)) {
		std::cout << "Achou" << std::endl;
	} 
	else std::cout << "Não achou" << std::endl;

}