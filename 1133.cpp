#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int X, Y;
    int maior, menor;
    cin >> X >> Y;
    if (X >= Y)
    {
        maior = X;
        menor = Y;
    }
    else
    {
        maior = Y;
        menor = X;
    }
    for (int i = menor + 1; i < maior; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            cout << i << endl;
        }
    }

    return 0;
}