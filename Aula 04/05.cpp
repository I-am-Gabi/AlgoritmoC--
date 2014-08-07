#include <iostream>
#include <string> 
#include "05.h"

using namespace std;

int main() {
	Aluno s[] = { { "gabi", 11111 } , { "lais", 222222 } , { "guilherme", 333333 }, { "jeowana", 444444 }  };
	string result = buscaAluno(&s[0], 222222, 0, 3);
	if (!(result.empty())) {
		cout << result << endl;
	}
	else {
		cout << "Não encontrou o aluno com esse número" << endl;
	}
}

