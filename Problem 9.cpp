/*CREATED BY SIMBA ON 1-20-2017 This is free software
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    for (int a = 1; a < 1000; a++)
        for( int b = a + 1; b < 1000; b ++)
    {
        c = 1000 - a - b;
        if ( (a * a) + (b * b) == (c * c))
            cout << a * b * c;
    }



}
