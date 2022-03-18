#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    bool a = true;
    int n;
    while (a)
    {
        double n1, contador = 0;
        double media = 0;
        while (contador < 2)
        {
            cin >> n1;
            if (n1 >= 0 && n1 <= 10)
            {
                media += n1;
                contador++;
            }
            else
            {
                cout << "nota invalida" << endl;
            }
        }
        media /= 2;
        cout << "media = ";
        cout << setprecision(2) << fixed << media << endl;
        while (1)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> n;
            if (n == 2)
            {
                a = false;
                break;
            }
            else if (n == 1)
            {
                break;
            }
        }
    }
    return 0;
}