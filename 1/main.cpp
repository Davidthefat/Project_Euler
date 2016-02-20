#include <iostream>

int main()
{
	long result = 0;
	for(int i = 0; i < 1000; i += 3)
		result += i;
	for(int i = 0; i < 1000; i += 5)
		if(i % 3)
			result += i;
	std::cout << result << std::endl;
	return 0;
}
