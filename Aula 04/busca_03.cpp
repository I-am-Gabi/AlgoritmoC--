#include <iostream>

bool buscaBin( int A[], int x, int l, int r ) { 
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