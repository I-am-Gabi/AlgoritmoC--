#include <iostream>
#include <string> 
#include "07.h" 

using namespace std;

int main() {
	int list[] = { 1, 2, 4, 6, 7, 9, 10, 20, 30, 31, 45, 46, 48, 50, 55, 70 }; 
	int val = busca_ternaria(&list[0], 6, 0, 15); 
	if (val == 1) cout << "Encontrou" << endl;
	else cout << "Não encontrou" << endl;
}

