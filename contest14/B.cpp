#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    int min;
    int duplicata = 0;
    int rap;
    vector<int> cidades;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            min = x + 1;
        }
        cidades.push_back(x);
    }
    cidades.push_back(0);
    for (int i = 0; i < n; i++)
    {
        if (cidades[i] < min)
        {
            rap = i + 1;
            min = cidades[i];
            for (int j = i + 1; j < n; j++)
            {
                if (cidades[i] == cidades[j])
                {
                    duplicata = 1;
                    break;
                }
                else
                {
                    duplicata = 0;
                }
            }
        }
    }
    if (duplicata == 1)
    {
        cout << "Still Rozdil" << endl;
    }
    else
    {
        cout << rap << endl;
    }

    return 0;
}