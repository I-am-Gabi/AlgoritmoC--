#include <iostream>
#include <string>
#include "04.h"

using namespace std;

int main() {
	string s[] = { "aolasa", "bolaa", "colaa2", "doioi", "eolaa", "flaa2", "glaa2" };
	if (buscaString(&s[0], "flaa2", 0, 6)) {
		cout << "Achou" << endl;
	}
	else {
		cout << "Não achou" << endl;
	}
}