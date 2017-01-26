/*CREATED BY SIMBA ON 1-20-2017 This is free software
Work out the first ten digits of the sum of the following one-hundred 50-digit numbers (in the input file)
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream parser;
    parser.open("data/input13");
    string sums [100]; // gotta hold all those numbers
    int sum [50];
    int carry = 0,
     s = 0; // i didn't plan this very well
    for (int a = 0; a < 100; a++)
        parser >> sums [a]; //stream numbers in from file

    int e = 49;
    for (int x = 0; x < 50; x++)
    {
         carry = s;
         s = 0;
        for (int a = 0; a  < 100;  a++)
            carry += sums[a][e - x] - '0' ;


    while (carry >9)
    {
        if (carry > 999)
        {
            s += 100;
            carry -= 1000;
        }

        else if (carry > 99)
        {
            s += 10;
            carry -= 100;
        }

        else
        {
            s += 1;
            carry -= 10;
        }
    }


     sum[x] = carry;


    }



    cout << s;
    for (int k = 0; k < 50; k++)
        cout << sum[49 - k];

}
