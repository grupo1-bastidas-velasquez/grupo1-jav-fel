#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/* function to generate and return random numbers */

int  * getRandom() {
	int r[10];
	int i;

	/* set the seed */
	srand((unsigned) time(NULL));

	for (i=0; i <10; i++){
		r[i]= rand();
		cout << i <<"=" << r[i] <<endl;
		}
		return r;
}

/* main function to call above defined function */

int main() {
	/*a pointer to an int */
	int * p;
        int i;
	p = getRandom();
	for(i=0 ; i < 10; i++){
	      cout << i << p+i;
        }
return 0;
}
