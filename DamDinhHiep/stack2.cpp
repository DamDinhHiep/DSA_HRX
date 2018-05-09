#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int arrSum1[3] = {4, 1, 2};
    int arrSum2[4] = {1, 3, 4, 2};
    int i, j, n;
    j = 0;
    for (i = 0; i < 3; ++i)
    {
        j = 0;
        while (arrSum2[j] != arrSum1[i])
        {
            j++;
        }
        cout << "i = " << i << endl;
        cout << "j = " << j <<  endl;
        while (arrSum2[j] < arrSum1[i] && j < 4)
        {
            j++;
        }
        cout << "j = " << j <<  endl << endl;
        if (arrSum2[j] <= arrSum1[i])
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << arrSum2[j] << endl;
        }
    }
    return 0;
}