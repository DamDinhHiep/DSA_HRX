#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack <int> s;
    int i, j;
    int arrayA[4][2];
    int arrayB[10];
    char arrayResult[23];
    int n;
    /*cout << "Import n : ";
    cin >> n;
    cout << "Import arrayA : " << endl;
    for (i = 0; i < n; ++i)
    {
        cout << "arrayA[" << i + 1 << "][1] = ";
        fflush (stdin);
        cin >> arrayA[i][0];
        cout << "arrayA[" << i + 1 << "][2] = ";
        fflush (stdin);
        cin >> arrayA[i][1];
    }*/
    arrayA[0][0] = 1;
    arrayA[0][1] = 3;
    arrayA[1][0] = 2;
    arrayA[1][1] = 6;
    arrayA[2][0] = 8;
    arrayA[2][1] = 10;
    arrayA[3][0] = 15;
    arrayA[3][1] = 18;
    s.push (arrayA[0][0]);
    s.push (arrayA[0][1]);
    for (i = 1; i < 4; ++i)
    {
        if (arrayA[i][0] < s.top () && arrayA[i][1] > s.top())
        {
            s.pop ();
            s.push (arrayA[i][1]);
        }
        if (arrayA[i][0] > s.top ())
        {
            s.push (arrayA[i][0]);
            s.push (arrayA[i][1]);
        }
    }
    int count = 0;
    i = 0;
    while (!s.empty ())
    {
        arrayB[i] = s.top ();
        count++;
        s.pop ();
        i++;
    }
    for (i = count - 1; i > -1; i = i - 2)
    {
        cout << "[" << arrayB[i] << " , " << arrayB[i - 1] << "]" << endl;
    }
    return 0;
}
