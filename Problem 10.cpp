/*CREATED BY SIMBA ON 1-20-2017 This is free software
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

//im going to try to implement a sieve here
// EDIT all I was able to implement was a headache lets try again

#include <iostream>

using namespace std;

const int limit = 2000000;

int main()
{
    unsigned long long sum = 0;
    bool prime[limit + 1]; //crate an array to hold the "sieve"

    for (int a = 0; a < limit + 1; a ++) // initialize all values to true or "prime"
        prime[a] = true;

    prime[0] = false;
    prime[1] = false; //I will change zero and one to read "not prime"

    for (int i = 2; i * i <= limit + 1; i++)
        if (prime[i])
            for (int b = i * i; b < limit + 1; b +=   i  )
                prime[b] = false;


    for (int k = 0; k < limit + 1; k ++) // now we go back through the array and add the indexes of values that contain "prime"
        if (prime[k])
            sum += k;


    cout << sum;


}

// I'm so happy with myself for getting this one
