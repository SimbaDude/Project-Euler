/* CREATED BY SIMBA ON 1-25-2017 THIS IS FREE SOFTWARE
In the 20×20 grid contained in input11,
What is the greatest product of four adjacent numbers in the same direction
(up, down, left, right, or diagonally) in the 20×20 grid?
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int arr[20][20];
    int result = 0;

    ifstream input;
    input.open("data/input11");

    for (int x = 0; x < 20; x++)
        for (int y = 0; y < 20; y ++)
        input >> arr[x][y];

    for (int x = 0; x < 20; x++)
        for (int y = 0; y <= 16; y ++)
           {

                if (arr[x][y] * arr[x][y+1] * arr[x][y+2] * arr[x][y+3] > result )
                    result = arr[x][y] * arr[x][y+1] * arr[x][y+2] * arr[x][y+3];
                if (arr[y][x] * arr[y+1][x] * arr[y+2][x] * arr[y+3][x] > result)
                    result = arr[y][x] * arr[y+1][x] * arr[y+2][x] * arr[y+3][x];
            }
   // for (int x = 0; x <= 16; x++)
   //     for (int y = 0; y < 20; y ++)
   //         if (arr[y][x] * arr[y][x+1] * arr[y][x+2] * arr[y][x+3] > result )
   //             result = arr[y][x] * arr[y][x+1] * arr[y][x+2] * arr[y][x+3];


    for (int x = 0; x <= 16; x++)
        for (int y = 0; y <= 16; y++)
            if (arr[x][y]*arr[x+3][y+3]*arr[x+2][y+2]*arr[x+1][y+1] > result)
                result = arr[x][y] * arr[x+3][y+3] * arr[x+2][y+2]*arr[x+1][y+1];

    for (int x = 3; x < 20; x ++ )
        for (int y = 0; y<= 16; y++)
    if (arr[x][y]*arr[x-1][y+1]*arr[x-2][y+2]*arr[x-3][y+3] > result)
        result = arr[x][y]*arr[x-1][y+1]*arr[x-2][y+2]*arr[x-3][y+3];

    cout << result;









}
