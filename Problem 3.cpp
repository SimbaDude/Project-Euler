/* MADE BY SIMBA ON 1/19/2017 This is free software
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream> //I required help to solve this
                    //My brute force method was much too slow to be acceptable
using namespace std;



int main()
{

     unsigned long long i, n =  600851475143; // took me a very long time to figure out an integer would not hold this value

    for (i = 2; i < n; i ++) //for each i starting with i = 2
        if (!(n % i))        //if i is a factor of n then it is also a prime factor because it is the smallest factor of n
        do                   //so we will factor out i as many times as it factors into n, until we can no longer factor n
            n /= i;
            while (!(n % i));

                            //i wasn't about to come up with this solution on my own
                            //my brute force method attempted to countdown from n checking each number exhaustively
                            //for whether or not it was a factor of n and whether it was a prime number
                            //the program worked great for a value of n = 13195
                            //however when n is much larger that left hundreds of billions of numbers to check
                            //the program had ran for hours and hadn't even checked a billion factors yet
                            //i realized that couldn't possibly be the way to solve this


    cout << i;
    return 0;
}

