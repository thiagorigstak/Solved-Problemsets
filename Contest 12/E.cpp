#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int copos, buracos, trocas;
    int answ = 0;
    vector<int> hole, cup;
    cin >> copos >> buracos >> trocas;
    for (int i = 0; i < buracos; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << x << endl;
            return 0;
        }
        hole.push_back(x);
    }
    for (int i = 0; i < copos; i++)
    {
        cup.push_back(0);
    }
    cup[0] = 1;
    for (int i = 0; i < trocas; i++)
    {
        int x, y, guarda;
        cin >> x >> y;
        if (cup[x - 1] == 1)
        {
            for (int j = 0; j < hole.size(); j++)
            {
                if (y == hole[j] && cup[x - 1] == 1)
                {
                    answ = y;
                    guarda = 0;
                    cup[x - 1] = 0;
                    cup[y - 1] = 0;
                    break;
                }
            }
        }
        guarda = cup[x - 1];
        cup[x - 1] = cup[y - 1];
        cup[y - 1] = guarda;
    }
    if (answ != 0)
    {
        cout << answ << endl;
        return 0;
    }
    for (int i = 0; i < cup.size(); i++)
    {
        if (cup[i] == 1)
        {
            cout << i + 1 << endl;
        }
    }
    return 0;
}