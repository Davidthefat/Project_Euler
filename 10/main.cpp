#include <iostream>
using namespace std;

#define N 150000

int main()
{
    unsigned long primes[N];
    unsigned long ind = 1;
    primes[0] = 1;
    primes[1] = 2;
    bool prime = false;
    for(unsigned long i = 3; ind < N; i ++)
    {
        for(unsigned long t = 1; t < ind && prime; t++)
            if(!(i % primes[t]))
                prime = false;
        if(prime)
                primes[++ind] = i;
        prime = true;
    }
    unsigned long result = 0;
    for(int i = 1; primes[i] < 2000000; i++)
        result += primes[i];
    cout << result << endl;
    return 0;
}
