// this program is without a driver code with only a function to print
// the array in a wave form example:-
/*
input:-
1 2 3
4 5 6
7 8 9

output:- 1 4 7 8 9 5 2 3 6 9
*/

#include <iostream>
#include <vector>

using namespace std;
vector<int> wavePrint(vector<vector<int> > arr, int nRows, int mCols)
{
    vector<int> answ;
    for (int i = 0; i < mCols; i++)
    {

        if (i != 1 && i % 2 == 0)
        {
            for (int j = 0; j < nRows; j++)
            {
                answ.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = nRows - 1; j >= 0; j--)
            {
                answ.push_back(arr[j][i]);
            }
        }
    }
    return answ;
}
