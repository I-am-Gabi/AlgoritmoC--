#include <iostream> 
#include <string>

using namespace std;

int div(int m, int n) {    
	if (m < n ) return 0;
	else return (div(m-n, n) + 1); 
} 

int main() {  
	cout << div(14, 5) << endl;
}
   