#include <iostream> 
#include <string>

using namespace std;

int invert(int k, int ult, int i) {   
	//cout << ((k%(i*10)-k%i)/i) << " " << ult << " " << i*10 << " " << endl;
	if (i > k) return ult;
	else  
	{ 
		//ult = (ult*i)  + ((k%(i*10)-k%i)/i);
		return invert(k, (ult*i)  + ((k%(i*10)-k%i)/i), i*10);
	}
} 

int main() {  
	cout << invert(123, 0, 1) << endl;
}
  

/*int ult = 0;
for (int i = 0; i < 4; i++)
{
	ult = ult*10 + k%10; 
	k = k/10;
}
return ult;

while(i <= k)
	{
		ult *= 10;
		ult += (k%(i*10)-k%i)/i; 
		i *= 10;
	}
	return ult;

*/