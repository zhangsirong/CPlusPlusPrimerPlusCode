// ex11-7.cpp  Define a complex class so that the provided program can use it with 
// correct results. Compile with "complex0.h" and "complex0.cpp"

#include <iostream> 
#include "complex0.h"  // to avoid confusion with complex.h 
using namespace std;

int main() 
{ 
	Complex a(3.0, 4.0);   // initialize to (3,4i)
	Complex c; 
	cout << "Enter a complex number (q to quit):\n"; 
	while (cin >> c) 
	{
		cout << "c is " << c << '\n'; 
		cout << "complex conjugate is " << ~c << '\n'; 
		cout << "a is " << a << '\n'; 
		cout << "a + c is " << a + c << '\n'; 
		cout << "a - c is " << a - c << '\n'; 
		cout << "a * c is " << a * c << '\n'; 
		cout << "2 * c is " << 2 * c << '\n'; 
		cout << "Enter a complex number (q to quit):\n";
	} 
	cout << "Done!\n"; 
	return 0;
}
