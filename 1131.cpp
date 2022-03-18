#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    bool rpt = true;
    int inter, gremio;
    int totali = 0, totalg = 0, empates = 0;
    do
    {
        cin >> inter >> gremio;
        if (inter > gremio)
        {
            totali++;
        }
        else if (inter < gremio)
        {
            totalg++;
        }
        else
        {
            empates++;
        }
        while (1)
        {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            int repete;
            cin >> repete;
            if (repete == 1)
            {
                break;
            }
            else if (repete == 2)
            {
                rpt = false;
                cout << totali + totalg + empates << " grenais" << endl;
                cout << "Inter:" << totali << endl;
                cout << "Gremio:" << totalg << endl;
                cout << "Empates:" << empates << endl;
                if (totali > totalg)
                {
                    cout << "Inter venceu mais" << endl;
                }
                else if (totali < totalg)
                {
                    cout << "Gremio venceu mais" << endl;
                }
                else
                {
                    cout << "Nao houve vencedor" << endl;
                }

                break;
            }
        }
    } while (rpt);

    return 0;
}