/* MADE BY SIMBA ON 1/19/2017 This is free software
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <iostream>

using namespace std;

int main()
{
    int sum = 0; //first we must initialize the sum

    for (int x = 999; x > 0; x --) //then we will count down from 1000 checking divisibility and add to the sum when we find numbers that are factorable by 3 or 5
        if (!(x % 5)) //|| (!(x % 3))  I tried to do an if () || () format but got a compile error so i used else if
            sum += x;
        else if (!(x % 3))
            sum += x;


    cout << sum; //print the magic number
    cin.get();
    return 0;
}

