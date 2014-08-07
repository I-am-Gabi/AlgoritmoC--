#include <iostream>

bool buscaBin( int A[], int x, int l, int r ) { 
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
    	return buscaBin( A, x, l, m-1 ); 
    }
	else 
	{ 
		return buscaBin( A, x, m+1, r ); 
	}
}