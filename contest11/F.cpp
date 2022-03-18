#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            int contador = 2;
            for (int i = 4; i < x; i += 2)
            {
                if (x % i == 0)
                {
                    contador++;
                }
            }
        }
        else if (x % 3 == 0)
        {
            int contador = 2;
            for (int i = 3; i < x; i += 3)
            {
            }
        }
    }
    return 0;
}