#include <iostream>
#include <string>
#include <stdlib.h> 

#include "imprima.h" 

using namespace std;

void imprimir(int x) { 
	switch (x) {
		case 1:
			cout << "1) NOVO JOGO\n" << endl;
			break;
		case 2:
			cout << "2) CONTINUAR JOGO\n" << endl;
			break;
		case 3:
			cout << "3) OPÇÕES\n" << endl;
			break;
		case 4:
			cout << "4) AJUDA\n" << endl;
			break;
		case 5:
			cout << "5) CRÉDITOS\n" << endl;
			break;
		case 6:  
            exit(EXIT_SUCCESS);
        default:
        	cout << "Digite opção válida\n" << endl;
	}

	//cout << *(op+x-1) + "\n" << endl; 	
}