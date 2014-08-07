#include <iostream>
#include <string> 
#include "06.h"
#include "06_2.h"

using namespace std;

int main() {
	int list[] = { 1, 2, 4, 6, 7, 9, 10, 20, 30, 31 }; 
	string val = buscaValor(&list[0], 6, 0, 9);
	string val2 = buscaValorDeNovo(&list[0], 6, 9);
	if (!(val.empty())) {
		cout << val << endl;
	} 
	if (!(val2.empty())) {
		cout << val2 << endl;
	} 
}

