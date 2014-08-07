#include <iostream> 

using namespace std;

int somar(int v[], int n) {
	if (n == 0) return 0;
	else return somar(v, n - 1) + v[n];
} 

int main() {
	int v[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << somar(&v[0], 10) << endl;
}