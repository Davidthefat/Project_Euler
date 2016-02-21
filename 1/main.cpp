#include <iostream>

int main()
{
	long result = 0;
    bool toggle = 0;
	for(int i = 0; i < 1000; i += (toggle = !toggle)?3:2)
		result += i;
	std::cout << result << std::endl;
	return 0;
}
