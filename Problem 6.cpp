/* CREATED BY SIMBA ON 1/20/2017 This is free software
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

//should be a straightforward brute force solution

#include <iostream>

using namespace std;

int main()
{
    int r = 0; int s = 0;


    for (int x = 1; x <= 100; x ++)
    {
        r += (x * x);
        s += x;

    }

    cout << (s * s) - r;

}

