/*CREATED BY SIMBA ON 1-20-2017 This is free software
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

// I'll employ brute force tactics here as well as a function I wrote for Problem 3

#include <iostream>

using namespace std;

bool isPrime(int x);

int main()
{
    int s = 0;
    int x = 2;
    while(s < 10001)
    {
        if (isPrime(x))
            s ++;


        x ++;
    }

    cout << x - 1;
}








bool isPrime(int x)
{
    for (int y = (x - 1); y > 1; y --)
        if (!(x % y))
         return false;

    return true;
}

