/* MADE BY SIMBA ON 1/19/2017 This is free software
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

//we are dealing with very small numbers here so I think it will be safe to
//take a brute force approach to this problem

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss;

    int a;
    for (int x = 999; x > 1; x--)
        for (int y = 999; y > 1; y--)
    {
        a = x * y;
        ss << a;
        string p = ss.str(); // c++ method for getting a string from a number is suprisingly convoluted
        //i can assume that the palindrome we are searching for is 6 digits long which will make this alot less complicated
        if (p[0] == p[5])
            if (p[1] == p[4])
                if(p[2] == p[3])
                cout << p << "= " << x << " x " << y<< endl; //prints all palindromes and there factors however the list isn't sorted so i had to pick the answer out of the list


        ss.str(""); // have to "clear" the stringstream each time we use it
    }
}
        // whew that was a needed confidence boost after Problem 3!
