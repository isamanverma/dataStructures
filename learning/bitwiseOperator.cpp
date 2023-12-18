#include <iostream>
#include <math.h>
using namespace std;

string integerToBinary(int a)
{
    string binary;
    // for (int i = 1 << 10; i > 0; i >>= 1)
    int i = (1 << 10);
    while (i > 0)
    {
        binary = binary + (((i & a) != 0) ? '1' : '0');
        i = i >> 1;
    }
    return binary;
}

string intToBinary(int value)
{
    const int numBits = 8 * sizeof(value);
    string binary;

    for (int i = numBits - 1; i >= 0; --i)
    {
        binary += ((value >> i) & 1) ? '1' : '0';
    }

    return binary;
}
string binaryRepresentation(int value)
{
    return intToBinary(value);
}

int decimalToBit(int x)
{
    int i = 0;
    int answer = 0;
    while (x != 0)
    {
        int bit = x & 1;
        answer = (bit * pow(10, i)) + answer;
        x = x >> 1;
        i++;
    }
    return answer;
}

int bitToDecimal(int n)
{
    int i = 0, answer = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            answer = answer + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    return answer;
}

int reverseInt(int n)
// 321 => 123: 1*10^2 + 2*10^1 + 3*10^0
{
    int i = 0;
    long long answer = 0;
    int size = 0;
    long long n_copy = n;
    while (n_copy != 0)
    {
        n_copy = n_copy / 10;
        size++;
    }

    while (n != 0)
    {
        int digit = n % 10;
        answer = answer + (digit * pow(10, (size - 1)));
        n = n / 10;
        size--;
    }
    return answer;
}

int main(void)
{
    // int a = 100;
    // cout << "a: " << a << " bin(a): " << integerToBinary(a) << endl;
    // int b = 698;
    // cout << "b: " << b << " bin(b): " << integerToBinary(b) << endl;
    // cout << "a&b: " << (a & b) << " bin(a&b): " << binaryRepresentation(a & b) << endl;
    // cout << "a|b: " << (a | b) << " bin(a|b)" << binaryRepresentation(a | b) << endl;
    // cout << "~b: " << (~b) << " bin(~b)" << binaryRepresentation(~b) << endl;
    // cout << "a^b: " << (a ^ b) << " bin(a^b)" << binaryRepresentation(a ^ b) << endl;

    // cout << decimalToBit(698) << endl;
    // cout << bitToDecimal(decimalToBit(500)) << endl;
    cout << reverseInt(1534236469);

    // NOTE: Right shift divides the number by 2: notation: 20>>2 = 5;
    // NOTE: Left shift multiplies the number by 2: notation: 5<<2 = 20;
    return 0;
}
