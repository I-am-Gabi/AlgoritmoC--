#include <iostream> 

main() { 
   int i, j, *p_1, *p_2, **p_p_1, **p_p_2; 
   i = 4;  j = 5; 
   p_1 = &i; //p_1 = endereço de i que contem 4
   p_2 = &j; //p_2 = endereço de j que contem 5
   p_p_1 = &p_2; //p_p_1 = endereço de p_2 que contem o endereço de j que contem 5
   p_p_2 = &p_1; //p_p_2 = endereço de p_1 que contem o endereço de i que contem 4
   std::cout << i << " " << *p_2 << " " <<  &i << " " <<  &p_2 << " " <<  **p_p_1 << " " <<  *p_p_2 << " " <<  &*p_1 << " " <<  j << " " <<  *p_1 << " " <<  *&p_1 << std::endl;
   std::cout << &i << " " << &j << " " << &p_1 << " " << &p_2 << " " << &p_p_1 << " " << &p_p_2 << std::endl;
}