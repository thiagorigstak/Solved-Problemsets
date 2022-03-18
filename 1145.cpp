#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X, Y, cont = 0;
    cin >> X >> Y;
    for (int i = 0; i < Y; i++)
    {
        cout << i + 1;
        if (cont + 1 == X)
        {
            cout << endl;
            cont = 0;
        }
        else
        {
            cout << " ";
            cont++;
        }
    }
    return 0;
}