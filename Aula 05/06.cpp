#include <iostream> 
#include <string>

using namespace std;

int invert(int k) { 
	//if (k == 0) return 0;
	//else return ( (k%10)*10 + (invert(k/10)));
	int ult = 0;
	for (int i = 0; i < 4; i++)
	{
		ult = ult + k%10;
		ult = ult * 10;
		k = k/10;
	}
	return ult;
} 

int main() {  
	cout << invert(1234) << endl;
}

 