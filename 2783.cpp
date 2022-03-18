#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int N, C, M; // N = Total de figurinhas C = Figurinhas carimbadas M = compradas
    cin >> N >> C >> M;
    int carimbadas[50];
    int falta = C;
    for (int i = 0; i < C; i++)
    {
        cin >> carimbadas[i];
    }
    for (int i = 0; i < M; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < C; j++)
        {
            if (x == carimbadas[j])
            {
                falta--;
                carimbadas[j] = 0;
            }
        }
    }
    cout << falta << endl;
    return 0;
}