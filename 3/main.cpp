#include <iostream>
using namespace std;

int main()
{
	unsigned long primes[1000];
	unsigned long ind = 1;
	primes[0] = 1;
	primes[1] = 2;
	bool prime = false;
	for(int i = 1; ind < 1000; i ++)
	{
		for(int t = 1; t < ind && prime; t++)
			if(!(i % primes[t]))
				prime = false;
		if(prime)
				primes[++ind] = i;
		prime = true;
	}
	ind = 1;
	unsigned long result = 600851475143;
	while(ind < 1000)
	{
		if(primes[ind] > result)
			break;
		else if(!(result % primes[ind]))
			result /= primes[ind];
		else
			ind ++;
	}
	cout << primes[ind] << endl;
	
	return 0;
}
