#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int x, cont = 1, i = 5;
    cin >> x;
    while (1)
    {
        if (x - i == 0)
        {
            break;
        }
        if (x - i < 0)
        {
            i--;
        }
        else
        {
            cont++;
            x -= i;
        }
    }
    cout << cont << endl;
    return 0;
}