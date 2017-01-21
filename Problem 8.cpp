/*CREATED BY SIMBA ON 1-20-2017 this is free software
Given a sequence of 1000 digits (available in the file called input)
Find the largest product of 13 adjacent digits
*/

// we will have to access a file stream here

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    unsigned long long int p = 0; //a variable to hold the final product; took me forever to discover an int wouldn't cut it
    unsigned long long int p1;    // and a variable to hold the product were currently calculating
    ifstream in; // creat an input file stream
    in.open ("data/input8"); //use it to open the data file
    string list;
    in >> list; //get the data into a string that we can work with

    //now its just brute force, we will compare every product of 13 adjacent digits and keep the largest product

    for (int i = 0; i < (1000 - 12); i ++)
    {

        p1 = list[i] - '0';

        for (int a = 1; a < 13; a ++)
             p1 *= (list[i + a] - '0');






        if (p1 > p)
            p = p1;


    }

    cout << p;
}

