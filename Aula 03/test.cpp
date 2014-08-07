#include <iostream> 

 void misterio(int *p, int *q) 
 {
 	int *temp;
 	temp = p;
 	*p = *q;
 	*q = *temp;
 }


int main()
{
	int i = 6, j = 10;
	misterio(&i , &j); 
	return 0;
}