#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	unsigned long squares[32];
	unsigned long ind = 0;
	double y = 100.0;
	double x = 0.0;
	for(int i = 0; i < 32; i++)
		squares[i] = i*i;
	for(int i = 0; i < 10; i ++)
	{
		if(!(i == squares[ind]))
		{
			x = sqrt(1.0+i*y*y);
			while(x-floor(x) > 0.0001 || x-ceil(x) < -0.0001)
				x = sqrt(1.0+i*(y-=1.0)*y);
			cout << x << endl;
			y = 100.0;
		}
		else
			ind++;
	}
	return 0;
}
