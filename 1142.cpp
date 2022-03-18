#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int x, cont = 0, pum = 1;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << pum++ << " ";
            if (pum % 4 == 0)
            {
                pum++;
                break;
            }
        }
        cout << "PUM" << endl;
    }
    return 0;
}