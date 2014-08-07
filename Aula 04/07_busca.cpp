#include <iostream>
#include <string>
#include <sstream>

#include "07.h"

using namespace std;

int busca_ternaria(int v[], int ini, int fim, int x){
	int m = 0;
	cout << "n1" << endl;
	if (ini > fim) return 0;  
    
    if (fim == (ini + 1)) 
    {	cout << "n2" << endl;
    	if (x == v[ini]) return 1;
    	if (x == v[fim]) return 1;
    } 
    else {m = (ini + fim)/3; cout << "n4" << endl; }
    if (x == v[m]) {return 1; cout << "n5" << endl;  } 			
    if (x < v[m]) { busca_ternaria(v, ini, (m-1), x); cout << "n6" << endl;}
    else {busca_ternaria(v, (m+1), fim, x);cout << "n7" << endl;}
	
	cout << "n" << endl;
   	return 0;
}