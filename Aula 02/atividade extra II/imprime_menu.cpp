#include <iostream>  
#include "imprime_menu.h"  
#include <string>
#include <ctype.h>
#include <sstream>

using namespace std;

int imprimir_menu()
{	  
	cout << "1) NOVO JOGO" << endl;
	cout << "2) CONTINUAR JOGO" << endl;
	cout << "3) OPÇÕES" << endl;
	cout << "4) AJUDA" << endl;
	cout << "5) CRÉDITOS" << endl;
	cout << "6) SAIR" << endl;
	int num;
	string str;
	cin >> str;
	stringstream ss(str);
	ss >> num;
	return num;

	/*int num;
	string str;
	for (int i = 0; i < 6; ++i)
	{
		cout << *(op++) << endl; 
	} 
	cin >> str;
	stringstream ss(str);
	ss >> num; 
	if (num <= 5) {
		return num;
	}
	else {
		cout << "Digite um número válido" << endl; 
	}*/
}