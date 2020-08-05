#include "Bitset.h"

Bitset::Bitset(int size):
vBitset(size, 0)
{

}

std::vector<bool> Bitset::Bits(int number)
{
    int index = 0;
    while(number)
    {
        vBitset[index++] = number%2;
        number >>= 1;
    }

    //revert
    int bitset_size = vBitset.size();
    for(int i=0; i < bitset_size/2; i++)
    {
        bool t = vBitset[i];
        vBitset[i] = vBitset[bitset_size-i-1];
        vBitset[bitset_size-i-1] = t;
    }

    return vBitset;
}
