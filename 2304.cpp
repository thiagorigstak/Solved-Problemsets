#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int I, N; // I = dinheiro incial N = Numero de Jogadas;
    int D, E, F;
    cin >> I >> N;
    D = I;
    E = I;
    F = I;
    for (int i = 0; i < N; i++)
    {
        int x;
        char act, jog;
        cin >> act >> jog;
        if (act == 'C') // compra
        {
            cin >> x;
            if (jog == 'D') // Dalia
            {
                D -= x;
            }
            else if (jog == 'E') // Eloi
            {
                E -= x;
            }
            else // Felix
            {
                F -= x;
            }
        }
        else if (act == 'V') // venda
        {
            cin >> x;
            if (jog == 'D') // Dalia
            {
                D += x;
            }
            else if (jog == 'E') // Eloi
            {
                E += x;
            }
            else // Felix
            {
                F += x;
            }
        }
        else // aluguel
        {
            char K;
            cin >> K; // pagador do aluguel;
            cin >> x;
            if (jog == 'D') // Dalia
            {
                D += x;
            }
            else if (jog == 'E') // Eloi
            {
                E += x;
            }
            else // Felix
            {
                F += x;
            }
            if (K == 'D') // Dalia
            {
                D -= x;
            }
            else if (K == 'E') // Eloi
            {
                E -= x;
            }
            else // Felix
            {
                F -= x;
            }
        }
    }

    cout << D << " " << E << " " << F << endl;
    return 0;
}