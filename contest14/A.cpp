#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int k, r; //preço e moeda que nao é de 10
    int contador = 1;
    cin >> k >> r;
    while (1)
    {
        int resp = contador * k % 10;
        if (resp == r || resp == 0)
        {
            cout << contador << endl;
            break;
        }
        else
        {
            contador++;
        }
    }
    return 0;
}