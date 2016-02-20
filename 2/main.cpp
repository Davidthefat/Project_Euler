#include <iostream>

int main()
{
	unsigned long prev1 = 1;
	unsigned long prev2 = 2;
	unsigned long curr = 0;
	unsigned long result = 2;
	while((curr = prev1 + prev2) < 4000000)
	{
		if(!(curr%2))
			result += curr;
		prev1 = prev2;
		prev2 = curr;
	}
	std::cout << result << std::endl;
	return 0;
}
