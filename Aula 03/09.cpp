#include <iostream> 

int main() { 
   	int i, *p_1, *p_2, v[10];  
	p_1 = v;  
	p_2 = p_1;  
	for (i = 0; i < 10; i++)  
	{ 
		v[i] = (2*i)+1; p_2++; 
	}  
	for (i = 0; i < 10; i++)  
	{ 
		p_2--; 
		std::cout << "[ " << *p_2 << "] "; 
	}   
	return 0;
	 //std::cout << i << " " << *p_2 << " " <<  &j << " " <<  &p_2 << " " <<  **p_3 << " " <<  **p_4 << " " <<  ***p_4 << " " <<  *p_1 << " " <<  *&p_2 << " " <<  *p_4 << std::endl;
	 //std::cout << &i << " " << &j << " " << &p_1 << " " << &p_2 << " " << &p_3 << " " << &p_4 << std::endl;
}
  