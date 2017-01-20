/* MADE BY SIMBA ON 1/20/2017 This is free software
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

//ONCE AGAIN I'll be adopting shameless brutal force tactics to solve this problem


#include <iostream>

using namespace std;

int main()
{
    for (int x = 20; x < 500000000; x ++) //just picked some arbitrary numbers to use as limits
{
            //cout << x;


              if (!(x % 2))
                if (!(x % 3))
                    if (!(x % 4))
                    if (!(x % 5)) //theres gotta be a more intuitive way than checking for divisibility with
                    if (!(x % 6)) //individual if statements but I'm not sure what it is
                    if (!(x % 7))
                    if (!(x % 8))
                    if (!(x % 9))
                    if (!(x % 10))
                    if (!(x % 11))
                    if (!(x % 12))
                    if (!(x % 13))
                    if (!(x % 14))
                    if (!(x % 15))
                    if (!(x % 16))
                    if (!(x % 17))
                    if (!(x % 18))
                    if (!(x % 19))
              if (!(x % 20)){
                  cout << x << endl; // the first number it prints should be our solution
              }}


}
                    //while this program did work it is not what i hoped for
                    //its plain ugly code and the limits to my for loop were entirely guess based. I had to enlarge the
                    //number a few times to get the program to work
                    //Obviously this method isn't going to work for say a number divisible by all digits from 1 to 1000
                    //I look forward to viewing the other solutions on project euler.
