// this program is without a driver code with only a function to
// rotate the matirx by 90° example:-
/*
input:-
1 2 3
4 5 6
7 8 9
output:-
5 4 1
8 5 2
9 6 3
*/
#include <iostream>
#include <vector>
#include <algorithm>
class Solution
{
public:
    void rotate(vector<vector<int> > &matrix)
    {
        int n = matrix.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int temp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = temp;
            }
            reverse(matrix[i].begin(), matrix[i].end());
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};