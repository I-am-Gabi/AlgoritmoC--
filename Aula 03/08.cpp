#include <iostream> 

main() { 
   int i, j, *p_1, *p_2, **p_3, ***p_4;  
   i = 4;  
   j = 5;  
   p_1 = &j;  
   p_2 = &i;  
   p_3 = &p_1;  
   p_4 = &p_3;  
   std::cout << i << " " << *p_2 << " " <<  &j << " " <<  &p_2 << " " <<  **p_3 << " " <<  **p_4 << " " <<  ***p_4 << " " <<  *p_1 << " " <<  *&p_2 << " " <<  *p_4 << std::endl;
   std::cout << &i << " " << &j << " " << &p_1 << " " << &p_2 << " " << &p_3 << " " << &p_4 << std::endl;
}
  