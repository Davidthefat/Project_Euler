#pragma once

template <class T>
class BigNum
{
private:
    unsigned char digits[100];
public:
    BigNum(T);
};
