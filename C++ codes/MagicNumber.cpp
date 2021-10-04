#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int last, five = 5;
    int sum = 0;
    while (num)
    {
        last = num & 1;
        sum += last * five;
        num = num >> 1;
        five = five * 5;
    }
    cout << sum;
    return 0;
}