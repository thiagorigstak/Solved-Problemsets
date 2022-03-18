#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int comb;
    int a = 0, g = 0, d = 0;
    while (1)
    {
        cin >> comb;
        if (comb == 1)
        {
            a++;
        }
        else if (comb == 2)
        {
            g++;
        }
        else if (comb == 3)
        {
            d++;
        }
        else if (comb == 4)
        {
            break;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;

    return 0;
}