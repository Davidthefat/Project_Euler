#include <iostream>
using namespace std;

int main()
{
	unsigned long primes[10002];
	unsigned long ind = 1;
	primes[0] = 1;
	primes[1] = 2;
	bool prime = false;
	for(int i = 3; ind < 10002; i ++)
	{
		for(int t = 1; t < ind && prime; t++)
			if(!(i % primes[t]))
				prime = false;
		if(prime)
				cout << (primes[++ind] = i) << endl;
		prime = true;
	}
	return 0;
}
