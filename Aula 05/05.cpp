#include <iostream> 

using namespace std;

int pot(int k, int n) { 
	if (n == 0) return 1;
	else return (k * pot(k, n - 1));
} 

int main() { 
	cout << pot(2, 5) << endl;
}