#include <iostream>
using namespace std;

bool isPal(int in)
{
    int ind = 1000000;
    int tail = 10;
    bool result = 0;
    while(!((in%ind)/(ind/10)))
        ind /= 10;
    while(((in%ind)/(ind/10)) == ((in%tail)/(tail/10)) && ind >= tail)
    {
        ind /= 10;
        tail *= 10;
    }
    if(ind == tail || ind == (tail / 10))
        result = 1;
    return result;
}
int main()
{
    int max = 0;
    for(int i = 100; i < 1000; i++)
        for(int j = 100; j < 1000; j++)
            max = isPal(i*j) && i*j > max?i*j:max;
    cout << max << endl;
    return 0;
}
