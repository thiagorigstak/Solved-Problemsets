#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    char str[4];
    int contador = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (str[i] == str[j])
            {
                contador++;
            }
        }
    }
    if (contador == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}