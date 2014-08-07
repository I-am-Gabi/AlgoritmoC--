#include <iostream>
#include <string>
#include "04.h"

using namespace std;

bool buscaString(string s[], string busca, int l, int r) {
	int m = 0;
	//if (s[l].compare(busca) < 0 & s[r].compare(busca) > 0) {
		while (r >= l){ 
			m = (l+r)/2; 
			if(s[m].compare(busca) == 0)
				return true; 
			else if(busca.compare(s[m]) < 0)  
				r = m - 1; 
			else
				l = m + 1;
		}
	//}
	return false;
}

 