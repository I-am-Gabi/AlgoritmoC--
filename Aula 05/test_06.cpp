#include <iostream> 
#include <string>

using namespace std;

int invert(int k, int res) {    
  if (k == 0) return res;
	else return invert(k/10, (k%10) + (res*10)); 
} 

int main() {  
	cout << invert(11124, 0) << endl;
}
   
   