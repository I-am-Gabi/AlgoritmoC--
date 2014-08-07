#include <iostream> 
#include "imprima.h"
#include "imprime_menu.h"
#include <string>

using namespace std;

int main()
{ 
	while (1) {
		imprimir(imprimir_menu());
	}

	/*string op[] = { "1) NOVO JOGO" ,  "2) CONTINUAR JOGO", "3) OPÇÕES", "4) AJUDA", "5) CRÉDITOS", "6) SAIR" };
	 
	while (1) {
		imprimir(imprimir_menu(&op[0]), &op[0]);
	}*/
}