#include <iostream>
#include "test.h"

int main()
{
	int x = 10;
	int y = 20;
	std::cin >> x >> y;
	imprimir(somar(x, y)); 
	imprimir(subtrair(x, y)); 
	imprimir(mutiplicar(x, y)); 
	imprimir(dividir(x, y)); 
}